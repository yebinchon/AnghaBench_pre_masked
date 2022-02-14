
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;

unsigned short
FUNC_0(const unsigned char *VAR_1, unsigned long VAR_2, unsigned short VAR_3)
{
 if (VAR_2 > 0) {
  while (VAR_2--) {
   VAR_3 = VAR_0[((VAR_3>>8) ^ *VAR_1++) & 0xFFL] ^ (VAR_3 << 8);
  }
 }
 return VAR_3;
}
