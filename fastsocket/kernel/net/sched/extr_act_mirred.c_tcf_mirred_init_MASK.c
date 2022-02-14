
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_mirred {int tcfm_ok_push; int tcfm_list; int tcf_lock; struct net_device* tcfm_dev; scalar_t__ tcfm_ifindex; int tcfm_eaction; int tcf_action; } ;
struct tcf_common {int dummy; } ;
struct tc_mirred {scalar_t__ ifindex; int eaction; int action; int index; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int type; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tcf_common*) ;
 int FUNC_1 (struct tcf_common*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct net_device* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tc_mirred* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct tcf_common* FUNC_10 (int ,struct tc_action*,int,int *) ;
 struct tcf_common* FUNC_11 (int ,struct nlattr*,struct tc_action*,int,int,int *,int *) ;
 int FUNC_12 (struct tcf_common*,int *) ;
 int FUNC_13 (struct tcf_mirred*,int) ;
 struct tcf_mirred* FUNC_14 (struct tcf_common*) ;

__attribute__((used)) static int FUNC_15(struct nlattr *VAR_11, struct nlattr *VAR_12,
      struct tc_action *VAR_13, int VAR_14, int VAR_15)
{
 struct nlattr *VAR_16[VAR_4 + 1];
 struct tc_mirred *VAR_17;
 struct tcf_mirred *VAR_18;
 struct tcf_common *VAR_19;
 struct net_device *VAR_20 = ((void*)0);
 int VAR_21 = 0, VAR_22;
 int VAR_23 = 0;

 if (VAR_11 == ((void*)0))
  return -VAR_2;

 VAR_22 = FUNC_7(VAR_16, VAR_4, VAR_11, VAR_10);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_16[VAR_5] == ((void*)0))
  return -VAR_2;
 VAR_17 = FUNC_6(VAR_16[VAR_5]);

 if (VAR_17->ifindex) {
  VAR_20 = FUNC_2(&VAR_6, VAR_17->ifindex);
  if (VAR_20 == ((void*)0))
   return -VAR_3;
  switch (VAR_20->type) {
   case 130:
   case 129:
   case 131:
   case 133:
   case 128:
   case 132:
    VAR_23 = 0;
    break;
   default:
    VAR_23 = 1;
    break;
  }
 }

 VAR_19 = FUNC_10(VAR_17->index, VAR_13, VAR_15, &VAR_7);
 if (!VAR_19) {
  if (!VAR_17->ifindex)
   return -VAR_2;
  VAR_19 = FUNC_11(VAR_17->index, VAR_12, VAR_13, sizeof(*VAR_18), VAR_15,
         &VAR_8, &VAR_7);
  if (FUNC_0(VAR_19))
      return FUNC_1(VAR_19);
  VAR_21 = VAR_0;
 } else {
  if (!VAR_14) {
   FUNC_13(FUNC_14(VAR_19), VAR_15);
   return -VAR_1;
  }
 }
 VAR_18 = FUNC_14(VAR_19);

 FUNC_8(&VAR_18->tcf_lock);
 VAR_18->tcf_action = VAR_17->action;
 VAR_18->tcfm_eaction = VAR_17->eaction;
 if (VAR_17->ifindex) {
  VAR_18->tcfm_ifindex = VAR_17->ifindex;
  if (VAR_21 != VAR_0)
   FUNC_4(VAR_18->tcfm_dev);
  VAR_18->tcfm_dev = VAR_20;
  FUNC_3(VAR_20);
  VAR_18->tcfm_ok_push = VAR_23;
 }
 FUNC_9(&VAR_18->tcf_lock);
 if (VAR_21 == VAR_0) {
  FUNC_5(&VAR_18->tcfm_list, &VAR_9);
  FUNC_12(VAR_19, &VAR_7);
 }

 return VAR_21;
}
