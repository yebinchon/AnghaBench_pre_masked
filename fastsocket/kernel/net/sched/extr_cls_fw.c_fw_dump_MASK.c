
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct tcf_proto {scalar_t__ root; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct fw_head {int mask; } ;
struct TYPE_2__ {int classid; } ;
struct fw_filter {int exts; int indev; TYPE_1__ res; int id; } ;


 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_5, unsigned long VAR_6,
     struct sk_buff *VAR_7, struct tcmsg *VAR_8)
{
 struct fw_head *VAR_9 = (struct fw_head *)VAR_5->root;
 struct fw_filter *VAR_10 = (struct fw_filter*)VAR_6;
 unsigned char *VAR_11 = FUNC_5(VAR_7);
 struct nlattr *VAR_12;

 if (VAR_10 == ((void*)0))
  return VAR_7->len;

 VAR_8->tcm_handle = VAR_10->id;

 if (!VAR_10->res.classid && !FUNC_9(&VAR_10->exts))
  return VAR_7->len;

 VAR_12 = FUNC_3(VAR_7, VAR_3);
 if (VAR_12 == ((void*)0))
  goto nla_put_failure;

 if (VAR_10->res.classid)
  FUNC_1(VAR_7, VAR_0, VAR_10->res.classid);




 if (VAR_9->mask != 0xFFFFFFFF)
  FUNC_1(VAR_7, VAR_2, VAR_9->mask);

 if (FUNC_7(VAR_7, &VAR_10->exts, &VAR_4) < 0)
  goto nla_put_failure;

 FUNC_2(VAR_7, VAR_12);

 if (FUNC_8(VAR_7, &VAR_10->exts, &VAR_4) < 0)
  goto nla_put_failure;

 return VAR_7->len;

nla_put_failure:
 FUNC_4(VAR_7, VAR_11);
 return -1;
}
