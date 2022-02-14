
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hi; int lo; } ;
typedef TYPE_1__ DPINT ;



DPINT FUNC_0(DPINT VAR_0)
{
    VAR_0.hi = ~VAR_0.hi;
    VAR_0.lo = ~VAR_0.lo;
    VAR_0.lo ++;
    if (VAR_0.lo == 0)
        VAR_0.hi++;

    return VAR_0;
}
