
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int focus_core; } ;
typedef TYPE_2__ cvmx_debug_state_t ;
struct TYPE_6__ {scalar_t__ dbp; scalar_t__ dss; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_debug_register_t ;



__attribute__((used)) static void FUNC_0(cvmx_debug_state_t VAR_0, unsigned VAR_1, cvmx_debug_register_t *VAR_2)
{
    volatile int VAR_3;
    if (VAR_2->s.dss || VAR_2->s.dbp || VAR_1 != VAR_0.focus_core)
        return;
    for (VAR_3 = 0; VAR_3 < 2400; VAR_3++)
    {
        asm volatile (".set push		\n\t"
                      ".set noreorder		\n\t"
                      "nop			\n\t"
                      "nop			\n\t"
                      "nop			\n\t"
                      "nop			\n\t"
                      ".set pop");

    }

}
