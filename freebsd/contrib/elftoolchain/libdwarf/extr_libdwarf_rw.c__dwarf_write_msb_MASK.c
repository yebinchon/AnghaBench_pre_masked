
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



void
FUNC_0(uint8_t *VAR_0, uint64_t *VAR_1, uint64_t VAR_2,
    int VAR_3)
{
 uint8_t *VAR_4;

 VAR_4 = VAR_0 + *VAR_1;

 switch (VAR_3) {
 case 8:
  VAR_4[7] = VAR_2 & 0xff;
  VAR_4[6] = (VAR_2 >> 8) & 0xff;
  VAR_4[5] = (VAR_2 >> 16) & 0xff;
  VAR_4[4] = (VAR_2 >> 24) & 0xff;
  VAR_2 >>= 32;

 case 4:
  VAR_4[3] = VAR_2 & 0xff;
  VAR_4[2] = (VAR_2 >> 8) & 0xff;
  VAR_2 >>= 16;

 case 2:
  VAR_4[1] = VAR_2 & 0xff;
  VAR_2 >>= 8;

 case 1:
  VAR_4[0] = VAR_2 & 0xff;
  break;
 default:
  return;
 }

 *VAR_1 += VAR_3;
}
