
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct basic_filter {int ematches; int exts; TYPE_1__ res; int handle; } ;


 int FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int *,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct tcf_proto *VAR_4, unsigned long VAR_5,
        struct sk_buff *VAR_6, struct tcmsg *VAR_7)
{
 struct basic_filter *VAR_8 = (struct basic_filter *) VAR_5;
 struct nlattr *VAR_9;

 if (VAR_8 == ((void*)0))
  return VAR_6->len;

 VAR_7->tcm_handle = VAR_8->handle;

 VAR_9 = FUNC_3(VAR_6, VAR_2);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;

 if (VAR_8->res.classid)
  FUNC_0(VAR_6, VAR_0, VAR_8->res.classid);

 if (FUNC_5(VAR_6, &VAR_8->exts, &VAR_3) < 0 ||
     FUNC_4(VAR_6, &VAR_8->ematches, VAR_1) < 0)
  goto nla_put_failure;

 FUNC_2(VAR_6, VAR_9);
 return VAR_6->len;

nla_put_failure:
 FUNC_1(VAR_6, VAR_9);
 return -1;
}
