
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdisc_watchdog {TYPE_1__* qdisc; int timer; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct qdisc_watchdog *VAR_1)
{
 FUNC_0(&VAR_1->timer);
 VAR_1->qdisc->flags &= ~VAR_0;
}
