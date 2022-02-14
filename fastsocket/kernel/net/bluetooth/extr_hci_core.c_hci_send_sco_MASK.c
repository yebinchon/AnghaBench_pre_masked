
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; void* dev; } ;
struct hci_sco_hdr {scalar_t__ dlen; int handle; } ;
struct hci_dev {scalar_t__ sco_mtu; int name; } ;
struct hci_conn {int data_q; int handle; struct hci_dev* hdev; } ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,struct hci_sco_hdr*,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct hci_conn *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_3->hdev;
 struct hci_sco_hdr VAR_6;

 FUNC_0("%s len %d", VAR_5->name, VAR_4->len);

 if (VAR_4->len > VAR_5->sco_mtu) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 VAR_6.handle = FUNC_2(VAR_3->handle);
 VAR_6.dlen = VAR_4->len;

 FUNC_6(VAR_4, VAR_2);
 FUNC_8(VAR_4);
 FUNC_5(FUNC_9(VAR_4), &VAR_6, VAR_2);

 VAR_4->dev = (void *) VAR_5;
 FUNC_1(VAR_4)->pkt_type = VAR_1;
 FUNC_7(&VAR_3->data_q, VAR_4);
 FUNC_3(VAR_5);
 return 0;
}
