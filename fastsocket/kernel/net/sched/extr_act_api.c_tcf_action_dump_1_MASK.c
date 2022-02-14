
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int kind; int * dump; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct tc_action*,int ) ;
 int FUNC_6 (struct sk_buff*,struct tc_action*,int,int) ;

int
FUNC_7(struct sk_buff *VAR_3, struct tc_action *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = -VAR_0;
 unsigned char *VAR_8 = FUNC_4(VAR_3);
 struct nlattr *VAR_9;

 if (VAR_4->ops == ((void*)0) || VAR_4->ops->dump == ((void*)0))
  return VAR_7;

 FUNC_0(VAR_3, VAR_1, VAR_4->ops->kind);
 if (FUNC_5(VAR_3, VAR_4, 0))
  goto nla_put_failure;
 VAR_9 = FUNC_2(VAR_3, VAR_2);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;
 if ((VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6)) > 0) {
  FUNC_1(VAR_3, VAR_9);
  return VAR_7;
 }

nla_put_failure:
 FUNC_3(VAR_3, VAR_8);
 return -1;
}
