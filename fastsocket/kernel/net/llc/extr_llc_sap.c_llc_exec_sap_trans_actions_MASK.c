
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_sap_state_trans {scalar_t__ (* ev_actions ) (struct llc_sap*,struct sk_buff*) ;} ;
struct llc_sap {int dummy; } ;
typedef scalar_t__ (* llc_sap_action_t ) (struct llc_sap*,struct sk_buff*) ;


 scalar_t__ FUNC_0 (struct llc_sap*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct llc_sap *VAR_0,
          struct llc_sap_state_trans *VAR_1,
          struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 llc_sap_action_t *VAR_4 = VAR_1->ev_actions;

 for (; VAR_4 && *VAR_4; VAR_4++)
  if ((*VAR_4)(VAR_0, VAR_2))
   VAR_3 = 1;
 return VAR_3;
}
