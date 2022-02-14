
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;



int
FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, int64_t VAR_2)
{
 uint8_t *VAR_3;

 VAR_3 = VAR_0;

 for (;;) {
  if (VAR_3 >= VAR_1)
   return (-1);
  *VAR_3 = VAR_2 & 0x7f;
  VAR_2 >>= 7;
  if ((VAR_2 == 0 && (*VAR_3 & 0x40) == 0) ||
      (VAR_2 == -1 && (*VAR_3 & 0x40) != 0)) {
   VAR_3++;
   break;
  }
  *VAR_3++ |= 0x80;
 }

 return (VAR_3 - VAR_0);
}
