
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



uint16_t
FUNC_0(uint32_t *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4 = 0;
 int VAR_5;
 VAR_1 = (VAR_1 + 3) & ~3;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 4) {
  for (VAR_5 = 28; VAR_5 >= 0; VAR_5 -= 4) {
   VAR_3 = ((VAR_4 >> 12) ^ (VAR_0[VAR_2/4] >> VAR_5)) & 0xf;
   VAR_4 = (VAR_4 << 4) ^ (VAR_3 << 12) ^ (VAR_3 << 5) ^ VAR_3;
  }
  VAR_4 &= 0xffff;
 }
 return ((uint16_t) VAR_4);
}
