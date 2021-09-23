#include <iostream>

using namespace std;

void sort1(int arr[],int n){
    int x,z;
 for(int i=1;i<n;++i){
     x=i-1;
     z = arr[i];
     while(x>=0 && arr[x]>z){
         arr[x+1] = arr[x];
         x--;
     }
     arr[x+1] = z;
 }
}
void sort2(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;++i){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sort3(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
             if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
    


int main()
{ int n,x,y,z;
char ch;
 int arr[100];
 cin>>n;
 for(int i = 0;i<n;i++){
     cin>>y;
     arr[i] = y;
 }
cout<<"Enter Choice"<<endl;
cin>>ch;
switch(ch){
    case 'b':  sort3(arr,n);
    case 's':  sort2(arr,n);
    case 'i':  sort1(arr,n);
}

 
 

 for(int i = 0;i<n;i++){
     cout<<arr[i];
     }
 
}
