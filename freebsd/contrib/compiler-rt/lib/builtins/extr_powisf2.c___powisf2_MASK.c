
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int si_int ;



float FUNC_0(float VAR_0, si_int VAR_1) {
  const int VAR_2 = VAR_1 < 0;
  float VAR_3 = 1;
  while (1) {
    if (VAR_1 & 1)
      VAR_3 *= VAR_0;
    VAR_1 /= 2;
    if (VAR_1 == 0)
      break;
    VAR_0 *= VAR_0;
  }
  return VAR_2 ? 1 / VAR_3 : VAR_3;
}
