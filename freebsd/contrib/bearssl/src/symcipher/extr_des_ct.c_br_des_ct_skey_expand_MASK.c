
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void
FUNC_0(uint32_t *VAR_0,
 unsigned VAR_1, const uint32_t *VAR_2)
{
 VAR_1 <<= 4;
 while (VAR_1 -- > 0) {
  uint32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

  VAR_3 = *VAR_2 ++;
  VAR_4 = VAR_3 & 0x11111111;
  VAR_5 = (VAR_3 >> 1) & 0x11111111;
  VAR_6 = (VAR_3 >> 2) & 0x11111111;
  VAR_7 = (VAR_3 >> 3) & 0x11111111;
  *VAR_0 ++ = (VAR_4 << 4) - VAR_4;
  *VAR_0 ++ = (VAR_5 << 4) - VAR_5;
  *VAR_0 ++ = (VAR_6 << 4) - VAR_6;
  *VAR_0 ++ = (VAR_7 << 4) - VAR_7;
  VAR_3 = *VAR_2 ++;
  VAR_4 = VAR_3 & 0x11111111;
  VAR_5 = (VAR_3 >> 1) & 0x11111111;
  *VAR_0 ++ = (VAR_4 << 4) - VAR_4;
  *VAR_0 ++ = (VAR_5 << 4) - VAR_5;
 }
}
