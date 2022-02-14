
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int coremask; int valid; void* shutdown_callback; void* data; } ;
struct TYPE_4__ {int core_mask; } ;


 void* FUNC_0 (void (*) (void*)) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,int ,int *) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (char*,...) ;

int FUNC_5(void(*VAR_3)(void*), void* VAR_4)
{


    if (!(VAR_2 = FUNC_1(FUNC_3()->core_mask)))
    {

        FUNC_4("ERROR: cmvx_app_hotplug_register() failed\n");
        return -1;
    }


    VAR_2->data = FUNC_0(VAR_4);
    VAR_2->shutdown_callback = FUNC_0(VAR_3);






    FUNC_2(VAR_0, VAR_1, ((void*)0));

    return 0;
}
