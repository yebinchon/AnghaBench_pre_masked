
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc_gred_qopt {int Scell_log; int Plog; int Wlog; int qth_max; int qth_min; int limit; } ;
struct gred_sched_data {int DP; int prio; scalar_t__ backlog; int parms; int limit; } ;
struct gred_sched {struct gred_sched_data** tab; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gred_sched_data* FUNC_0 (int,int ) ;
 struct gred_sched* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static inline int FUNC_4(struct Qdisc *VAR_2, int VAR_3,
     struct tc_gred_qopt *VAR_4, int VAR_5, u8 *VAR_6)
{
 struct gred_sched *VAR_7 = FUNC_1(VAR_2);
 struct gred_sched_data *VAR_8;

 if (VAR_7->tab[VAR_3] == ((void*)0)) {
  VAR_7->tab[VAR_3] = FUNC_0(sizeof(*VAR_8), VAR_1);
  if (VAR_7->tab[VAR_3] == ((void*)0))
   return -VAR_0;
 }

 VAR_8 = VAR_7->tab[VAR_3];
 VAR_8->DP = VAR_3;
 VAR_8->prio = VAR_5;
 VAR_8->limit = VAR_4->limit;

 if (VAR_8->backlog == 0)
  FUNC_2(&VAR_8->parms);

 FUNC_3(&VAR_8->parms,
        VAR_4->qth_min, VAR_4->qth_max, VAR_4->Wlog, VAR_4->Plog,
        VAR_4->Scell_log, VAR_6);

 return 0;
}
