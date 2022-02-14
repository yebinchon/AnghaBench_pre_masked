
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ddbl; scalar_t__ ddbs; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_debug_register_t ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_10__ {TYPE_2__ hw_dbp; } ;
typedef TYPE_4__ cvmx_debug_core_context_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(cvmx_debug_register_t *VAR_0, volatile cvmx_debug_core_context_t *VAR_1)
{

    if (VAR_0->s.ddbs || VAR_0->s.ddbl)
        FUNC_0("T8:", (int) VAR_1->hw_dbp.status);
    else
        FUNC_1("T9");
}
