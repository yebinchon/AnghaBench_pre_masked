
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* dev; int len; } ;
struct hci_dev {int cmd_q; int name; } ;
struct hci_command_hdr {int plen; int opcode; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (scalar_t__,void*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;

int FUNC_9(struct hci_dev *VAR_4, __u16 VAR_5, __u32 VAR_6, void *VAR_7)
{
 int VAR_8 = VAR_2 + VAR_6;
 struct hci_command_hdr *VAR_9;
 struct sk_buff *VAR_10;

 FUNC_0("%s opcode 0x%x plen %d", VAR_4->name, VAR_5, VAR_6);

 VAR_10 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_10) {
  FUNC_1("%s no memory for command", VAR_4->name);
  return -VAR_0;
 }

 VAR_9 = (struct hci_command_hdr *) FUNC_7(VAR_10, VAR_2);
 VAR_9->opcode = FUNC_4(VAR_5);
 VAR_9->plen = VAR_6;

 if (VAR_6)
  FUNC_6(FUNC_7(VAR_10, VAR_6), VAR_7, VAR_6);

 FUNC_0("skb len %d", VAR_10->len);

 FUNC_2(VAR_10)->pkt_type = VAR_3;
 VAR_10->dev = (void *) VAR_4;
 FUNC_8(&VAR_4->cmd_q, VAR_10);
 FUNC_5(VAR_4);

 return 0;
}
