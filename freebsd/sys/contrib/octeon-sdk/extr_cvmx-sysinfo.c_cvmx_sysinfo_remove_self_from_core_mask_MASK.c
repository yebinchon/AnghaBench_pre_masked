
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int core_mask; } ;
struct TYPE_4__ {int lock; TYPE_1__ sysinfo; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_3(void)
{
    int VAR_1 = FUNC_0();
    uint32_t VAR_2 = 1 << VAR_1;

    FUNC_1(&VAR_0.lock);
    VAR_0.sysinfo.core_mask = VAR_0.sysinfo.core_mask & ~VAR_2;
    FUNC_2(&VAR_0.lock);
}
