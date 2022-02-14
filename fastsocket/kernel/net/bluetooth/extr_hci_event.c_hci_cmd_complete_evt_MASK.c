
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_cmd_complete {scalar_t__ ncmd; int opcode; } ;
struct hci_dev {int cmd_q; int cmd_cnt; int name; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_7 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_8 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_9 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_10 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_11 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_12 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_13 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_14 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_15 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_16 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_17 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_18 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_19 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_20 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_21 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_22 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_23 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_24 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_25 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_26 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_27 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_28 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_29 (struct hci_dev*) ;
 int FUNC_30 (struct sk_buff*,int) ;
 int FUNC_31 (int *) ;

__attribute__((used)) static inline void FUNC_32(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_cmd_complete *VAR_2 = (void *) VAR_1->data;
 __u16 VAR_3;

 FUNC_30(VAR_1, sizeof(*VAR_2));

 VAR_3 = FUNC_1(VAR_2->opcode);

 switch (VAR_3) {
 case 151:
  FUNC_5(VAR_0, VAR_1);
  break;

 case 153:
  FUNC_3(VAR_0, VAR_1);
  break;

 case 139:
  FUNC_17(VAR_0, VAR_1);
  break;

 case 137:
  FUNC_19(VAR_0, VAR_1);
  break;

 case 146:
  FUNC_10(VAR_0, VAR_1);
  break;

 case 132:
  FUNC_24(VAR_0, VAR_1);
  break;

 case 147:
  FUNC_9(VAR_0, VAR_1);
  break;

 case 134:
  FUNC_22(VAR_0, VAR_1);
  break;

 case 138:
  FUNC_18(VAR_0, VAR_1);
  break;

 case 131:
  FUNC_25(VAR_0, VAR_1);
  break;

 case 143:
  FUNC_13(VAR_0, VAR_1);
  break;

 case 136:
  FUNC_20(VAR_0, VAR_1);
  break;

 case 133:
  FUNC_23(VAR_0, VAR_1);
  break;

 case 130:
  FUNC_26(VAR_0, VAR_1);
  break;

 case 148:
  FUNC_8(VAR_0, VAR_1);
  break;

 case 135:
  FUNC_21(VAR_0, VAR_1);
  break;

 case 140:
  FUNC_16(VAR_0, VAR_1);
  break;

 case 128:
  FUNC_28(VAR_0, VAR_1);
  break;

 case 152:
  FUNC_4(VAR_0, VAR_1);
  break;

 case 141:
  FUNC_15(VAR_0, VAR_1);
  break;

 case 129:
  FUNC_27(VAR_0, VAR_1);
  break;

 case 142:
  FUNC_14(VAR_0, VAR_1);
  break;

 case 145:
  FUNC_11(VAR_0, VAR_1);
  break;

 case 144:
  FUNC_12(VAR_0, VAR_1);
  break;

 case 149:
  FUNC_7(VAR_0, VAR_1);
  break;

 case 150:
  FUNC_6(VAR_0, VAR_1);
  break;

 default:
  FUNC_0("%s opcode 0x%x", VAR_0->name, VAR_3);
  break;
 }

 if (VAR_2->ncmd) {
  FUNC_2(&VAR_0->cmd_cnt, 1);
  if (!FUNC_31(&VAR_0->cmd_q))
   FUNC_29(VAR_0);
 }
}
