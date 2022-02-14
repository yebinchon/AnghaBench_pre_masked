
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int handler_cores; unsigned int focus_core; unsigned int known_cores; } ;
typedef TYPE_2__ cvmx_debug_state_t ;
struct TYPE_7__ {scalar_t__ ddbl; scalar_t__ ddbs; scalar_t__ dbp; scalar_t__ dib; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_debug_register_t ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(cvmx_debug_state_t *VAR_0, int VAR_1, cvmx_debug_register_t *VAR_2)
{

    if (VAR_0->handler_cores & (1u << VAR_0->focus_core))
        return;


    if (VAR_2->s.dib || VAR_2->s.dbp || VAR_2->s.ddbs || VAR_2->s.ddbl)
        FUNC_0(VAR_0, VAR_1);




    if ((VAR_0->known_cores & (1u << VAR_0->focus_core)) == 0)
        FUNC_0(VAR_0, VAR_1);
}
