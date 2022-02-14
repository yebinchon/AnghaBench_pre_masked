
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int unplug_cores; int coremask; int shutdown_done; int shutdown_callback; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(int VAR_1, uint32_t VAR_2, int VAR_3)
{
    cvmx_app_hotplug_info_t *VAR_4;
    int VAR_5;

    if (!(VAR_4 = FUNC_2(VAR_1)))
    {
        FUNC_4("\nERROR: Failed to get hotplug info for app at index=%d\n", VAR_1);
        return -1;
    }
    VAR_4->unplug_cores = VAR_2;







    if ( (VAR_4->coremask | VAR_2 ) != VAR_4->coremask)
    {
        FUNC_4("\nERROR: Not all cores requested are a part of the app "
               "r=%08x:%08x\n", (unsigned int)VAR_2, (unsigned int)VAR_4->coremask);
        return -1;
    }
    if (VAR_4->coremask == VAR_2)
    {
        FUNC_4("\nERROR: Trying to remove all cores in app. "
               "r=%08x:%08x\n", (unsigned int)VAR_2, (unsigned int)VAR_4->coremask);
        return -1;
    }


    for (VAR_5=0; VAR_5<VAR_0; VAR_5++) {
            if (VAR_4->coremask & (1ull<<VAR_5))
                FUNC_3(FUNC_0(VAR_5), 2);
    }
    return 0;
}
