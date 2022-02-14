
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



int FUNC_0(uint8_t* VAR_0, size_t VAR_1, uint8_t* VAR_2,
 size_t VAR_3)
{
 size_t VAR_4;
 if(!VAR_0 || !VAR_2)
  return 0;
 for(VAR_4=0; VAR_4<VAR_1 && VAR_4<VAR_3; VAR_4++) {
  if((VAR_0[VAR_4] & VAR_2[VAR_4]) != 0)
   return 1;
 }
 return 0;
}
