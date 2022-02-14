
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ coremask; scalar_t__ valid; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;
struct TYPE_6__ {TYPE_1__* hotplug_info_array; } ;
typedef TYPE_2__ cvmx_app_hotplug_global_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,int,unsigned int,unsigned int) ;

cvmx_app_hotplug_info_t* FUNC_2(uint32_t VAR_1)
{
    cvmx_app_hotplug_info_t *VAR_2;
    cvmx_app_hotplug_global_t *VAR_3;
    int VAR_4;
    int VAR_5 = 0;




    VAR_3 = FUNC_0();
    if (!VAR_3) return ((void*)0);
    VAR_2 = VAR_3->hotplug_info_array;


    for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
    {
        if (VAR_2[VAR_4].coremask == VAR_1)
        {
     if (VAR_5)
                FUNC_1("cvmx_app_hotplug_get_info(): coremask match %d -- coremask 0x%x, valid %d\n", VAR_4, (unsigned int)VAR_2[VAR_4].coremask, (unsigned int)VAR_2[VAR_4].valid);
            return &VAR_2[VAR_4];
        }
    }
    return ((void*)0);
}
