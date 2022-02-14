
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int **,size_t*,char**,size_t*,int *,size_t) ;

int FUNC_1(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3,
 uint8_t* VAR_4, size_t VAR_5)
{
 uint8_t* VAR_6 = *VAR_0;
 char* VAR_7 = *VAR_2;
 size_t VAR_8 = *VAR_1, VAR_9 = *VAR_3;
 int VAR_10=FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if(VAR_10 == -1) {
  *VAR_0 = VAR_6;
  *VAR_2 = VAR_7;
  *VAR_1 = VAR_8;
  *VAR_3 = VAR_9;
  return -1;
 }
 return VAR_10;
}
