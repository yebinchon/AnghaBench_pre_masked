
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const uint8_t* VAR_3 = (const uint8_t*)VAR_0;
 const uint8_t* VAR_4 = (const uint8_t*)VAR_1;
 size_t VAR_5;
 for(VAR_5=0; VAR_5<VAR_2; VAR_5++) {
  if(VAR_3[VAR_5] < VAR_4[VAR_5])
   return -1;
  else if(VAR_3[VAR_5] > VAR_4[VAR_5])
   return 1;
 }
 return 0;
}
