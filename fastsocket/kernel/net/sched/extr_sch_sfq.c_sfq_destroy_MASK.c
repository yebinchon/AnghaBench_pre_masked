
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfq_sched_data {int perturb_timer; scalar_t__ perturb_period; int filter_list; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 struct sfq_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0)
{
 struct sfq_sched_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->filter_list);
 VAR_1->perturb_period = 0;
 FUNC_0(&VAR_1->perturb_timer);
}
