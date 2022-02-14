
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int step_isr; } ;
typedef TYPE_2__ cvmx_debug_state_t ;
struct TYPE_6__ {int debug; int status; } ;
struct TYPE_8__ {int remote_controlled; TYPE_1__ cop0; } ;
typedef TYPE_3__ cvmx_debug_core_context_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(volatile cvmx_debug_core_context_t *VAR_2, cvmx_debug_state_t VAR_3)
{




    if(!VAR_3.step_isr &&
       (VAR_2->cop0.debug & 0x1) &&
       !(VAR_2->cop0.debug & 0x1e) &&
       ((VAR_2->cop0.status & 0x2) || VAR_1))
        return;

    VAR_2->remote_controlled = 1;
    VAR_0;
    while (VAR_2->remote_controlled)
        ;
    VAR_0;
}
