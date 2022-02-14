
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_nat {int tcf_lock; int tcf_action; int flags; int mask; int new_addr; int old_addr; } ;
struct tcf_common {int dummy; } ;
struct tc_nat {int action; int flags; int mask; int new_addr; int old_addr; int index; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tcf_common*) ;
 int FUNC_1 (struct tcf_common*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct tc_nat* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct tcf_common* FUNC_6 (int ,struct tc_action*,int,int *) ;
 struct tcf_common* FUNC_7 (int ,struct nlattr*,struct tc_action*,int,int,int *,int *) ;
 int FUNC_8 (struct tcf_common*,int *) ;
 int FUNC_9 (struct tcf_common*,int,int *) ;
 struct tcf_nat* FUNC_10 (struct tcf_common*) ;

__attribute__((used)) static int FUNC_11(struct nlattr *VAR_8, struct nlattr *VAR_9,
   struct tc_action *VAR_10, int VAR_11, int VAR_12)
{
 struct nlattr *VAR_13[VAR_3 + 1];
 struct tc_nat *VAR_14;
 int VAR_15 = 0, VAR_16;
 struct tcf_nat *VAR_17;
 struct tcf_common *VAR_18;

 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_16 = FUNC_3(VAR_13, VAR_3, VAR_8, VAR_7);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_13[VAR_4] == ((void*)0))
  return -VAR_2;
 VAR_14 = FUNC_2(VAR_13[VAR_4]);

 VAR_18 = FUNC_6(VAR_14->index, VAR_10, VAR_12, &VAR_5);
 if (!VAR_18) {
  VAR_18 = FUNC_7(VAR_14->index, VAR_9, VAR_10, sizeof(*VAR_17), VAR_12,
         &VAR_6, &VAR_5);
  if (FUNC_0(VAR_18))
      return FUNC_1(VAR_18);
  VAR_17 = FUNC_10(VAR_18);
  VAR_15 = VAR_0;
 } else {
  VAR_17 = FUNC_10(VAR_18);
  if (!VAR_11) {
   FUNC_9(VAR_18, VAR_12, &VAR_5);
   return -VAR_1;
  }
 }

 FUNC_4(&VAR_17->tcf_lock);
 VAR_17->old_addr = VAR_14->old_addr;
 VAR_17->new_addr = VAR_14->new_addr;
 VAR_17->mask = VAR_14->mask;
 VAR_17->flags = VAR_14->flags;

 VAR_17->tcf_action = VAR_14->action;
 FUNC_5(&VAR_17->tcf_lock);

 if (VAR_15 == VAR_0)
  FUNC_8(VAR_18, &VAR_5);

 return VAR_15;
}
