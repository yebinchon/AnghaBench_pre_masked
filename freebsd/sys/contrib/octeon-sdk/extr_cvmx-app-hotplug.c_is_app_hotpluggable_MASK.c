
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hotplug_activated_coremask; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(int VAR_0)
{
    cvmx_app_hotplug_info_t *VAR_1;

    if (!(VAR_1 = FUNC_0(VAR_0)))
    {
        FUNC_1("\nERROR: Failed to get hotplug info for app at index=%d\n", VAR_0);
        return -1;
    }
    if (VAR_1->hotplug_activated_coremask) return 1;
    return 0;
}
