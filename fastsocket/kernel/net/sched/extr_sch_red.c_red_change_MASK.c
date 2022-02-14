
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_red_qopt {scalar_t__ limit; int Scell_log; int Plog; int Wlog; int qth_max; int qth_min; int flags; } ;
struct red_sched_data {scalar_t__ limit; int parms; struct Qdisc* qdisc; int flags; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct Qdisc* FUNC_2 (struct Qdisc*,int *,scalar_t__) ;
 struct tc_red_qopt* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_5 (struct Qdisc*) ;
 struct red_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (int *,int ,int ,int ,int ,int ,struct tc_red_qopt*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct Qdisc *VAR_6, struct nlattr *VAR_7)
{
 struct red_sched_data *VAR_8 = FUNC_6(VAR_6);
 struct nlattr *VAR_9[VAR_1 + 1];
 struct tc_red_qopt *VAR_10;
 struct Qdisc *VAR_11 = ((void*)0);
 int VAR_12;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_9, VAR_1, VAR_7, VAR_5);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_9[VAR_2] == ((void*)0) ||
     VAR_9[VAR_3] == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9[VAR_2]);

 if (VAR_10->limit > 0) {
  VAR_11 = FUNC_2(VAR_6, &VAR_4, VAR_10->limit);
  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);
 }

 FUNC_10(VAR_6);
 VAR_8->flags = VAR_10->flags;
 VAR_8->limit = VAR_10->limit;
 if (VAR_11) {
  FUNC_7(VAR_8->qdisc, VAR_8->qdisc->q.qlen);
  FUNC_5(VAR_8->qdisc);
  VAR_8->qdisc = VAR_11;
 }

 FUNC_9(&VAR_8->parms, VAR_10->qth_min, VAR_10->qth_max, VAR_10->Wlog,
     VAR_10->Plog, VAR_10->Scell_log,
     FUNC_3(VAR_9[VAR_3]));

 if (FUNC_12(&VAR_6->q))
  FUNC_8(&VAR_8->parms);

 FUNC_11(VAR_6);
 return 0;
}
