
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ enable_timers; scalar_t__ enable_dwb; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_tim_control_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(void)
{
    cvmx_tim_control_t VAR_1;
    VAR_1.u64 = FUNC_0(VAR_0);
    VAR_1.s.enable_dwb = 0;
    VAR_1.s.enable_timers = 0;
    FUNC_1(VAR_0, VAR_1.u64);
}
