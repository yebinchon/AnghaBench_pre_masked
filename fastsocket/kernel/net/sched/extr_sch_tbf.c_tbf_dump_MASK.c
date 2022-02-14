
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_tbf_qopt {int buffer; int mtu; int peakrate; int rate; int limit; } ;
struct tbf_sched_data {int buffer; int mtu; TYPE_2__* P_tab; TYPE_1__* R_tab; int limit; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {int rate; } ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_tbf_qopt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 struct tbf_sched_data* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_2, struct sk_buff *VAR_3)
{
 struct tbf_sched_data *VAR_4 = FUNC_5(VAR_2);
 struct nlattr *VAR_5;
 struct tc_tbf_qopt VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  goto nla_put_failure;

 VAR_6.limit = VAR_4->limit;
 VAR_6.rate = VAR_4->R_tab->rate;
 if (VAR_4->P_tab)
  VAR_6.peakrate = VAR_4->P_tab->rate;
 else
  FUNC_1(&VAR_6.peakrate, 0, sizeof(VAR_6.peakrate));
 VAR_6.mtu = VAR_4->mtu;
 VAR_6.buffer = VAR_4->buffer;
 FUNC_0(VAR_3, VAR_1, sizeof(VAR_6), &VAR_6);

 FUNC_3(VAR_3, VAR_5);
 return VAR_3->len;

nla_put_failure:
 FUNC_2(VAR_3, VAR_5);
 return -1;
}
