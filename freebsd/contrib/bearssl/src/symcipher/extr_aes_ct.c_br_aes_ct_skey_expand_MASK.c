
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void
FUNC_0(uint32_t *VAR_0,
 unsigned VAR_1, const uint32_t *VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;

 VAR_5 = (VAR_1 + 1) << 2;
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_5; VAR_3 ++, VAR_4 += 2) {
  uint32_t VAR_6, VAR_7;

  VAR_6 = VAR_7 = VAR_2[VAR_3];
  VAR_6 &= 0x55555555;
  VAR_0[VAR_4 + 0] = VAR_6 | (VAR_6 << 1);
  VAR_7 &= 0xAAAAAAAA;
  VAR_0[VAR_4 + 1] = VAR_7 | (VAR_7 >> 1);
 }
}
