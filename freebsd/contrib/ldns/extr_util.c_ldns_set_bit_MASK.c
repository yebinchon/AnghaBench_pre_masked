
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void
FUNC_0(uint8_t *VAR_0, int VAR_1, bool VAR_2)
{




 if (VAR_1 >= 0 && VAR_1 < 8) {
  if (VAR_2) {
   *VAR_0 = *VAR_0 | (0x01 << VAR_1);
  } else {
   *VAR_0 = *VAR_0 & ~(0x01 << VAR_1);
  }
 }
}
