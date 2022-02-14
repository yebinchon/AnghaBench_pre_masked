
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_15__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_23__ {int ever_been_in_debug; } ;
typedef TYPE_2__ cvmx_debug_state_t ;
struct TYPE_24__ {int u64; } ;
typedef TYPE_3__ cvmx_debug_register_t ;
struct TYPE_22__ {int debug; } ;
struct TYPE_25__ {TYPE_1__ cop0; } ;
typedef TYPE_4__ cvmx_debug_core_context_t ;
struct TYPE_21__ {int needs_proxy; int (* wait_for_resume ) (TYPE_4__ volatile*,TYPE_2__) ;} ;
struct TYPE_20__ {scalar_t__ comm_changed; scalar_t__ comm_type; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__ volatile*) ;
 TYPE_18__** VAR_3 ;
 TYPE_4__* FUNC_2 () ;
 TYPE_2__ FUNC_3 () ;
 TYPE_15__* VAR_4 ;
 int FUNC_4 (TYPE_3__*,TYPE_4__ volatile*) ;
 int FUNC_5 (TYPE_4__ volatile*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_4__ volatile*) ;
 int FUNC_8 (TYPE_4__ volatile*,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_2__,unsigned int,TYPE_3__*,int) ;
 int FUNC_10 (TYPE_2__) ;
 int FUNC_11 (char*,long long,int) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (TYPE_4__ volatile*,TYPE_2__) ;

void FUNC_17 (uint64_t VAR_5, uint64_t VAR_6)
{
    volatile cvmx_debug_core_context_t *VAR_7;
    int VAR_8 = 0;

    FUNC_6("Entering debug exception handler\n");
    FUNC_6("Debug named block at %p\n", VAR_4);
    if (VAR_2)
    {
        uint64_t VAR_9;
        FUNC_0(VAR_9, VAR_1);
        FUNC_11("Unexpected debug-mode exception occured at 0x%llx, 0x%llx spinning\n", (long long) VAR_9, (long long)(VAR_2));



        while (1)
            ;
    }

    VAR_7 = FUNC_2();
    FUNC_8(VAR_7, VAR_6, VAR_5);

    {
        cvmx_debug_state_t VAR_10;
        FUNC_13(&VAR_4->lock);
        VAR_10 = FUNC_3();
        VAR_10.ever_been_in_debug = 1;
        FUNC_10 (VAR_10);
        FUNC_14(&VAR_4->lock);
    }
    FUNC_5(VAR_7);

    do
    {
        int VAR_11;
        VAR_8 = 0;

        FUNC_13(&VAR_4->lock);
        if (VAR_4->comm_changed)
        {
            FUNC_6("Communication changed: %d\n", (int)VAR_4->comm_changed);
            if (VAR_4->comm_changed > VAR_0)
            {
                FUNC_11("Unknown communication spinning: %lld > %d.\n", (long long)VAR_4->comm_changed, (int)(VAR_0));



                while (1)
                    ;
            }
            VAR_4->comm_type = VAR_4->comm_changed - 1;
            VAR_4->comm_changed = 0;
        }
        FUNC_14(&VAR_4->lock);
        VAR_11 = VAR_3[VAR_4->comm_type]->needs_proxy;

        {
            cvmx_debug_register_t VAR_12;
            cvmx_debug_state_t VAR_13;
            unsigned VAR_14 = FUNC_12();

            VAR_13 = FUNC_3();
            VAR_12.u64 = VAR_7->cop0.debug;



            if (!FUNC_9(VAR_13, VAR_14, &VAR_12, VAR_11))
            {
                VAR_7->cop0.debug = VAR_12.u64;
                break;
            }
        }

        if (VAR_11)
        {
            cvmx_debug_register_t VAR_15;
            VAR_15.u64 = VAR_7->cop0.debug;
            FUNC_6("Starting to proxy\n");
            VAR_8 = FUNC_4(&VAR_15, VAR_7);
            VAR_7->cop0.debug = VAR_15.u64;
        }
        else
        {
            FUNC_6("Starting to wait for remote host\n");
            VAR_3[VAR_4->comm_type]->wait_for_resume(VAR_7, FUNC_3());
        }
    } while (VAR_8);

    FUNC_1(VAR_7);

    FUNC_7(VAR_7);
    FUNC_6("Exiting debug exception handler\n");
}
