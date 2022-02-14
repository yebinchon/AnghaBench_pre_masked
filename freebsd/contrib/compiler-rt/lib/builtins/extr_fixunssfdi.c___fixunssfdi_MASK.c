
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int su_int ;
typedef int du_int ;



du_int FUNC_0(float VAR_0) {
  if (VAR_0 <= 0.0f)
    return 0;
  double VAR_1 = VAR_0;
  su_int VAR_2 = VAR_1 / 4294967296.f;
  su_int VAR_3 = VAR_1 - (double)VAR_2 * 4294967296.f;
  return ((du_int)VAR_2 << 32) | VAR_3;
}
