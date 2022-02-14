
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_cmd_status {scalar_t__ ncmd; int status; int opcode; } ;
struct hci_dev {int cmd_q; int cmd_cnt; int name; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*,int ) ;
 int FUNC_10 (struct hci_dev*,int ) ;
 int FUNC_11 (struct hci_dev*,int ) ;
 int FUNC_12 (struct hci_dev*,int ) ;
 int FUNC_13 (struct hci_dev*,int ) ;
 int FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static inline void FUNC_17(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_cmd_status *VAR_2 = (void *) VAR_1->data;
 __u16 VAR_3;

 FUNC_15(VAR_1, sizeof(*VAR_2));

 VAR_3 = FUNC_1(VAR_2->opcode);

 switch (VAR_3) {
 case 134:
  FUNC_7(VAR_0, VAR_2->status);
  break;

 case 136:
  FUNC_5(VAR_0, VAR_2->status);
  break;

 case 138:
  FUNC_3(VAR_0, VAR_2->status);
  break;

 case 137:
  FUNC_4(VAR_0, VAR_2->status);
  break;

 case 129:
  FUNC_11(VAR_0, VAR_2->status);
  break;

 case 131:
  FUNC_10(VAR_0, VAR_2->status);
  break;

 case 132:
  FUNC_9(VAR_0, VAR_2->status);
  break;

 case 133:
  FUNC_8(VAR_0, VAR_2->status);
  break;

 case 130:
  FUNC_12(VAR_0, VAR_2->status);
  break;

 case 128:
  FUNC_13(VAR_0, VAR_2->status);
  break;

 case 135:
  FUNC_6(VAR_0, VAR_2->status);
  break;

 default:
  FUNC_0("%s opcode 0x%x", VAR_0->name, VAR_3);
  break;
 }

 if (VAR_2->ncmd) {
  FUNC_2(&VAR_0->cmd_cnt, 1);
  if (!FUNC_16(&VAR_0->cmd_q))
   FUNC_14(VAR_0);
 }
}
