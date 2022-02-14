
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct tcf_t {void* expires; void* lastuse; void* install; int action; int bindcnt; int refcnt; int index; } ;
struct TYPE_2__ {scalar_t__ expires; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_defact {TYPE_1__ tcf_tm; int tcfd_defdata; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_defact {void* expires; void* lastuse; void* install; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {struct tcf_defact* priv; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_t*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_5(struct sk_buff *VAR_4, struct tc_action *VAR_5,
    int VAR_6, int VAR_7)
{
 unsigned char *VAR_8 = FUNC_4(VAR_4);
 struct tcf_defact *VAR_9 = VAR_5->priv;
 struct tc_defact VAR_10 = {
  .index = VAR_9->tcf_index,
  .refcnt = VAR_9->tcf_refcnt - VAR_7,
  .bindcnt = VAR_9->tcf_bindcnt - VAR_6,
  .action = VAR_9->tcf_action,
 };
 struct tcf_t VAR_11;

 FUNC_0(VAR_4, VAR_1, sizeof(VAR_10), &VAR_10);
 FUNC_1(VAR_4, VAR_0, VAR_9->tcfd_defdata);
 VAR_11.install = FUNC_2(VAR_3 - VAR_9->tcf_tm.install);
 VAR_11.lastuse = FUNC_2(VAR_3 - VAR_9->tcf_tm.lastuse);
 VAR_11.expires = FUNC_2(VAR_9->tcf_tm.expires);
 FUNC_0(VAR_4, VAR_2, sizeof(VAR_11), &VAR_11);
 return VAR_4->len;

nla_put_failure:
 FUNC_3(VAR_4, VAR_8);
 return -1;
}
