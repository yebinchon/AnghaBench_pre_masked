
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct tcf_t {void* expires; void* lastuse; void* install; int ifindex; int eaction; int bindcnt; int refcnt; int action; int index; } ;
struct TYPE_2__ {scalar_t__ expires; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_mirred {TYPE_1__ tcf_tm; int tcfm_ifindex; int tcfm_eaction; int tcf_bindcnt; int tcf_refcnt; int tcf_action; int tcf_index; } ;
struct tc_mirred {void* expires; void* lastuse; void* install; int ifindex; int eaction; int bindcnt; int refcnt; int action; int index; } ;
struct tc_action {struct tcf_mirred* priv; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct tc_action *VAR_4, int VAR_5, int VAR_6)
{
 unsigned char *VAR_7 = FUNC_3(VAR_3);
 struct tcf_mirred *VAR_8 = VAR_4->priv;
 struct tc_mirred VAR_9 = {
  .index = VAR_8->tcf_index,
  .action = VAR_8->tcf_action,
  .refcnt = VAR_8->tcf_refcnt - VAR_6,
  .bindcnt = VAR_8->tcf_bindcnt - VAR_5,
  .eaction = VAR_8->tcfm_eaction,
  .ifindex = VAR_8->tcfm_ifindex,
 };
 struct tcf_t VAR_10;

 FUNC_0(VAR_3, VAR_0, sizeof(VAR_9), &VAR_9);
 VAR_10.install = FUNC_1(VAR_2 - VAR_8->tcf_tm.install);
 VAR_10.lastuse = FUNC_1(VAR_2 - VAR_8->tcf_tm.lastuse);
 VAR_10.expires = FUNC_1(VAR_8->tcf_tm.expires);
 FUNC_0(VAR_3, VAR_1, sizeof(VAR_10), &VAR_10);
 return VAR_3->len;

nla_put_failure:
 FUNC_2(VAR_3, VAR_7);
 return -1;
}
