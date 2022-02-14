
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long coremask; } ;
typedef TYPE_1__ cvmx_app_hotplug_info_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(int VAR_1)
{
    cvmx_app_hotplug_info_t *VAR_2;
    int VAR_3;
    if (!(VAR_2 = FUNC_1(VAR_1)))
    {
        FUNC_3("\nERROR: Failed to get hotplug info for app at index=%d\n", VAR_1);
        return -1;
    }

    for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
            if (VAR_2->coremask & (1ull<<VAR_3))
                FUNC_2(FUNC_0(VAR_3), 4);
    }
    return 0;
}
