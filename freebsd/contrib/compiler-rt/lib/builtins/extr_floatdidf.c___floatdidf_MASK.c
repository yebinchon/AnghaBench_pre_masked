
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef double const int32_t ;
typedef int di_int ;


 int FUNC_0 (int) ;

double FUNC_1(di_int VAR_0) {
  static const double VAR_1 = 4503599627370496.0;
  static const double VAR_2 = 4294967296.0;

  union {
    int64_t x;
    double d;
  } VAR_3 = {.d = VAR_1};

  const double VAR_4 = (int32_t)(VAR_0 >> 32) * VAR_2;
  VAR_3.x |= VAR_0 & FUNC_0(0x00000000ffffffff);

  const double VAR_5 = (VAR_4 - VAR_1) + VAR_3.d;
  return VAR_5;
}
