
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {unsigned long long core_mask; } ;
typedef TYPE_1__ cvmx_sysinfo_t ;
struct TYPE_5__ {unsigned long long hplugged_cores; unsigned long long hotplug_activated_coremask; int coremask; int valid; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (char*,...) ;

int FUNC_7(void)
{
    uint64_t VAR_3 = 0;
    uint64_t VAR_4 = 10000000;

    while (!VAR_1)
    {
        VAR_3++;
        if ((VAR_3 % VAR_4) == 0)
            FUNC_6("waiting for cnt=%lld\n", (unsigned long long)VAR_3);
    }

    if (VAR_1->hplugged_cores & (1ull << FUNC_1()))
    {



        cvmx_sysinfo_t *VAR_5 = FUNC_5();
        VAR_5->core_mask |= 1ull << FUNC_1();
    }
    else
    {
        FUNC_0();
    }
    FUNC_3(&VAR_2);
    if (!VAR_1)
    {
        FUNC_4(&VAR_2);
        FUNC_6("ERROR: This application is not registered for hotplug\n");
        return -1;
    }

    FUNC_2(VAR_0);
    VAR_1->hotplug_activated_coremask |= (1ull<<FUNC_1());







    FUNC_4(&VAR_2);

    return 0;
}
