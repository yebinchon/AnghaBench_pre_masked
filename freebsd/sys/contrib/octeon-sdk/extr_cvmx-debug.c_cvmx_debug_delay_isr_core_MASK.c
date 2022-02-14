
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {unsigned int focus_core; scalar_t__ focus_switch; scalar_t__ step_isr; } ;
typedef TYPE_1__ cvmx_debug_state_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 () ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_1, uint32_t VAR_2, int VAR_3,
                                      cvmx_debug_state_t VAR_4)
{
    volatile uint64_t VAR_5;
    if(!VAR_3 || VAR_4.step_isr || VAR_1 == VAR_4.focus_core || VAR_4.focus_switch)
        return;

    FUNC_1 ("Core #%u spinning for focus at 0x%x\n", VAR_1, (unsigned int)VAR_2);

    for(VAR_5 = VAR_0; VAR_5 > 0 ; VAR_5--)
    {
       VAR_4 = FUNC_0();


       if (VAR_5 > 600000 && VAR_4.focus_switch)
           VAR_5 = 500000;
    }

}
