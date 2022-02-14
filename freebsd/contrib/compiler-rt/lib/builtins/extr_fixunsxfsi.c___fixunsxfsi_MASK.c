
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int su_int ;
struct TYPE_7__ {int high; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {int low; } ;
struct TYPE_10__ {TYPE_3__ s; } ;
struct TYPE_11__ {TYPE_2__ low; TYPE_4__ high; } ;
struct TYPE_12__ {long double f; TYPE_5__ u; } ;
typedef TYPE_6__ long_double_bits ;


 int VAR_0 ;

su_int FUNC_0(long double VAR_1) {
  long_double_bits VAR_2;
  VAR_2.f = VAR_1;
  int VAR_3 = (VAR_2.u.high.s.low & 0x00007FFF) - 16383;
  if (VAR_3 < 0 || (VAR_2.u.high.s.low & 0x00008000))
    return 0;
  if ((unsigned)VAR_3 > sizeof(su_int) * VAR_0)
    return ~(su_int)0;
  return VAR_2.u.low.s.high >> (31 - VAR_3);
}
