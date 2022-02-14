
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct TYPE_6__ {int nkeys; scalar_t__ mask; scalar_t__ val; } ;
struct TYPE_4__ {int classid; } ;
struct tc_u_knode {int handle; int exts; TYPE_3__* pf; TYPE_3__ sel; int indev; TYPE_3__ mark; TYPE_2__* ht_down; TYPE_1__ res; scalar_t__ ht_up; } ;
struct tc_u_hnode {int divisor; } ;
struct tc_u32_pcnt {int dummy; } ;
struct tc_u32_key {int dummy; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {int handle; } ;


 int FUNC_0 (struct sk_buff*,int ,int,TYPE_3__*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int *,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_10, unsigned long VAR_11,
       struct sk_buff *VAR_12, struct tcmsg *VAR_13)
{
 struct tc_u_knode *VAR_14 = (struct tc_u_knode*)VAR_11;
 struct nlattr *VAR_15;

 if (VAR_14 == ((void*)0))
  return VAR_12->len;

 VAR_13->tcm_handle = VAR_14->handle;

 VAR_15 = FUNC_6(VAR_12, VAR_0);
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_14->handle) == 0) {
  struct tc_u_hnode *VAR_16 = (struct tc_u_hnode*)VAR_11;
  u32 VAR_17 = VAR_16->divisor+1;
  FUNC_2(VAR_12, VAR_2, VAR_17);
 } else {
  FUNC_0(VAR_12, VAR_8,
   sizeof(VAR_14->sel) + VAR_14->sel.nkeys*sizeof(struct tc_u32_key),
   &VAR_14->sel);
  if (VAR_14->ht_up) {
   u32 VAR_18 = VAR_14->handle & 0xFFFFF000;
   FUNC_2(VAR_12, VAR_3, VAR_18);
  }
  if (VAR_14->res.classid)
   FUNC_2(VAR_12, VAR_1, VAR_14->res.classid);
  if (VAR_14->ht_down)
   FUNC_2(VAR_12, VAR_5, VAR_14->ht_down->handle);






  if (FUNC_8(VAR_12, &VAR_14->exts, &VAR_9) < 0)
   goto nla_put_failure;
 }

 FUNC_5(VAR_12, VAR_15);

 if (FUNC_3(VAR_14->handle))
  if (FUNC_9(VAR_12, &VAR_14->exts, &VAR_9) < 0)
   goto nla_put_failure;
 return VAR_12->len;

nla_put_failure:
 FUNC_4(VAR_12, VAR_15);
 return -1;
}
