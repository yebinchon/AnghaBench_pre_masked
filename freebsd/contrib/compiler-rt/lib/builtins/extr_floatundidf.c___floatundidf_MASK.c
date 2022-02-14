
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int du_int ;


 int FUNC_0 (int) ;

double FUNC_1(du_int VAR_0) {
  static const double VAR_1 = 4503599627370496.0;
  static const double VAR_2 = 19342813113834066795298816.0;
  static const double VAR_3 =
      19342813118337666422669312.0;

  union {
    uint64_t x;
    double d;
  } VAR_4 = {.d = VAR_2};
  union {
    uint64_t x;
    double d;
  } VAR_5 = {.d = VAR_1};

  VAR_4.x |= VAR_0 >> 32;
  VAR_5.x |= VAR_0 & FUNC_0(0x00000000ffffffff);

  const double VAR_6 = (VAR_4.d - VAR_3) + VAR_5.d;
  return VAR_6;
}
