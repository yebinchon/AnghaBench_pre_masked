
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned long long) ;
 int FUNC_1 (char**,size_t*,int*,int,int,int,int,int,int,int,int,int,char*,int) ;

__attribute__((used)) static void
FUNC_2(char** VAR_1, size_t* VAR_2, int* VAR_3, void* VAR_4,
 int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9,
 int VAR_10, int VAR_11)
{
 char VAR_12[VAR_0];
 int VAR_13 = 0;
 int VAR_14 = (VAR_4 == 0);




 unsigned long long VAR_15 = (unsigned long long)VAR_4;

 int VAR_16 = FUNC_0(VAR_12, (int)sizeof(VAR_12), VAR_15);
 if(VAR_14) {
  VAR_12[0]=')';
  VAR_12[1]='l';
  VAR_12[2]='i';
  VAR_12[3]='n';
  VAR_12[4]='(';
  VAR_16 = 5;
 } else {

  if(VAR_16 < VAR_0)
   VAR_12[VAR_16++] = 'x';
  if(VAR_16 < VAR_0)
   VAR_12[VAR_16++] = '0';
 }
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
  VAR_10, VAR_11, VAR_14, VAR_13, VAR_12, VAR_16);
}
