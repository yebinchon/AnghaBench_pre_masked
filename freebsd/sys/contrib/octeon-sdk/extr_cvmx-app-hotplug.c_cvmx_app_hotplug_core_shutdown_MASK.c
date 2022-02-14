
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int core_mask; } ;
typedef TYPE_1__ cvmx_sysinfo_t ;
struct TYPE_6__ {int shutdown_done; scalar_t__ shutdown_cores; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
    uint32_t VAR_1;
    if (VAR_0->shutdown_cores)
    {
        cvmx_sysinfo_t *VAR_2 = FUNC_7();
       FUNC_1();
        if (FUNC_4(VAR_2->core_mask))
        {
            FUNC_2(VAR_0,
                  sizeof(*VAR_0));



            VAR_0->shutdown_done = 1;
        }

        FUNC_5 ();
        VAR_1 = FUNC_6();
        FUNC_1();

        FUNC_0();
    }
    else
    {
        FUNC_8();
        FUNC_3();
        VAR_1 = FUNC_6();
        FUNC_0();
    }
}
