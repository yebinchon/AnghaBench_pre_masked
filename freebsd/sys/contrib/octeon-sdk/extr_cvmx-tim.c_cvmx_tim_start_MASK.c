
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enable_dwb; int enable_timers; } ;
struct TYPE_5__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_tim_control_t ;
struct TYPE_6__ {int start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
    cvmx_tim_control_t VAR_3;

    VAR_3.u64 = FUNC_1(VAR_1);
    VAR_3.s.enable_dwb = 1;
    VAR_3.s.enable_timers = 1;


    VAR_2.start_time = FUNC_0(VAR_0);
    FUNC_2(VAR_1, VAR_3.u64);
}
