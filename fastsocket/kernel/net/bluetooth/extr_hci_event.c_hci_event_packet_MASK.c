
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct hci_event_hdr {int evt; } ;
struct TYPE_2__ {int evt_rx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_2 (struct hci_dev*,struct sk_buff*) ;
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
 int FUNC_29 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_30 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_31 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_32 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_33 (struct sk_buff*) ;
 int FUNC_34 (struct sk_buff*,int ) ;

void FUNC_35(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_event_hdr *VAR_3 = (void *) VAR_2->data;
 __u8 VAR_4 = VAR_3->evt;

 FUNC_34(VAR_2, VAR_0);

 switch (VAR_4) {
 case 149:
  FUNC_11(VAR_1, VAR_2);
  break;

 case 148:
  FUNC_12(VAR_1, VAR_2);
  break;

 case 154:
  FUNC_6(VAR_1, VAR_2);
  break;

 case 153:
  FUNC_7(VAR_1, VAR_2);
  break;

 case 152:
  FUNC_8(VAR_1, VAR_2);
  break;

 case 159:
  FUNC_1(VAR_1, VAR_2);
  break;

 case 134:
  FUNC_26(VAR_1, VAR_2);
  break;

 case 151:
  FUNC_9(VAR_1, VAR_2);
  break;

 case 158:
  FUNC_2(VAR_1, VAR_2);
  break;

 case 136:
  FUNC_24(VAR_1, VAR_2);
  break;

 case 133:
  FUNC_27(VAR_1, VAR_2);
  break;

 case 138:
  FUNC_22(VAR_1, VAR_2);
  break;

 case 156:
  FUNC_4(VAR_1, VAR_2);
  break;

 case 155:
  FUNC_5(VAR_1, VAR_2);
  break;

 case 132:
  FUNC_28(VAR_1, VAR_2);
  break;

 case 142:
  FUNC_18(VAR_1, VAR_2);
  break;

 case 143:
  FUNC_17(VAR_1, VAR_2);
  break;

 case 141:
  FUNC_19(VAR_1, VAR_2);
  break;

 case 144:
  FUNC_16(VAR_1, VAR_2);
  break;

 case 145:
  FUNC_15(VAR_1, VAR_2);
  break;

 case 157:
  FUNC_3(VAR_1, VAR_2);
  break;

 case 140:
  FUNC_20(VAR_1, VAR_2);
  break;

 case 139:
  FUNC_21(VAR_1, VAR_2);
  break;

 case 147:
  FUNC_13(VAR_1, VAR_2);
  break;

 case 137:
  FUNC_23(VAR_1, VAR_2);
  break;

 case 128:
  FUNC_32(VAR_1, VAR_2);
  break;

 case 129:
  FUNC_31(VAR_1, VAR_2);
  break;

 case 130:
  FUNC_30(VAR_1, VAR_2);
  break;

 case 150:
  FUNC_10(VAR_1, VAR_2);
  break;

 case 146:
  FUNC_14(VAR_1, VAR_2);
  break;

 case 131:
  FUNC_29(VAR_1, VAR_2);
  break;

 case 135:
  FUNC_25(VAR_1, VAR_2);
  break;

 default:
  FUNC_0("%s event 0x%x", VAR_1->name, VAR_4);
  break;
 }

 FUNC_33(VAR_2);
 VAR_1->stat.evt_rx++;
}
