
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_sap_state_trans {int (* ev ) (struct llc_sap*,struct sk_buff*) ;} ;
struct llc_sap_state {struct llc_sap_state_trans** transitions; } ;
struct llc_sap {int state; } ;


 struct llc_sap_state* VAR_0 ;
 int FUNC_0 (struct llc_sap*,struct sk_buff*) ;

__attribute__((used)) static struct llc_sap_state_trans *FUNC_1(struct llc_sap *VAR_1,
            struct sk_buff* VAR_2)
{
 int VAR_3 = 0;
 struct llc_sap_state_trans *VAR_4 = ((void*)0);
 struct llc_sap_state_trans **VAR_5;
 struct llc_sap_state *VAR_6 = &VAR_0[VAR_1->state - 1];




 for (VAR_5 = VAR_6->transitions; VAR_5[VAR_3]->ev; VAR_3++)
  if (!VAR_5[VAR_3]->ev(VAR_1, VAR_2)) {
   VAR_4 = VAR_5[VAR_3];
   break;
  }
 return VAR_4;
}
