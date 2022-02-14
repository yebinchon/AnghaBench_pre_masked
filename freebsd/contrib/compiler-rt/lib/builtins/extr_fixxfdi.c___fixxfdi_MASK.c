
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int si_int ;
struct TYPE_8__ {int all; } ;
struct TYPE_6__ {int low; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_3__ low; TYPE_2__ high; } ;
struct TYPE_10__ {long double f; TYPE_4__ u; } ;
typedef TYPE_5__ long_double_bits ;
typedef int du_int ;
typedef int di_int ;


 int VAR_0 ;

di_int FUNC_0(long double VAR_1) {
  const di_int VAR_2 = (di_int)((~(du_int)0) / 2);
  const di_int VAR_3 = -VAR_2 - 1;
  long_double_bits VAR_4;
  VAR_4.f = VAR_1;
  int VAR_5 = (VAR_4.u.high.s.low & 0x00007FFF) - 16383;
  if (VAR_5 < 0)
    return 0;
  if ((unsigned)VAR_5 >= sizeof(di_int) * VAR_0)
    return VAR_1 > 0 ? VAR_2 : VAR_3;
  di_int VAR_6 = -(si_int)((VAR_4.u.high.s.low & 0x00008000) >> 15);
  di_int VAR_7 = VAR_4.u.low.all;
  VAR_7 = (du_int)VAR_7 >> (63 - VAR_5);
  return (VAR_7 ^ VAR_6) - VAR_6;
}
