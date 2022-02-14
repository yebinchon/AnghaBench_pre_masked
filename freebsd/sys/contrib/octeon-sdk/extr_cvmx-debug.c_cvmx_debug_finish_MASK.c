
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int known_cores; unsigned int core_finished; unsigned int focus_core; scalar_t__ ever_been_in_debug; } ;
typedef TYPE_1__ cvmx_debug_state_t ;
struct TYPE_7__ {int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ FUNC_1 () ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_12(void)
{
    unsigned VAR_4 = FUNC_8();
    cvmx_debug_state_t VAR_5;

    if (!VAR_1) return;
    FUNC_2 ("Debug _exit reached!, core %d, cvmx_debug_globals = %p\n", VAR_4, VAR_1);


    FUNC_11 (VAR_3);
    FUNC_11 (VAR_2);


    FUNC_9(&VAR_1->lock);
    VAR_5 = FUNC_1();
    VAR_5.known_cores ^= (1u << VAR_4);
    VAR_5.core_finished |= (1u <<VAR_4);
    FUNC_7(VAR_5);


    if (VAR_5.ever_been_in_debug)
        FUNC_3("finished.", VAR_4);


    if ((FUNC_0 () & VAR_5.core_finished) == FUNC_0 ())
    {
        FUNC_2("All cores done!\n");
        if (VAR_5.ever_been_in_debug)
            FUNC_4("D0");
    }
    if (VAR_5.focus_core == VAR_4 && VAR_5.known_cores != 0)
    {



        unsigned VAR_6;
        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        {
           if (VAR_5.known_cores & (1u<<VAR_6))
           {
               FUNC_2("Routing uart interrupts to Core #%u.\n", VAR_6);
               FUNC_5(&VAR_5, VAR_6);
               FUNC_7(VAR_5);
               break;
            }
        }
    }
    FUNC_10(&VAR_1->lock);


    if (VAR_5.ever_been_in_debug)
        FUNC_6();
}
