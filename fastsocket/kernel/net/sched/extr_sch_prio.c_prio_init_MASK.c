
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_sched_data {int ** queues; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Qdisc*,struct nlattr*) ;
 struct prio_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_3, struct nlattr *VAR_4)
{
 struct prio_sched_data *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 for (VAR_6=0; VAR_6<VAR_1; VAR_6++)
  VAR_5->queues[VAR_6] = &VAR_2;

 if (VAR_4 == ((void*)0)) {
  return -VAR_0;
 } else {
  int VAR_7;

  if ((VAR_7= FUNC_0(VAR_3, VAR_4)) != 0)
   return VAR_7;
 }
 return 0;
}
