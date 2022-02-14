
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_common {struct tcf_common* tcfc_next; } ;
struct tc_action {int order; struct tcf_common* priv; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,struct tc_action*,int ,int) ;
 size_t FUNC_6 (int,int) ;
 struct tcf_common** VAR_3 ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4, struct netlink_callback *VAR_5,
         int VAR_6, struct tc_action *VAR_7)
{
 struct tcf_common *VAR_8;
 int VAR_9 = 0, VAR_10 = -1, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 struct nlattr *VAR_14;

 FUNC_3(&VAR_2);

 VAR_12 = VAR_5->args[0];

 for (VAR_11 = 0; VAR_11 < (VAR_0 + 1); VAR_11++) {
  VAR_8 = VAR_3[FUNC_6(VAR_11, VAR_0)];

  for (; VAR_8; VAR_8 = VAR_8->tcfc_next) {
   VAR_10++;
   if (VAR_10 < VAR_12)
    continue;
   VAR_7->priv = VAR_8;
   VAR_7->order = VAR_10;
   VAR_14 = FUNC_2(VAR_4, VAR_7->order);
   if (VAR_14 == ((void*)0))
    goto nla_put_failure;
   if (VAR_6 == VAR_1)
    VAR_9 = FUNC_5(VAR_4, VAR_7, 0, 1);
   else
    VAR_9 = FUNC_5(VAR_4, VAR_7, 0, 0);
   if (VAR_9 < 0) {
    VAR_10--;
    FUNC_0(VAR_4, VAR_14);
    goto done;
   }
   FUNC_1(VAR_4, VAR_14);
   VAR_13++;
  }
 }
done:
 FUNC_4(&VAR_2);
 if (VAR_13)
  VAR_5->args[0] += VAR_13;
 return VAR_13;

nla_put_failure:
 FUNC_0(VAR_4, VAR_14);
 goto done;
}
