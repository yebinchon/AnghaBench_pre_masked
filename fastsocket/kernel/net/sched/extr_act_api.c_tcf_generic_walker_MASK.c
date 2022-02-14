
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_hashinfo {int dummy; } ;
struct tc_action {TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct TYPE_2__ {struct tcf_hashinfo* hinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct sk_buff*,struct tc_action*,struct tcf_hashinfo*) ;
 int FUNC_2 (struct sk_buff*,struct netlink_callback*,struct tc_action*,struct tcf_hashinfo*) ;

int FUNC_3(struct sk_buff *VAR_3, struct netlink_callback *VAR_4,
         int VAR_5, struct tc_action *VAR_6)
{
 struct tcf_hashinfo *VAR_7 = VAR_6->ops->hinfo;

 if (VAR_5 == VAR_1) {
  return FUNC_1(VAR_3, VAR_6, VAR_7);
 } else if (VAR_5 == VAR_2) {
  return FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7);
 } else {
  FUNC_0(1, "tcf_generic_walker: unknown action %d\n", VAR_5);
  return -VAR_0;
 }
}
