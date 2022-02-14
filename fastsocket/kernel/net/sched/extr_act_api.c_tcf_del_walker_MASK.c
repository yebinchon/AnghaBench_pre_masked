
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_hashinfo {int hmask; struct tcf_common** htab; } ;
struct tcf_common {struct tcf_common* tcfc_next; } ;
struct tc_action {TYPE_1__* ops; int order; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int owner; int kind; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 size_t FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (struct tcf_common*,int ,struct tcf_hashinfo*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, struct tc_action *VAR_5,
     struct tcf_hashinfo *VAR_6)
{
 struct tcf_common *VAR_7, *VAR_8;
 struct nlattr *VAR_9;
 int VAR_10= 0, VAR_11 = 0;

 VAR_9 = FUNC_5(VAR_4, VAR_5->order);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;
 FUNC_0(VAR_4, VAR_3, VAR_5->ops->kind);
 for (VAR_10 = 0; VAR_10 < (VAR_6->hmask + 1); VAR_10++) {
  VAR_7 = VAR_6->htab[FUNC_6(VAR_10, VAR_6->hmask)];

  while (VAR_7 != ((void*)0)) {
   VAR_8 = VAR_7->tcfc_next;
   if (VAR_0 == FUNC_7(VAR_7, 0, VAR_6))
     FUNC_2(VAR_5->ops->owner);
   VAR_11++;
   VAR_7 = VAR_8;
  }
 }
 FUNC_1(VAR_4, VAR_2, VAR_11);
 FUNC_4(VAR_4, VAR_9);

 return VAR_11;
nla_put_failure:
 FUNC_3(VAR_4, VAR_9);
 return -VAR_1;
}
