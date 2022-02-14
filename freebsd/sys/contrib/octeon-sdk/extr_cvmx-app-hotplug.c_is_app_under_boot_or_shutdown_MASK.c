
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hotplug_global_lock; scalar_t__ app_under_shutdown; scalar_t__ app_under_boot; } ;
typedef TYPE_1__ cvmx_app_hotplug_global_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
    int VAR_0=0;
    cvmx_app_hotplug_global_t *VAR_1;

    VAR_1 = FUNC_0();
    FUNC_1(&VAR_1->hotplug_global_lock);
    if (VAR_1->app_under_boot || VAR_1->app_under_shutdown) VAR_0=1;
    FUNC_2(&VAR_1->hotplug_global_lock);
    return VAR_0;

}
