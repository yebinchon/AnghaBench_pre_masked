
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tcf_skbedit {int flags; int priority; int tcf_lock; int tcf_action; int queue_mapping; } ;
struct tcf_common {int dummy; } ;
struct tc_skbedit {int action; int index; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tcf_common*) ;
 int FUNC_1 (struct tcf_common*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct tcf_common* FUNC_6 (int ,struct tc_action*,int,int *) ;
 struct tcf_common* FUNC_7 (int ,struct nlattr*,struct tc_action*,int,int,int *,int *) ;
 int FUNC_8 (struct tcf_common*,int *) ;
 int FUNC_9 (struct tcf_common*,int,int *) ;
 struct tcf_skbedit* FUNC_10 (struct tcf_common*) ;

__attribute__((used)) static int FUNC_11(struct nlattr *VAR_12, struct nlattr *VAR_13,
    struct tc_action *VAR_14, int VAR_15, int VAR_16)
{
 struct nlattr *VAR_17[VAR_5 + 1];
 struct tc_skbedit *VAR_18;
 struct tcf_skbedit *VAR_19;
 struct tcf_common *VAR_20;
 u32 VAR_21 = 0, *VAR_22 = ((void*)0);
 u16 *VAR_23 = ((void*)0);
 int VAR_24 = 0, VAR_25;

 if (VAR_12 == ((void*)0))
  return -VAR_2;

 VAR_25 = FUNC_3(VAR_17, VAR_5, VAR_12, VAR_11);
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_17[VAR_6] == ((void*)0))
  return -VAR_2;

 if (VAR_17[VAR_7] != ((void*)0)) {
  VAR_21 |= VAR_3;
  VAR_22 = FUNC_2(VAR_17[VAR_7]);
 }

 if (VAR_17[VAR_8] != ((void*)0)) {
  VAR_21 |= VAR_4;
  VAR_23 = FUNC_2(VAR_17[VAR_8]);
 }
 if (!VAR_21)
  return -VAR_2;

 VAR_18 = FUNC_2(VAR_17[VAR_6]);

 VAR_20 = FUNC_6(VAR_18->index, VAR_14, VAR_16, &VAR_9);
 if (!VAR_20) {
  VAR_20 = FUNC_7(VAR_18->index, VAR_13, VAR_14, sizeof(*VAR_19), VAR_16,
         &VAR_10, &VAR_9);
  if (FUNC_0(VAR_20))
      return FUNC_1(VAR_20);

  VAR_19 = FUNC_10(VAR_20);
  VAR_24 = VAR_0;
 } else {
  VAR_19 = FUNC_10(VAR_20);
  if (!VAR_15) {
   FUNC_9(VAR_20, VAR_16, &VAR_9);
   return -VAR_1;
  }
 }

 FUNC_4(&VAR_19->tcf_lock);

 VAR_19->flags = VAR_21;
 if (VAR_21 & VAR_3)
  VAR_19->priority = *VAR_22;
 if (VAR_21 & VAR_4)
  VAR_19->queue_mapping = *VAR_23;
 VAR_19->tcf_action = VAR_18->action;

 FUNC_5(&VAR_19->tcf_lock);

 if (VAR_24 == VAR_0)
  FUNC_8(VAR_20, &VAR_9);
 return VAR_24;
}
