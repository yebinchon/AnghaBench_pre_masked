
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const di_int ;


 int VAR_0 ;
 int FUNC_0 () ;

di_int FUNC_1(di_int VAR_1, di_int VAR_2) {
  const int VAR_3 = (int)(sizeof(di_int) * VAR_0);
  const di_int VAR_4 = (di_int)1 << (VAR_3 - 1);
  const di_int VAR_5 = ~VAR_4;
  if (VAR_1 == VAR_4) {
    if (VAR_2 == 0 || VAR_2 == 1)
      return VAR_1 * VAR_2;
    FUNC_0();
  }
  if (VAR_2 == VAR_4) {
    if (VAR_1 == 0 || VAR_1 == 1)
      return VAR_1 * VAR_2;
    FUNC_0();
  }
  di_int VAR_6 = VAR_1 >> (VAR_3 - 1);
  di_int VAR_7 = (VAR_1 ^ VAR_6) - VAR_6;
  di_int VAR_8 = VAR_2 >> (VAR_3 - 1);
  di_int VAR_9 = (VAR_2 ^ VAR_8) - VAR_8;
  if (VAR_7 < 2 || VAR_9 < 2)
    return VAR_1 * VAR_2;
  if (VAR_6 == VAR_8) {
    if (VAR_7 > VAR_5 / VAR_9)
      FUNC_0();
  } else {
    if (VAR_7 > VAR_4 / -VAR_9)
      FUNC_0();
  }
  return VAR_1 * VAR_2;
}
