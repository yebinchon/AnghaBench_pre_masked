
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tu_int ;
typedef int ti_int ;
typedef int si_int ;
struct TYPE_8__ {int all; } ;
struct TYPE_6__ {int low; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_3__ low; TYPE_2__ high; } ;
struct TYPE_10__ {long double f; TYPE_4__ u; } ;
typedef TYPE_5__ long_double_bits ;


 int VAR_0 ;

ti_int FUNC_0(long double VAR_1) {
  const ti_int VAR_2 = (ti_int)((~(tu_int)0) / 2);
  const ti_int VAR_3 = -VAR_2 - 1;
  long_double_bits VAR_4;
  VAR_4.f = VAR_1;
  int VAR_5 = (VAR_4.u.high.s.low & 0x00007FFF) - 16383;
  if (VAR_5 < 0)
    return 0;
  ti_int VAR_6 = -(si_int)((VAR_4.u.high.s.low & 0x00008000) >> 15);
  ti_int VAR_7 = VAR_4.u.low.all;
  if ((unsigned)VAR_5 >= sizeof(ti_int) * VAR_0)
    return VAR_1 > 0 ? VAR_2 : VAR_3;
  if (VAR_5 > 63)
    VAR_7 <<= (VAR_5 - 63);
  else
    VAR_7 >>= (63 - VAR_5);
  return (VAR_7 ^ VAR_6) - VAR_6;
}
