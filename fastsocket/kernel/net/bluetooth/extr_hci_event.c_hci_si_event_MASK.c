
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* dev; } ;
struct hci_event_hdr {int plen; int evt; } ;
struct hci_ev_stack_internal {int type; int data; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {int incoming; int pkt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,void*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;

void FUNC_7(struct hci_dev *VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 struct hci_event_hdr *VAR_8;
 struct hci_ev_stack_internal *VAR_9;
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_2(VAR_1 + sizeof(*VAR_9) + VAR_6, VAR_0);
 if (!VAR_10)
  return;

 VAR_8 = (void *) FUNC_6(VAR_10, VAR_1);
 VAR_8->evt = VAR_3;
 VAR_8->plen = sizeof(*VAR_9) + VAR_6;

 VAR_9 = (void *) FUNC_6(VAR_10, sizeof(*VAR_9) + VAR_6);
 VAR_9->type = VAR_5;
 FUNC_5(VAR_9->data, VAR_7, VAR_6);

 FUNC_1(VAR_10)->incoming = 1;
 FUNC_0(VAR_10);

 FUNC_1(VAR_10)->pkt_type = VAR_2;
 VAR_10->dev = (void *) VAR_4;
 FUNC_3(VAR_4, VAR_10);
 FUNC_4(VAR_10);
}
