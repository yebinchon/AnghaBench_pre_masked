
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct tcf_t {void* expires; void* lastuse; void* install; int action; int bindcnt; int refcnt; int index; } ;
struct TYPE_2__ {scalar_t__ expires; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_skbedit {int flags; TYPE_1__ tcf_tm; struct tcf_t queue_mapping; struct tcf_t priority; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_skbedit {void* expires; void* lastuse; void* install; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {struct tcf_skbedit* priv; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_7, struct tc_action *VAR_8,
    int VAR_9, int VAR_10)
{
 unsigned char *VAR_11 = FUNC_3(VAR_7);
 struct tcf_skbedit *VAR_12 = VAR_8->priv;
 struct tc_skbedit VAR_13 = {
  .index = VAR_12->tcf_index,
  .refcnt = VAR_12->tcf_refcnt - VAR_10,
  .bindcnt = VAR_12->tcf_bindcnt - VAR_9,
  .action = VAR_12->tcf_action,
 };
 struct tcf_t VAR_14;

 FUNC_0(VAR_7, VAR_2, sizeof(VAR_13), &VAR_13);
 if (VAR_12->flags & VAR_0)
  FUNC_0(VAR_7, VAR_3, sizeof(VAR_12->priority),
   &VAR_12->priority);
 if (VAR_12->flags & VAR_1)
  FUNC_0(VAR_7, VAR_4,
   sizeof(VAR_12->queue_mapping), &VAR_12->queue_mapping);
 VAR_14.install = FUNC_1(VAR_6 - VAR_12->tcf_tm.install);
 VAR_14.lastuse = FUNC_1(VAR_6 - VAR_12->tcf_tm.lastuse);
 VAR_14.expires = FUNC_1(VAR_12->tcf_tm.expires);
 FUNC_0(VAR_7, VAR_5, sizeof(VAR_14), &VAR_14);
 return VAR_7->len;

nla_put_failure:
 FUNC_2(VAR_7, VAR_11);
 return -1;
}
