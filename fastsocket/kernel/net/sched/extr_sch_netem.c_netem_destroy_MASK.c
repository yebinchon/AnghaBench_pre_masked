
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netem_sched_data {int delay_dist; int qdisc; int watchdog; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct netem_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct netem_sched_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->watchdog);
 FUNC_1(VAR_1->qdisc);
 FUNC_0(VAR_1->delay_dist);
}
