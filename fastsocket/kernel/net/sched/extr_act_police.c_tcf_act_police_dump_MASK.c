
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_police {scalar_t__ tcfp_ewma_rate; scalar_t__ tcfp_result; TYPE_2__* tcfp_P_tab; TYPE_1__* tcfp_R_tab; int tcf_bindcnt; int tcf_refcnt; int tcfp_burst; int tcfp_mtu; int tcf_action; int tcf_index; } ;
struct tc_police {int peakrate; int rate; int bindcnt; int refcnt; int burst; int mtu; int action; int index; } ;
struct tc_action {struct tcf_police* priv; } ;
struct sk_buff {int len; } ;
typedef int opt ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {int rate; } ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_police*) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_3, struct tc_action *VAR_4, int VAR_5, int VAR_6)
{
 unsigned char *VAR_7 = FUNC_3(VAR_3);
 struct tcf_police *VAR_8 = VAR_4->priv;
 struct tc_police VAR_9 = {
  .index = VAR_8->tcf_index,
  .action = VAR_8->tcf_action,
  .mtu = VAR_8->tcfp_mtu,
  .burst = VAR_8->tcfp_burst,
  .refcnt = VAR_8->tcf_refcnt - VAR_6,
  .bindcnt = VAR_8->tcf_bindcnt - VAR_5,
 };

 if (VAR_8->tcfp_R_tab)
  VAR_9.rate = VAR_8->tcfp_R_tab->rate;
 if (VAR_8->tcfp_P_tab)
  VAR_9.peakrate = VAR_8->tcfp_P_tab->rate;
 FUNC_0(VAR_3, VAR_2, sizeof(VAR_9), &VAR_9);
 if (VAR_8->tcfp_result)
  FUNC_1(VAR_3, VAR_1, VAR_8->tcfp_result);
 if (VAR_8->tcfp_ewma_rate)
  FUNC_1(VAR_3, VAR_0, VAR_8->tcfp_ewma_rate);
 return VAR_3->len;

nla_put_failure:
 FUNC_2(VAR_3, VAR_7);
 return -1;
}
