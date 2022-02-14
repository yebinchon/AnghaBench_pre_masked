
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint32_t ;
struct TYPE_4__ {unsigned long long shutdown_cores; unsigned long long hotplug_activated_coremask; int shutdown_done; int shutdown_callback; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (unsigned long long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(uint32_t VAR_1, int VAR_2)
{
    int VAR_3;
    cvmx_app_hotplug_info_t *VAR_4;

    if (!(VAR_4 = FUNC_2(VAR_1)))
    {
        FUNC_4("\nERROR: Failed to get hotplug info for coremask: 0x%x\n", (unsigned int)VAR_1);
        return -1;
    }
    VAR_4->shutdown_cores = VAR_1;
    if (!VAR_4->shutdown_callback)
    {
        FUNC_4("\nERROR: Target application has not registered for hotplug!\n");
        return -1;
    }

    if (VAR_4->hotplug_activated_coremask != VAR_1)
    {
        FUNC_4("\nERROR: Not all application cores have activated hotplug\n");
        return -1;
    }


    for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
            if (VAR_1 & (1ull<<VAR_3))
                FUNC_3(FUNC_0(VAR_3), 1);
    }

    if (VAR_2)
    {
        while (!VAR_4->shutdown_done);


        FUNC_1(VAR_4, sizeof(*VAR_4));
    }

    return 0;
}
