
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gred_sched {int DPs; scalar_t__* tab; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct gred_sched* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0)
{
 struct gred_sched *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->DPs; VAR_2++) {
  if (VAR_1->tab[VAR_2])
   FUNC_0(VAR_1->tab[VAR_2]);
 }
}
