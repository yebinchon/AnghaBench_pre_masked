
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_red_qopt {int qth_min; int qth_max; int Wlog; int Scell_log; int Plog; int flags; int limit; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int qth_min; int Wlog; int qth_max; int Scell_log; int Plog; } ;
struct red_sched_data {TYPE_1__ parms; int flags; int limit; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct tc_red_qopt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 struct red_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_3, struct sk_buff *VAR_4)
{
 struct red_sched_data *VAR_5 = FUNC_4(VAR_3);
 struct nlattr *VAR_6 = ((void*)0);
 struct tc_red_qopt VAR_7 = {
  .limit = VAR_5->limit,
  .flags = VAR_5->flags,
  .qth_min = VAR_5->parms.qth_min >> VAR_5->parms.Wlog,
  .qth_max = VAR_5->parms.qth_max >> VAR_5->parms.Wlog,
  .Wlog = VAR_5->parms.Wlog,
  .Plog = VAR_5->parms.Plog,
  .Scell_log = VAR_5->parms.Scell_log,
 };

 VAR_6 = FUNC_3(VAR_4, VAR_1);
 if (VAR_6 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_4, VAR_2, sizeof(VAR_7), &VAR_7);
 return FUNC_2(VAR_4, VAR_6);

nla_put_failure:
 FUNC_1(VAR_4, VAR_6);
 return -VAR_0;
}
