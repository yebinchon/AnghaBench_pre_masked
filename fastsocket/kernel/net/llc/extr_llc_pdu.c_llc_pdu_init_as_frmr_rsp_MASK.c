
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int ctrl_1; int ctrl_2; } ;
struct llc_frmr_info {int dummy; } ;


 int FUNC_0 (struct llc_frmr_info*,int) ;
 int FUNC_1 (struct llc_frmr_info*,int) ;
 int FUNC_2 (struct llc_frmr_info*,int) ;
 int FUNC_3 (struct llc_frmr_info*,int) ;
 int FUNC_4 (struct llc_frmr_info*,int) ;
 int FUNC_5 (struct llc_frmr_info*,int) ;
 int FUNC_6 (struct llc_frmr_info*,int*) ;
 int FUNC_7 (struct llc_frmr_info*,int) ;
 int FUNC_8 (struct llc_frmr_info*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct llc_pdu_sn*) ;
 struct llc_pdu_sn* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;

void FUNC_12(struct sk_buff *VAR_3, struct llc_pdu_sn *VAR_4,
         u8 VAR_5, u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct llc_frmr_info *VAR_9;
 u8 VAR_10 = 0;
 u8 *VAR_11;
 struct llc_pdu_sn *VAR_12 = FUNC_10(VAR_3);

 VAR_12->ctrl_1 = VAR_1;
 VAR_12->ctrl_1 |= VAR_0;
 VAR_12->ctrl_1 |= ((VAR_5 & 1) << 4) & VAR_2;

 VAR_9 = (struct llc_frmr_info *)&VAR_12->ctrl_2;
 VAR_11 = (u8 *)&VAR_4->ctrl_1;
 FUNC_6(VAR_9,VAR_11);
 FUNC_8(VAR_9, VAR_6);
 FUNC_7(VAR_9, VAR_7);
 VAR_10 = FUNC_9(VAR_4);
 FUNC_0(VAR_9, VAR_10);
 FUNC_1(VAR_9, VAR_8);
 FUNC_2(VAR_9, VAR_8);
 FUNC_3(VAR_9, VAR_8);
 FUNC_4(VAR_9, VAR_8);
 FUNC_5(VAR_9, VAR_8);
 FUNC_11(VAR_3, sizeof(struct llc_frmr_info));
}
