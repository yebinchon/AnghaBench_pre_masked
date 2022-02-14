
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;

size_t
FUNC_0(uint8_t* VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 size_t VAR_4;
 VAR_4 = *VAR_1++;
 while(VAR_4) {
  if(VAR_4&0xc0)
   return 0;
  VAR_3 += VAR_4 + 1;
  if(VAR_3 >= VAR_0)
   return 0;
  if(VAR_3 > VAR_2)
   return 0;
  VAR_1 += VAR_4;
  VAR_4 = *VAR_1++;
 }
 VAR_3 += 1;
 if(VAR_3 > VAR_2)
  return 0;
 return VAR_3;
}
