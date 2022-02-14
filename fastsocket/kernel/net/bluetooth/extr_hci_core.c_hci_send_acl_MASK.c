
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct sk_buff {int len; TYPE_2__ data_q; int handle; void* dev; struct sk_buff* next; struct hci_dev* hdev; } ;
struct hci_dev {int name; } ;
struct hci_conn {int len; TYPE_2__ data_q; int handle; void* dev; struct hci_conn* next; struct hci_dev* hdev; } ;
typedef int __u16 ;
struct TYPE_7__ {void* pkt_type; } ;
struct TYPE_5__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,struct sk_buff*,int) ;
 void* VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (TYPE_2__*,struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct hci_conn *VAR_3, struct sk_buff *VAR_4, __u16 VAR_5)
{
 struct hci_dev *VAR_6 = VAR_3->hdev;
 struct sk_buff *VAR_7;

 FUNC_0("%s conn %p flags 0x%x", VAR_6->name, VAR_3, VAR_5);

 VAR_4->dev = (void *) VAR_6;
 FUNC_2(VAR_4)->pkt_type = VAR_2;
 FUNC_3(VAR_4, VAR_3->handle, VAR_5 | VAR_1);

 if (!(VAR_7 = FUNC_6(VAR_4)->frag_list)) {

  FUNC_0("%s nonfrag skb %p len %d", VAR_6->name, VAR_4, VAR_4->len);

  FUNC_5(&VAR_3->data_q, VAR_4);
 } else {

  FUNC_0("%s frag %p len %d", VAR_6->name, VAR_4, VAR_4->len);

  FUNC_6(VAR_4)->frag_list = ((void*)0);


  FUNC_7(&VAR_3->data_q.lock);

  FUNC_1(&VAR_3->data_q, VAR_4);
  do {
   VAR_4 = VAR_7; VAR_7 = VAR_7->next;

   VAR_4->dev = (void *) VAR_6;
   FUNC_2(VAR_4)->pkt_type = VAR_2;
   FUNC_3(VAR_4, VAR_3->handle, VAR_5 | VAR_0);

   FUNC_0("%s frag %p len %d", VAR_6->name, VAR_4, VAR_4->len);

   FUNC_1(&VAR_3->data_q, VAR_4);
  } while (VAR_7);

  FUNC_8(&VAR_3->data_q.lock);
 }

 FUNC_4(VAR_6);
 return 0;
}
