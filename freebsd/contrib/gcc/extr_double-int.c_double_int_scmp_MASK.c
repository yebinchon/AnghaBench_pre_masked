
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ high; scalar_t__ low; } ;
typedef TYPE_1__ double_int ;
typedef scalar_t__ HOST_WIDE_INT ;



int
FUNC_0 (double_int VAR_0, double_int VAR_1)
{
  if (VAR_0.high < VAR_1.high)
    return -1;
  if (VAR_0.high > VAR_1.high)
    return 1;
  if ((HOST_WIDE_INT) VAR_0.low < (HOST_WIDE_INT) VAR_1.low)
    return -1;
  if ((HOST_WIDE_INT) VAR_0.low > (HOST_WIDE_INT) VAR_1.low)
    return 1;

  return 0;
}
