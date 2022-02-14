
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

uint32_t
FUNC_0(const uint8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 uint32_t VAR_4, VAR_5;
 int VAR_6;
 uint8_t VAR_7;

 VAR_4 = 0xffffffff;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  for (VAR_7 = *VAR_1++, VAR_6 = 0; VAR_6 < 8; VAR_6++, VAR_7 >>= 1) {
   VAR_5 = ((VAR_4 & 0x80000000) ? 1 : 0) ^ (VAR_7 & 0x01);
   VAR_4 <<= 1;
   if (VAR_5)
    VAR_4 = (VAR_4 ^ VAR_0) | VAR_5;
  }
 }

 return (VAR_4);
}
