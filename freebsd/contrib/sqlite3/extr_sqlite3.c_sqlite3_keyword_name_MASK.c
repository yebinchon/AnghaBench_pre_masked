
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 char* VAR_5 ;

int FUNC_0(int VAR_6,const char **VAR_7,int *VAR_8){
  if( VAR_6<0 || VAR_6>=VAR_1 ) return VAR_0;
  *VAR_7 = VAR_5 + VAR_4[VAR_6];
  *VAR_8 = VAR_3[VAR_6];
  return VAR_2;
}
