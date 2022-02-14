
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int tx_task; int (* notify ) (struct hci_dev*,int ) ;int acl_cnt; int name; } ;
struct hci_conn {scalar_t__ type; int data_q; struct hci_conn* link; scalar_t__ sent; int disc_timer; int idle_timer; int handle; struct hci_dev* hdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,struct hci_conn*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_dev*,struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct hci_conn *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;

 FUNC_0("%s conn %p handle %d", VAR_3->name, VAR_2, VAR_2->handle);

 FUNC_1(&VAR_2->idle_timer);

 FUNC_1(&VAR_2->disc_timer);

 if (VAR_2->type == VAR_0) {
  struct hci_conn *VAR_4 = VAR_2->link;
  if (VAR_4)
   VAR_4->link = ((void*)0);


  VAR_3->acl_cnt += VAR_2->sent;
 } else {
  struct hci_conn *VAR_5 = VAR_2->link;
  if (VAR_5) {
   VAR_5->link = ((void*)0);
   FUNC_3(VAR_5);
  }
 }

 FUNC_8(&VAR_3->tx_task);

 FUNC_2(VAR_3, VAR_2);
 if (VAR_3->notify)
  VAR_3->notify(VAR_3, VAR_1);

 FUNC_9(&VAR_3->tx_task);

 FUNC_6(&VAR_2->data_q);

 FUNC_4(VAR_2);

 FUNC_5(VAR_3);

 return 0;
}
