
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gred_sched_data {scalar_t__ backlog; int parms; } ;
struct gred_sched {int DPs; struct gred_sched_data** tab; } ;
struct Qdisc {int dummy; } ;


 struct gred_sched* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct Qdisc* VAR_0)
{
 int VAR_1;
 struct gred_sched *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->DPs; VAR_1++) {
  struct gred_sched_data *VAR_3 = VAR_2->tab[VAR_1];

  if (!VAR_3)
   continue;

  FUNC_2(&VAR_3->parms);
  VAR_3->backlog = 0;
 }
}
