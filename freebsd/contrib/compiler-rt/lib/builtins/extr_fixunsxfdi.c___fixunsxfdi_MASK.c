
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int all; } ;
struct TYPE_7__ {int low; } ;
struct TYPE_8__ {TYPE_2__ s; } ;
struct TYPE_9__ {TYPE_1__ low; TYPE_3__ high; } ;
struct TYPE_10__ {long double f; TYPE_4__ u; } ;
typedef TYPE_5__ long_double_bits ;
typedef int du_int ;


 int VAR_0 ;

du_int FUNC_0(long double VAR_1) {
  long_double_bits VAR_2;
  VAR_2.f = VAR_1;
  int VAR_3 = (VAR_2.u.high.s.low & 0x00007FFF) - 16383;
  if (VAR_3 < 0 || (VAR_2.u.high.s.low & 0x00008000))
    return 0;
  if ((unsigned)VAR_3 > sizeof(du_int) * VAR_0)
    return ~(du_int)0;
  return VAR_2.u.low.all >> (63 - VAR_3);
}
