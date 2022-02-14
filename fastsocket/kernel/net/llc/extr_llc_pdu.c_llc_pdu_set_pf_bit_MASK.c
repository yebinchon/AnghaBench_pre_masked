
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int ctrl_2; int ctrl_1; } ;





 int FUNC_0 (struct sk_buff*,int*) ;
 struct llc_pdu_sn* FUNC_1 (struct sk_buff*) ;

void FUNC_2(struct sk_buff *VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 struct llc_pdu_sn *VAR_3;

 FUNC_0(VAR_0, &VAR_2);
 VAR_3 = FUNC_1(VAR_0);

 switch (VAR_2) {
 case 130:
 case 129:
  VAR_3->ctrl_2 = (VAR_3->ctrl_2 & 0xFE) | VAR_1;
  break;
 case 128:
  VAR_3->ctrl_1 |= (VAR_3->ctrl_1 & 0xEF) | (VAR_1 << 4);
  break;
 }
}
