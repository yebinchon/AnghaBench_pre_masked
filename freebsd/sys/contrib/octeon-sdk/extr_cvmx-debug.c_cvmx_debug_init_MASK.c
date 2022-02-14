
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cvmx_spinlock_t ;
struct TYPE_7__ {unsigned int known_cores; unsigned int core_finished; int focus_core; unsigned int active_cores; int focus_switch; int step_isr; } ;
typedef TYPE_1__ cvmx_debug_state_t ;
struct TYPE_8__ {int (* install_break_handler ) () ;int (* init ) () ;} ;
typedef TYPE_2__ cvmx_debug_comm_t ;
struct TYPE_9__ {size_t comm_type; int init_complete; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__** VAR_3 ;
 unsigned int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ FUNC_5 () ;
 TYPE_4__* VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int) ;
 int ** VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

void FUNC_17(void)
{
    cvmx_debug_state_t VAR_6;
    int VAR_7;
    const cvmx_debug_comm_t *VAR_8;
    cvmx_spinlock_t *VAR_9;
    unsigned int VAR_10 = FUNC_3();

    if (!FUNC_4())
        return;

    FUNC_7();



    FUNC_0(VAR_10);

    FUNC_6();


    VAR_8 = VAR_3[VAR_4->comm_type];
    VAR_9 = &VAR_4->lock;

    VAR_7 = FUNC_12();
    FUNC_8(VAR_7);


    if (VAR_8->init)
        VAR_8->init();

    {
        FUNC_13(VAR_9);
        VAR_6 = FUNC_5();




        VAR_6.known_cores |= (1u << VAR_7);
        VAR_6.core_finished &= ~(1u << VAR_7);

        FUNC_11(VAR_6);
        FUNC_14(VAR_9);
    }



    FUNC_0(VAR_10);

    if (FUNC_1(VAR_10))

    {
        FUNC_9("cvmx_debug_init core: %d\n", VAR_7);
        VAR_6 = FUNC_5();
        VAR_6.focus_core = VAR_7;
        VAR_6.active_cores = VAR_6.known_cores;
        VAR_6.focus_switch = 1;
        VAR_6.step_isr = 1;
        FUNC_9("Known cores at init: 0x%x\n", (int)VAR_6.known_cores);
        FUNC_11(VAR_6);
        VAR_4->init_complete = 1;
        VAR_1;
    }
    while (!VAR_4->init_complete)
    {

    }

    if (FUNC_2())
        FUNC_10();



    if (FUNC_1(VAR_10))

    {
        if (VAR_8->install_break_handler)
            VAR_8->install_break_handler();
    }
}
