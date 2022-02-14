
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



uint64_t FUNC_0(uint8_t **VAR_0) {
  uint64_t VAR_1 = 0;
  int VAR_2 = 0;
  while (1) {
    uint8_t VAR_3 = **VAR_0;
    *VAR_0 = *VAR_0 + 1;
    VAR_1 |= (VAR_3 & 0x7f) << VAR_2;
    if ((VAR_3 & 0x80) == 0)
      break;
    VAR_2 += 7;
  }

  return VAR_1;
}
