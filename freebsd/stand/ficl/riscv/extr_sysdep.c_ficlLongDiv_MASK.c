
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int quot; int rem; } ;
typedef TYPE_1__ UNSQR ;
struct TYPE_6__ {int hi; int lo; } ;
typedef int FICL_UNS ;
typedef TYPE_2__ DPUNS ;



UNSQR FUNC_0(DPUNS VAR_0, FICL_UNS VAR_1)
{
    UNSQR VAR_2;
    uint64_t VAR_3, VAR_4;

    VAR_4 = VAR_0.hi;
    VAR_3 = (VAR_4 << 32) | VAR_0.lo;

    VAR_2.quot = VAR_3 / VAR_1;
    VAR_2.rem = VAR_3 % VAR_1;

    return VAR_2;
}
