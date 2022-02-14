
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int si_int ;
struct TYPE_3__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_4__ {TYPE_1__ s; void* all; } ;
typedef TYPE_2__ dwords ;
typedef void* di_int ;



si_int FUNC_0(di_int VAR_0, di_int VAR_1) {
  dwords VAR_2;
  VAR_2.all = VAR_0;
  dwords VAR_3;
  VAR_3.all = VAR_1;
  if (VAR_2.s.high < VAR_3.s.high)
    return 0;
  if (VAR_2.s.high > VAR_3.s.high)
    return 2;
  if (VAR_2.s.low < VAR_3.s.low)
    return 0;
  if (VAR_2.s.low > VAR_3.s.low)
    return 2;
  return 1;
}
