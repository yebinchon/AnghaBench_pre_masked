
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ valid; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;
struct TYPE_8__ {TYPE_1__* hotplug_info_array; } ;
typedef TYPE_2__ cvmx_app_hotplug_global_t ;
struct TYPE_9__ {int base_addr; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,int ,TYPE_2__*) ;

cvmx_app_hotplug_info_t* FUNC_2(int VAR_2)
{
    cvmx_app_hotplug_info_t *VAR_3;
    cvmx_app_hotplug_global_t *VAR_4;

    VAR_4 = FUNC_0();
    if (!VAR_4) return ((void*)0);
    VAR_3 = VAR_4->hotplug_info_array;





    if (VAR_2 < VAR_0)
    {
        if (VAR_3[VAR_2].valid)
        {

            return &VAR_3[VAR_2];
        }
    }
    return ((void*)0);
}
