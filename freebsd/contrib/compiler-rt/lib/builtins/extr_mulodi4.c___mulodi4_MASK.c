
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const di_int ;


 int VAR_0 ;

di_int FUNC_0(di_int VAR_1, di_int VAR_2, int *VAR_3) {
  const int VAR_4 = (int)(sizeof(di_int) * VAR_0);
  const di_int VAR_5 = (di_int)1 << (VAR_4 - 1);
  const di_int VAR_6 = ~VAR_5;
  *VAR_3 = 0;
  di_int VAR_7 = VAR_1 * VAR_2;
  if (VAR_1 == VAR_5) {
    if (VAR_2 != 0 && VAR_2 != 1)
      *VAR_3 = 1;
    return VAR_7;
  }
  if (VAR_2 == VAR_5) {
    if (VAR_1 != 0 && VAR_1 != 1)
      *VAR_3 = 1;
    return VAR_7;
  }
  di_int VAR_8 = VAR_1 >> (VAR_4 - 1);
  di_int VAR_9 = (VAR_1 ^ VAR_8) - VAR_8;
  di_int VAR_10 = VAR_2 >> (VAR_4 - 1);
  di_int VAR_11 = (VAR_2 ^ VAR_10) - VAR_10;
  if (VAR_9 < 2 || VAR_11 < 2)
    return VAR_7;
  if (VAR_8 == VAR_10) {
    if (VAR_9 > VAR_6 / VAR_11)
      *VAR_3 = 1;
  } else {
    if (VAR_9 > VAR_5 / -VAR_11)
      *VAR_3 = 1;
  }
  return VAR_7;
}
