
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sap {int dummy; } ;
struct llc_addr {int mac; int lsap; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sock* FUNC_1 (struct llc_sap*,struct llc_addr*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct llc_sap*,struct llc_addr*,struct sk_buff*) ;
 int FUNC_6 (struct llc_sap*,struct sk_buff*,struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct llc_sap *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_addr VAR_2;

 FUNC_3(VAR_1, VAR_2.mac);
 FUNC_4(VAR_1, &VAR_2.lsap);

 if (FUNC_2(VAR_2.mac)) {
  FUNC_5(VAR_0, &VAR_2, VAR_1);
  FUNC_0(VAR_1);
 } else {
  struct sock *VAR_3 = FUNC_1(VAR_0, &VAR_2);
  if (VAR_3) {
   FUNC_6(VAR_0, VAR_1, VAR_3);
   FUNC_7(VAR_3);
  } else
   FUNC_0(VAR_1);
 }
}
