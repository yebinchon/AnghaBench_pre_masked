
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gred_sched_data {scalar_t__ prio; } ;
struct gred_sched {int DPs; struct gred_sched_data** tab; } ;
struct Qdisc {int dummy; } ;


 struct gred_sched* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static inline int FUNC_1(struct Qdisc *VAR_0)
{
 struct gred_sched *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->DPs; VAR_2++) {
  struct gred_sched_data *VAR_3 = VAR_1->tab[VAR_2];
  int VAR_4;

  if (VAR_3 == ((void*)0))
   continue;

  for (VAR_4 = 0; VAR_4 < VAR_1->DPs; VAR_4++)
   if (VAR_1->tab[VAR_4] && VAR_1->tab[VAR_4] != VAR_3 &&
       VAR_1->tab[VAR_4]->prio == VAR_3->prio)
    return 1;
 }

 return 0;
}
