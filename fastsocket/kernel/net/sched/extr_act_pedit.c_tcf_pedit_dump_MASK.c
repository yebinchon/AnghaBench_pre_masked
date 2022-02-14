
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct tcf_t {int nkeys; void* expires; void* lastuse; void* install; scalar_t__ bindcnt; scalar_t__ refcnt; int action; int flags; int index; int keys; } ;
struct TYPE_2__ {scalar_t__ expires; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_pedit {int tcfp_nkeys; TYPE_1__ tcf_tm; scalar_t__ tcf_bindcnt; scalar_t__ tcf_refcnt; int tcf_action; int tcfp_flags; int tcf_index; int tcfp_keys; } ;
struct tc_pedit_key {int dummy; } ;
struct tc_pedit {int nkeys; void* expires; void* lastuse; void* install; scalar_t__ bindcnt; scalar_t__ refcnt; int action; int flags; int index; int keys; } ;
struct tc_action {struct tcf_pedit* priv; } ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tcf_t*) ;
 struct tcf_t* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, struct tc_action *VAR_6,
     int VAR_7, int VAR_8)
{
 unsigned char *VAR_9 = FUNC_6(VAR_5);
 struct tcf_pedit *VAR_10 = VAR_6->priv;
 struct tc_pedit *VAR_11;
 struct tcf_t VAR_12;
 int VAR_13;

 VAR_13 = sizeof(*VAR_11) + VAR_10->tcfp_nkeys * sizeof(struct tc_pedit_key);


 VAR_11 = FUNC_3(VAR_13, VAR_1);
 if (FUNC_7(!VAR_11))
  return -VAR_0;

 FUNC_4(VAR_11->keys, VAR_10->tcfp_keys,
        VAR_10->tcfp_nkeys * sizeof(struct tc_pedit_key));
 VAR_11->index = VAR_10->tcf_index;
 VAR_11->nkeys = VAR_10->tcfp_nkeys;
 VAR_11->flags = VAR_10->tcfp_flags;
 VAR_11->action = VAR_10->tcf_action;
 VAR_11->refcnt = VAR_10->tcf_refcnt - VAR_8;
 VAR_11->bindcnt = VAR_10->tcf_bindcnt - VAR_7;

 FUNC_0(VAR_5, VAR_2, VAR_13, VAR_11);
 VAR_12.install = FUNC_1(VAR_4 - VAR_10->tcf_tm.install);
 VAR_12.lastuse = FUNC_1(VAR_4 - VAR_10->tcf_tm.lastuse);
 VAR_12.expires = FUNC_1(VAR_10->tcf_tm.expires);
 FUNC_0(VAR_5, VAR_3, sizeof(VAR_12), &VAR_12);
 FUNC_2(VAR_11);
 return VAR_5->len;

nla_put_failure:
 FUNC_5(VAR_5, VAR_9);
 FUNC_2(VAR_11);
 return -1;
}
