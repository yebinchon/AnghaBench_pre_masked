
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbf_sched_data {int qdisc; scalar_t__ R_tab; scalar_t__ P_tab; int watchdog; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tbf_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct tbf_sched_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(&VAR_1->watchdog);

 if (VAR_1->P_tab)
  FUNC_2(VAR_1->P_tab);
 if (VAR_1->R_tab)
  FUNC_2(VAR_1->R_tab);

 FUNC_0(VAR_1->qdisc);
}
