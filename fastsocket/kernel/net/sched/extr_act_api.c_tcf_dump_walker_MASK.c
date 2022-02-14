
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_hashinfo {int hmask; int lock; struct tcf_common** htab; } ;
struct tcf_common {struct tcf_common* tcfc_next; } ;
struct tc_action {int order; struct tcf_common* priv; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct tc_action*,int ,int ) ;
 size_t FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, struct netlink_callback *VAR_2,
      struct tc_action *VAR_3, struct tcf_hashinfo *VAR_4)
{
 struct tcf_common *VAR_5;
 int VAR_6 = 0, VAR_7 = -1,VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct nlattr *VAR_11;

 FUNC_4(VAR_4->lock);

 VAR_9 = VAR_2->args[0];

 for (VAR_8 = 0; VAR_8 < (VAR_4->hmask + 1); VAR_8++) {
  VAR_5 = VAR_4->htab[FUNC_7(VAR_8, VAR_4->hmask)];

  for (; VAR_5; VAR_5 = VAR_5->tcfc_next) {
   VAR_7++;
   if (VAR_7 < VAR_9)
    continue;
   VAR_3->priv = VAR_5;
   VAR_3->order = VAR_10;

   VAR_11 = FUNC_2(VAR_1, VAR_3->order);
   if (VAR_11 == ((void*)0))
    goto nla_put_failure;
   VAR_6 = FUNC_6(VAR_1, VAR_3, 0, 0);
   if (VAR_6 < 0) {
    VAR_7--;
    FUNC_3(VAR_1, VAR_11);
    goto done;
   }
   FUNC_1(VAR_1, VAR_11);
   VAR_10++;
   if (VAR_10 >= VAR_0)
    goto done;
  }
 }
done:
 FUNC_5(VAR_4->lock);
 if (VAR_10)
  VAR_2->args[0] += VAR_10;
 return VAR_10;

nla_put_failure:
 FUNC_0(VAR_1, VAR_11);
 goto done;
}
