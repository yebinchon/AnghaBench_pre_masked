
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_gred_sopt {int flags; int grio; int def_DP; int DPs; } ;
struct tc_gred_qopt {int DP; int qth_min; int qth_max; int Wlog; int qave; int bytesin; int packets; int pdrop; int forced; int early; int other; int Scell_log; int Plog; int prio; int backlog; int limit; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int qth_min; int Wlog; int qth_max; int qavg; int Scell_log; int Plog; } ;
struct TYPE_3__ {int pdrop; int forced_drop; int prob_drop; int other; } ;
struct gred_sched_data {int DP; TYPE_2__ parms; int bytesin; int packetsin; TYPE_1__ stats; int prio; int backlog; int limit; } ;
struct gred_sched {struct gred_sched_data** tab; int red_flags; int def; int DPs; } ;
struct Qdisc {int dummy; } ;
typedef int sopt ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct tc_gred_sopt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct gred_sched*,struct gred_sched_data*) ;
 int FUNC_2 (struct gred_sched*) ;
 scalar_t__ FUNC_3 (struct gred_sched*) ;
 int FUNC_4 (struct tc_gred_qopt*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,struct tc_gred_qopt*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 int FUNC_7 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ) ;
 struct gred_sched* FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_5, struct sk_buff *VAR_6)
{
 struct gred_sched *VAR_7 = FUNC_9(VAR_5);
 struct nlattr *VAR_8, *VAR_9 = ((void*)0);
 int VAR_10;
 struct tc_gred_sopt VAR_11 = {
  .DPs = VAR_7->DPs,
  .def_DP = VAR_7->def,
  .grio = FUNC_2(VAR_7),
  .flags = VAR_7->red_flags,
 };

 VAR_9 = FUNC_8(VAR_6, VAR_4);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_6, VAR_2, sizeof(VAR_11), &VAR_11);
 VAR_8 = FUNC_8(VAR_6, VAR_3);
 if (VAR_8 == ((void*)0))
  goto nla_put_failure;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  struct gred_sched_data *VAR_12 = VAR_7->tab[VAR_10];
  struct tc_gred_qopt VAR_13;

  FUNC_4(&VAR_13, 0, sizeof(VAR_13));

  if (!VAR_12) {




   VAR_13.DP = VAR_1 + VAR_10;
   goto append_opt;
  }

  VAR_13.limit = VAR_12->limit;
  VAR_13.DP = VAR_12->DP;
  VAR_13.backlog = VAR_12->backlog;
  VAR_13.prio = VAR_12->prio;
  VAR_13.qth_min = VAR_12->parms.qth_min >> VAR_12->parms.Wlog;
  VAR_13.qth_max = VAR_12->parms.qth_max >> VAR_12->parms.Wlog;
  VAR_13.Wlog = VAR_12->parms.Wlog;
  VAR_13.Plog = VAR_12->parms.Plog;
  VAR_13.Scell_log = VAR_12->parms.Scell_log;
  VAR_13.other = VAR_12->stats.other;
  VAR_13.early = VAR_12->stats.prob_drop;
  VAR_13.forced = VAR_12->stats.forced_drop;
  VAR_13.pdrop = VAR_12->stats.pdrop;
  VAR_13.packets = VAR_12->packetsin;
  VAR_13.bytesin = VAR_12->bytesin;

  if (FUNC_3(VAR_7))
   FUNC_1(VAR_7, VAR_12);

  VAR_13.qave = FUNC_10(&VAR_12->parms, VAR_12->parms.qavg);

append_opt:
  if (FUNC_5(VAR_6, sizeof(VAR_13), &VAR_13) < 0)
   goto nla_put_failure;
 }

 FUNC_7(VAR_6, VAR_8);

 return FUNC_7(VAR_6, VAR_9);

nla_put_failure:
 FUNC_6(VAR_6, VAR_9);
 return -VAR_0;
}
