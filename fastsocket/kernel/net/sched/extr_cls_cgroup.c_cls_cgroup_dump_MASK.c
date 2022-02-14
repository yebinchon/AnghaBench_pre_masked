
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int tcm_handle; } ;
struct tcf_proto {struct cls_cgroup_head* root; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct cls_cgroup_head {int exts; int ematches; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int *,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct tcf_proto *VAR_3, unsigned long VAR_4,
      struct sk_buff *VAR_5, struct tcmsg *VAR_6)
{
 struct cls_cgroup_head *VAR_7 = VAR_3->root;
 unsigned char *VAR_8 = FUNC_3(VAR_5);
 struct nlattr *VAR_9;

 VAR_6->tcm_handle = VAR_7->handle;

 VAR_9 = FUNC_1(VAR_5, VAR_1);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_5(VAR_5, &VAR_7->exts, &VAR_2) < 0 ||
     FUNC_4(VAR_5, &VAR_7->ematches, VAR_0) < 0)
  goto nla_put_failure;

 FUNC_0(VAR_5, VAR_9);

 if (FUNC_6(VAR_5, &VAR_7->exts, &VAR_2) < 0)
  goto nla_put_failure;

 return VAR_5->len;

nla_put_failure:
 FUNC_2(VAR_5, VAR_8);
 return -1;
}
