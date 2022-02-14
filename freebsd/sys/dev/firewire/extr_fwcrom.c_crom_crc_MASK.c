
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



uint16_t
FUNC_0(uint32_t *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_4 = VAR_0[VAR_2];
  for (VAR_3 = 28; VAR_3 >= 0; VAR_3 -= 4) {
   VAR_5 = ((VAR_6 >> 12) ^ (VAR_4 >> VAR_3)) & 0xf;
   VAR_6 = (VAR_6 << 4) ^ (VAR_5 << 12) ^ (VAR_5 << 5) ^ VAR_5;
  }
  VAR_6 &= 0xffff;
 }
 return ((uint16_t) VAR_6);
}
