
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned short FUNC_0(unsigned int VAR_0)
{
 unsigned short VAR_1, VAR_2, VAR_3;

 if (VAR_0 > 65535)
  VAR_0 = 65535;
 VAR_3 = VAR_0;
 VAR_1 = 7;
 if (VAR_3 < 128) {
  while (VAR_1 > 0 && VAR_3 < (1 << VAR_1))
   VAR_1--;
 } else {
  while (VAR_3 > 255) {
   VAR_3 >>= 1;
   VAR_1++;
  }
 }
 VAR_2 = VAR_0 - (1 << VAR_1);
 if (VAR_2 > 0) {
  if (VAR_1 > 8)
   VAR_2 >>= VAR_1 - 8;
  else if (VAR_1 < 8)
   VAR_2 <<= 8 - VAR_1;
  VAR_2 &= 255;
 }
 return (VAR_1 << 8) | VAR_2;
}
