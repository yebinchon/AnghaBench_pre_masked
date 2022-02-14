
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* app_name; scalar_t__ valid; scalar_t__ hotplug_activated_coremask; scalar_t__ coremask; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;


 int FUNC_0 (char*,char*,unsigned int,unsigned int,unsigned int) ;

void FUNC_1(cvmx_app_hotplug_info_t* VAR_0)
{
    FUNC_0("name=%s coremask=%08x hotplugged coremask=%08x valid=%d\n", VAR_0->app_name,
           (unsigned int)VAR_0->coremask, (unsigned int)VAR_0->hotplug_activated_coremask, (unsigned int)VAR_0->valid);
}
