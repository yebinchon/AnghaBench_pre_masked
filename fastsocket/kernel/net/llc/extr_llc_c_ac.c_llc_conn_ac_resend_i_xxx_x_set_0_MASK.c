
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int dummy; } ;


 int FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (struct sock*,int ,int ) ;
 struct llc_pdu_sn* FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_pdu_sn *VAR_2 = FUNC_2(VAR_1);
 u8 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_0, VAR_3, 0);
 return 0;
}
