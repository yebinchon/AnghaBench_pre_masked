
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {int order; struct tc_action* next; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,struct tc_action*,int,int) ;

int
FUNC_4(struct sk_buff *VAR_1, struct tc_action *VAR_2, int VAR_3, int VAR_4)
{
 struct tc_action *VAR_5;
 int VAR_6 = -VAR_0;
 struct nlattr *VAR_7;

 while ((VAR_5 = VAR_2) != ((void*)0)) {
  VAR_2 = VAR_5->next;
  VAR_7 = FUNC_2(VAR_1, VAR_5->order);
  if (VAR_7 == ((void*)0))
   goto nla_put_failure;
  VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_3, VAR_4);
  if (VAR_6 < 0)
   goto errout;
  FUNC_1(VAR_1, VAR_7);
 }

 return 0;

nla_put_failure:
 VAR_6 = -VAR_0;
errout:
 FUNC_0(VAR_1, VAR_7);
 return VAR_6;
}
