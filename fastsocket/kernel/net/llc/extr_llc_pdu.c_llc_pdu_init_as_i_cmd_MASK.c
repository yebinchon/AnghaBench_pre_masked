
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int ctrl_1; int ctrl_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct llc_pdu_sn* FUNC_0 (struct sk_buff*) ;

void FUNC_1(struct sk_buff *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct llc_pdu_sn *VAR_6 = FUNC_0(VAR_2);

 VAR_6->ctrl_1 = VAR_1;
 VAR_6->ctrl_2 = 0;
 VAR_6->ctrl_2 |= (VAR_3 & VAR_0);
 VAR_6->ctrl_1 |= (VAR_4 << 1) & 0xFE;
 VAR_6->ctrl_2 |= (VAR_5 << 1) & 0xFE;
}
