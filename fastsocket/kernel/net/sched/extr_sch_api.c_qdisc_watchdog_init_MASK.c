
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct qdisc_watchdog {struct Qdisc* qdisc; TYPE_1__ timer; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;

void FUNC_1(struct qdisc_watchdog *VAR_3, struct Qdisc *VAR_4)
{
 FUNC_0(&VAR_3->timer, VAR_0, VAR_1);
 VAR_3->timer.function = VAR_2;
 VAR_3->qdisc = VAR_4;
}
