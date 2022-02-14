
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_htb_glob {scalar_t__ debug; int defcls; int rate2quantum; int version; int direct_pkts; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct htb_sched {int defcls; int rate2quantum; int direct_pkts; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;
typedef int gopt ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct tc_htb_glob*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 struct htb_sched* FUNC_4 (struct Qdisc*) ;
 int * FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_3, struct sk_buff *VAR_4)
{
 spinlock_t *VAR_5 = FUNC_5(VAR_3);
 struct htb_sched *VAR_6 = FUNC_4(VAR_3);
 struct nlattr *VAR_7;
 struct tc_htb_glob VAR_8;

 FUNC_6(VAR_5);

 VAR_8.direct_pkts = VAR_6->direct_pkts;
 VAR_8.version = VAR_0;
 VAR_8.rate2quantum = VAR_6->rate2quantum;
 VAR_8.defcls = VAR_6->defcls;
 VAR_8.debug = 0;

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (VAR_7 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_4, VAR_1, sizeof(VAR_8), &VAR_8);
 FUNC_2(VAR_4, VAR_7);

 FUNC_7(VAR_5);
 return VAR_4->len;

nla_put_failure:
 FUNC_7(VAR_5);
 FUNC_1(VAR_4, VAR_7);
 return -1;
}
