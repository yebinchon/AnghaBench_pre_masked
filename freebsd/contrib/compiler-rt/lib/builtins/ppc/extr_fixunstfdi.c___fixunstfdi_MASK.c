
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_5__ {double d; int x; } ;
typedef TYPE_2__ doublebits ;
struct TYPE_4__ {double hi; double lo; } ;
struct TYPE_6__ {long double ld; TYPE_1__ s; } ;
typedef TYPE_3__ DD ;


 int FUNC_0 (int) ;
 int const FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

uint64_t FUNC_3(long double VAR_1) {
  const DD VAR_2 = {.ld = VAR_1};
  const doublebits VAR_3 = {.d = VAR_2.s.hi};

  const uint32_t VAR_4 =
      (uint32_t)(VAR_3.x >> 32) - FUNC_1(0x3ff00000);


  if (FUNC_1(0x04000000) > VAR_4) {
    const int VAR_5 = VAR_4 >> 20;

    uint64_t VAR_6 = VAR_3.x & FUNC_2(0x000fffffffffffff);
    VAR_6 |= FUNC_2(0x0010000000000000);
    VAR_6 <<= 11;


    if (0.0 != VAR_2.s.lo) {
      const doublebits VAR_7 = {.d = VAR_2.s.lo};
      int64_t VAR_8 = VAR_7.x & FUNC_0(0x000fffffffffffff);
      VAR_8 |= FUNC_0(0x0010000000000000);



      const int64_t VAR_9 = ((int64_t)(VAR_7.x)) >> 63;
      VAR_8 = (VAR_8 ^ VAR_9) - VAR_9;



      const int VAR_10 = (int)(VAR_7.x >> 52) & 0x7ff;



      VAR_8 >>=
          (VAR_5 - (VAR_10 - (1023 - 11)));

      VAR_6 += VAR_8;
    }

    VAR_6 >>= (63 - VAR_5);
    return VAR_6;
  }


  if (1.0 > VAR_2.s.hi)
    return FUNC_2(0);
  else
    return VAR_0;
}
