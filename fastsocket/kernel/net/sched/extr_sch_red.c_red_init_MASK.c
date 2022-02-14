
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct red_sched_data {int * qdisc; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 struct red_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc* VAR_1, struct nlattr *VAR_2)
{
 struct red_sched_data *VAR_3 = FUNC_0(VAR_1);

 VAR_3->qdisc = &VAR_0;
 return FUNC_1(VAR_1, VAR_2);
}
