
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int shutdown_done; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,unsigned int) ;

int FUNC_3(uint32_t VAR_0)
{
    cvmx_app_hotplug_info_t *VAR_1;

    if (!(VAR_1 = FUNC_1(VAR_0)))
    {
        FUNC_2("\nERROR: Failed to get hotplug info for coremask: 0x%x\n", (unsigned int)VAR_0);
        return -1;
    }

    while(!VAR_1->shutdown_done);


    FUNC_0(VAR_1, sizeof(*VAR_1));

    return 0;
}
