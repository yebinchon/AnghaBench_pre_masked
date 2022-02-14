
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int app_shutdown; int coremask; int valid; void* hotplug_start; void* unplug_callback; void* cores_removed_callback; void* cores_added_callback; void* shutdown_callback; void* data; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;
struct TYPE_8__ {void* shutdown_callback; void* cores_added_callback; void* cores_removed_callback; void* unplug_core_callback; void* hotplug_start; } ;
typedef TYPE_2__ cvmx_app_hotplug_callbacks_t ;
struct TYPE_9__ {int core_mask; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (char*,...) ;

int FUNC_5(cvmx_app_hotplug_callbacks_t *VAR_3, void* VAR_4,
                                 int VAR_5)
{
    cvmx_app_hotplug_info_t *VAR_6;


    VAR_6 = FUNC_1(FUNC_3()->core_mask);
    VAR_2 = VAR_6;
    if (!VAR_6)
    {

        FUNC_4("ERROR: cmvx_app_hotplug_register() failed\n");
        return -1;
    }

    VAR_6->data = FUNC_0(VAR_4);
    VAR_6->shutdown_callback = FUNC_0(VAR_3->shutdown_callback);
    VAR_6->cores_added_callback = FUNC_0(VAR_3->cores_added_callback);
    VAR_6->cores_removed_callback = FUNC_0(VAR_3->cores_removed_callback);
    VAR_6->unplug_callback = FUNC_0(VAR_3->unplug_core_callback);
    VAR_6->hotplug_start = FUNC_0(VAR_3->hotplug_start);
    VAR_6->app_shutdown = VAR_5;





    FUNC_2(VAR_0, VAR_1, ((void*)0));
    return 0;

}
