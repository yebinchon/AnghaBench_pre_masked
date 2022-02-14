
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const**) ;

int FUNC_1(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 uint8_t VAR_6 = 0;
 const char* VAR_7 = VAR_3;
 size_t VAR_8 = 0;


 while (FUNC_0(&VAR_6, &VAR_7)) {
  if(*VAR_5 < VAR_8+1)
   return VAR_0;
  VAR_4[VAR_8++] = VAR_6;
 }
 if(!VAR_7)
  return VAR_2;
 *VAR_5 = VAR_8;
 return VAR_1;
}
