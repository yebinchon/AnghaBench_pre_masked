
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct tcf_t {void* expires; void* lastuse; void* install; scalar_t__ ptype; int pval; int paction; int action; int bindcnt; int refcnt; int index; } ;
struct TYPE_2__ {scalar_t__ expires; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_gact {TYPE_1__ tcf_tm; scalar_t__ tcfg_ptype; int tcfg_pval; int tcfg_paction; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_gact_p {void* expires; void* lastuse; void* install; scalar_t__ ptype; int pval; int paction; int action; int bindcnt; int refcnt; int index; } ;
struct tc_gact {void* expires; void* lastuse; void* install; scalar_t__ ptype; int pval; int paction; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {struct tcf_gact* priv; } ;
struct sk_buff {int len; } ;
typedef int p_opt ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct tc_action *VAR_5, int VAR_6, int VAR_7)
{
 unsigned char *VAR_8 = FUNC_3(VAR_4);
 struct tcf_gact *VAR_9 = VAR_5->priv;
 struct tc_gact VAR_10 = {
  .index = VAR_9->tcf_index,
  .refcnt = VAR_9->tcf_refcnt - VAR_7,
  .bindcnt = VAR_9->tcf_bindcnt - VAR_6,
  .action = VAR_9->tcf_action,
 };
 struct tcf_t VAR_11;

 FUNC_0(VAR_4, VAR_0, sizeof(VAR_10), &VAR_10);
 VAR_11.install = FUNC_1(VAR_3 - VAR_9->tcf_tm.install);
 VAR_11.lastuse = FUNC_1(VAR_3 - VAR_9->tcf_tm.lastuse);
 VAR_11.expires = FUNC_1(VAR_9->tcf_tm.expires);
 FUNC_0(VAR_4, VAR_2, sizeof(VAR_11), &VAR_11);
 return VAR_4->len;

nla_put_failure:
 FUNC_2(VAR_4, VAR_8);
 return -1;
}
