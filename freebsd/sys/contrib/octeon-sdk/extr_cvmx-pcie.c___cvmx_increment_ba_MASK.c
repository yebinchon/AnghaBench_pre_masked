
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ba; } ;
struct TYPE_5__ {int ba; } ;
struct TYPE_7__ {TYPE_2__ cn63xx; TYPE_1__ cn68xx; } ;
typedef TYPE_3__ cvmx_sli_mem_access_subidx_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(cvmx_sli_mem_access_subidx_t *VAR_1)
{
    if (FUNC_0(VAR_0))
        VAR_1->cn68xx.ba++;
    else
        VAR_1->cn63xx.ba++;
}
