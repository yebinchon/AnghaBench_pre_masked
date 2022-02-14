
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lo; scalar_t__ hi; } ;
typedef scalar_t__ FICL_UNS ;
typedef TYPE_1__ DPUNS ;


 TYPE_1__ FUNC_0 (scalar_t__,scalar_t__) ;

DPUNS FUNC_1(DPUNS VAR_0, FICL_UNS VAR_1, FICL_UNS VAR_2)
{
    DPUNS VAR_3 = FUNC_0(VAR_0.lo, VAR_1);
    DPUNS VAR_4 = FUNC_0(VAR_0.hi, VAR_1);
    VAR_3.hi += VAR_4.lo;
    VAR_4.lo = VAR_3.lo + VAR_2;

    if (VAR_4.lo < VAR_3.lo)
        VAR_3.hi++;

    VAR_3.lo = VAR_4.lo;

    return VAR_3;
}
