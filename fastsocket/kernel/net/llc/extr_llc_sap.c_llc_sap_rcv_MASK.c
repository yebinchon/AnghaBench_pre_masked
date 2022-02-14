
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct llc_sap_state_ev {scalar_t__ reason; int type; } ;
struct llc_sap {int dummy; } ;


 int VAR_0 ;
 struct llc_sap_state_ev* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct llc_sap*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct llc_sap *VAR_1, struct sk_buff *VAR_2,
   struct sock *VAR_3)
{
 struct llc_sap_state_ev *VAR_4 = FUNC_0(VAR_2);

 VAR_4->type = VAR_0;
 VAR_4->reason = 0;
 VAR_2->sk = VAR_3;
 FUNC_1(VAR_1, VAR_2);
}
