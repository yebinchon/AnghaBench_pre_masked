
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_gact {scalar_t__ tcfg_ptype; int tcf_lock; int tcfg_pval; int tcfg_paction; int tcf_action; } ;
struct tcf_common {int dummy; } ;
struct tc_gact_p {scalar_t__ ptype; int pval; int paction; } ;
struct tc_gact {int action; int index; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tcf_common*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct tcf_common*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct tcf_common* FUNC_6 (int ,struct tc_action*,int,int *) ;
 struct tcf_common* FUNC_7 (int ,struct nlattr*,struct tc_action*,int,int,int *,int *) ;
 int FUNC_8 (struct tcf_common*,int *) ;
 int FUNC_9 (struct tcf_common*,int,int *) ;
 struct tcf_gact* FUNC_10 (struct tcf_common*) ;

__attribute__((used)) static int FUNC_11(struct nlattr *VAR_11, struct nlattr *VAR_12,
    struct tc_action *VAR_13, int VAR_14, int VAR_15)
{
 struct nlattr *VAR_16[VAR_5 + 1];
 struct tc_gact *VAR_17;
 struct tcf_gact *VAR_18;
 struct tcf_common *VAR_19;
 int VAR_20 = 0;
 int VAR_21;




 if (VAR_11 == ((void*)0))
  return -VAR_2;

 VAR_21 = FUNC_3(VAR_16, VAR_5, VAR_11, VAR_10);
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_16[VAR_6] == ((void*)0))
  return -VAR_2;
 VAR_17 = FUNC_2(VAR_16[VAR_6]);


 if (VAR_16[VAR_7] != ((void*)0))
  return -VAR_3;
 VAR_19 = FUNC_6(VAR_17->index, VAR_13, VAR_15, &VAR_8);
 if (!VAR_19) {
  VAR_19 = FUNC_7(VAR_17->index, VAR_12, VAR_13, sizeof(*VAR_18),
         VAR_15, &VAR_9, &VAR_8);
  if (FUNC_0(VAR_19))
      return FUNC_1(VAR_19);
  VAR_20 = VAR_0;
 } else {
  if (!VAR_14) {
   FUNC_9(VAR_19, VAR_15, &VAR_8);
   return -VAR_1;
  }
 }

 VAR_18 = FUNC_10(VAR_19);

 FUNC_4(&VAR_18->tcf_lock);
 VAR_18->tcf_action = VAR_17->action;







 FUNC_5(&VAR_18->tcf_lock);
 if (VAR_20 == VAR_0)
  FUNC_8(VAR_19, &VAR_8);
 return VAR_20;
}
