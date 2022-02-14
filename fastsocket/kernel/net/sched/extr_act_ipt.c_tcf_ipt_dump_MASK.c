
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tm ;
struct TYPE_9__ {int name; } ;
struct TYPE_10__ {TYPE_1__ user; } ;
struct tcf_t {void* expires; void* lastuse; void* install; TYPE_2__ u; scalar_t__ refcnt; scalar_t__ bindcnt; } ;
struct TYPE_15__ {scalar_t__ expires; scalar_t__ lastuse; scalar_t__ install; } ;
struct tcf_ipt {TYPE_7__ tcf_tm; int tcfi_tname; int tcfi_hook; int tcf_index; TYPE_8__* tcfi_t; scalar_t__ tcf_refcnt; scalar_t__ tcf_bindcnt; } ;
struct tc_cnt {void* expires; void* lastuse; void* install; TYPE_2__ u; scalar_t__ refcnt; scalar_t__ bindcnt; } ;
struct tc_action {struct tcf_ipt* priv; } ;
struct sk_buff {int len; } ;
struct ipt_entry_target {void* expires; void* lastuse; void* install; TYPE_2__ u; scalar_t__ refcnt; scalar_t__ bindcnt; } ;
struct TYPE_13__ {int target_size; } ;
struct TYPE_12__ {TYPE_3__* target; } ;
struct TYPE_14__ {TYPE_5__ user; TYPE_4__ kernel; } ;
struct TYPE_16__ {TYPE_6__ u; } ;
struct TYPE_11__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct tcf_t*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct tcf_t*) ;
 struct tcf_t* FUNC_5 (TYPE_8__*,int,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_8, struct tc_action *VAR_9, int VAR_10, int VAR_11)
{
 unsigned char *VAR_12 = FUNC_7(VAR_8);
 struct tcf_ipt *VAR_13 = VAR_9->priv;
 struct ipt_entry_target *VAR_14;
 struct tcf_t VAR_15;
 struct tc_cnt VAR_16;






 VAR_14 = FUNC_5(VAR_13->tcfi_t, VAR_13->tcfi_t->u.user.target_size, VAR_0);
 if (FUNC_9(!VAR_14))
  goto nla_put_failure;

 VAR_16.bindcnt = VAR_13->tcf_bindcnt - VAR_10;
 VAR_16.refcnt = VAR_13->tcf_refcnt - VAR_11;
 FUNC_8(VAR_14->u.user.name, VAR_13->tcfi_t->u.kernel.target->name);

 FUNC_0(VAR_8, VAR_5, VAR_13->tcfi_t->u.user.target_size, VAR_14);
 FUNC_2(VAR_8, VAR_3, VAR_13->tcf_index);
 FUNC_2(VAR_8, VAR_2, VAR_13->tcfi_hook);
 FUNC_0(VAR_8, VAR_1, sizeof(struct tc_cnt), &VAR_16);
 FUNC_1(VAR_8, VAR_4, VAR_13->tcfi_tname);
 VAR_15.install = FUNC_3(VAR_7 - VAR_13->tcf_tm.install);
 VAR_15.lastuse = FUNC_3(VAR_7 - VAR_13->tcf_tm.lastuse);
 VAR_15.expires = FUNC_3(VAR_13->tcf_tm.expires);
 FUNC_0(VAR_8, VAR_6, sizeof (VAR_15), &VAR_15);
 FUNC_4(VAR_14);
 return VAR_8->len;

nla_put_failure:
 FUNC_6(VAR_8, VAR_12);
 FUNC_4(VAR_14);
 return -1;
}
