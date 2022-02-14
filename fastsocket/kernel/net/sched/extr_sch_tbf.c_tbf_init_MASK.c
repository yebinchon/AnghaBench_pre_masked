
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbf_sched_data {int * qdisc; int watchdog; int t_c; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct tbf_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *,struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct nlattr*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc* VAR_2, struct nlattr *VAR_3)
{
 struct tbf_sched_data *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4->t_c = FUNC_0();
 FUNC_2(&VAR_4->watchdog, VAR_2);
 VAR_4->qdisc = &VAR_1;

 return FUNC_3(VAR_2, VAR_3);
}
