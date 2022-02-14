
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_3__ {void* lo; void* hi; } ;
typedef scalar_t__ FICL_UNS ;
typedef TYPE_1__ DPUNS ;



DPUNS FUNC_0(FICL_UNS VAR_0, FICL_UNS VAR_1)
{
    DPUNS VAR_2;
    uint64_t VAR_3;

    VAR_3 = (uint64_t)VAR_0 * (uint64_t) VAR_1;

    VAR_2.hi = (uint32_t)( VAR_3 >> 32 );
    VAR_2.lo = (uint32_t)( VAR_3 & 0xFFFFFFFFL);

    return VAR_2;
}
