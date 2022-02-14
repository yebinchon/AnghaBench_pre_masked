
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ddbl; int ddbs; int dbp; int dib; scalar_t__ dss; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_debug_register_t ;



__attribute__((used)) static int FUNC_0(cvmx_debug_register_t *VAR_0)
{
    if (VAR_0->s.dss && !VAR_0->s.dib && !VAR_0->s.dbp && !VAR_0->s.ddbs && !VAR_0->s.ddbl)
        return 1;
    return 0;
}
