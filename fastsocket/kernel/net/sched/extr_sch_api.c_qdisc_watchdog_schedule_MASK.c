
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdisc_watchdog {int timer; TYPE_2__* qdisc; } ;
typedef int psched_time_t ;
typedef int ktime_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct qdisc_watchdog *VAR_3, psched_time_t VAR_4)
{
 ktime_t VAR_5;

 if (FUNC_5(VAR_2,
       &FUNC_4(VAR_3->qdisc)->state))
  return;

 VAR_3->qdisc->flags |= VAR_1;
 VAR_5 = FUNC_3(0, 0);
 VAR_5 = FUNC_2(VAR_5, FUNC_0(VAR_4));
 FUNC_1(&VAR_3->timer, VAR_5, VAR_0);
}
