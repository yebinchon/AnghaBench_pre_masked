
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_defact {int tcf_action; } ;
struct tcf_common {int dummy; } ;
struct tc_defact {int action; int index; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tcf_common*) ;
 int FUNC_1 (struct tcf_common*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (struct tcf_defact*,char*) ;
 int FUNC_3 (struct tcf_common*) ;
 void* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_6 (struct tcf_defact*,char*,struct tc_defact*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tcf_common* FUNC_7 (int ,struct tc_action*,int,int *) ;
 struct tcf_common* FUNC_8 (int ,struct nlattr*,struct tc_action*,int,int,int *,int *) ;
 int FUNC_9 (struct tcf_common*,int *) ;
 int FUNC_10 (struct tcf_defact*,int) ;
 struct tcf_defact* FUNC_11 (struct tcf_common*) ;

__attribute__((used)) static int FUNC_12(struct nlattr *VAR_9, struct nlattr *VAR_10,
    struct tc_action *VAR_11, int VAR_12, int VAR_13)
{
 struct nlattr *VAR_14[VAR_4 + 1];
 struct tc_defact *VAR_15;
 struct tcf_defact *VAR_16;
 struct tcf_common *VAR_17;
 char *VAR_18;
 int VAR_19 = 0, VAR_20;

 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_20 = FUNC_5(VAR_14, VAR_4, VAR_9, VAR_8);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_14[VAR_5] == ((void*)0))
  return -VAR_2;

 if (VAR_14[VAR_3] == ((void*)0))
  return -VAR_2;

 VAR_15 = FUNC_4(VAR_14[VAR_5]);
 VAR_18 = FUNC_4(VAR_14[VAR_3]);

 VAR_17 = FUNC_7(VAR_15->index, VAR_11, VAR_13, &VAR_6);
 if (!VAR_17) {
  VAR_17 = FUNC_8(VAR_15->index, VAR_10, VAR_11, sizeof(*VAR_16), VAR_13,
         &VAR_7, &VAR_6);
  if (FUNC_0(VAR_17))
      return FUNC_1(VAR_17);

  VAR_16 = FUNC_11(VAR_17);
  VAR_19 = FUNC_2(VAR_16, VAR_18);
  if (VAR_19 < 0) {
   FUNC_3(VAR_17);
   return VAR_19;
  }
  VAR_16->tcf_action = VAR_15->action;
  VAR_19 = VAR_0;
 } else {
  VAR_16 = FUNC_11(VAR_17);
  if (!VAR_12) {
   FUNC_10(VAR_16, VAR_13);
   return -VAR_1;
  }
  FUNC_6(VAR_16, VAR_18, VAR_15);
 }

 if (VAR_19 == VAR_0)
  FUNC_9(VAR_17, &VAR_6);
 return VAR_19;
}
