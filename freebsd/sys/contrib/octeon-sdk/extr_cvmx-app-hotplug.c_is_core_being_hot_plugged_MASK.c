
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long hplugged_cores; } ;


 TYPE_1__* VAR_0 ;
 unsigned long long FUNC_0 () ;

int FUNC_1(void)
{


    if (!VAR_0) return 0;
    if (VAR_0->hplugged_cores &
        (1ull << FUNC_0()))
        return 1;
    return 0;



}
