
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void
FUNC_0(uint32_t *VAR_0, uint32_t *VAR_1)
{



 uint32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = *VAR_0;
 VAR_3 = *VAR_1;
 VAR_4 = ((VAR_2 >> 1) ^ VAR_3) & 0x55555555;
 VAR_3 ^= VAR_4;
 VAR_2 ^= VAR_4 << 1;
 VAR_4 = ((VAR_3 >> 8) ^ VAR_2) & 0x00FF00FF;
 VAR_2 ^= VAR_4;
 VAR_3 ^= VAR_4 << 8;
 VAR_4 = ((VAR_3 >> 2) ^ VAR_2) & 0x33333333;
 VAR_2 ^= VAR_4;
 VAR_3 ^= VAR_4 << 2;
 VAR_4 = ((VAR_2 >> 16) ^ VAR_3) & 0x0000FFFF;
 VAR_3 ^= VAR_4;
 VAR_2 ^= VAR_4 << 16;
 VAR_4 = ((VAR_2 >> 4) ^ VAR_3) & 0x0F0F0F0F;
 VAR_3 ^= VAR_4;
 VAR_2 ^= VAR_4 << 4;
 *VAR_0 = VAR_2;
 *VAR_1 = VAR_3;
}
