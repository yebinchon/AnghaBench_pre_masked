
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {struct qfq_group* groups; int clhash; } ;
struct qfq_group {int index; int slot_shift; int * slots; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct qfq_sched* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_4, struct nlattr *VAR_5)
{
 struct qfq_sched *VAR_6 = FUNC_2(VAR_4);
 struct qfq_group *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_1(&VAR_6->clhash);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
  VAR_7 = &VAR_6->groups[VAR_8];
  VAR_7->index = VAR_8;
  VAR_7->slot_shift = VAR_3 + VAR_0
       - (VAR_1 - VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   FUNC_0(&VAR_7->slots[VAR_9]);
 }

 return 0;
}
