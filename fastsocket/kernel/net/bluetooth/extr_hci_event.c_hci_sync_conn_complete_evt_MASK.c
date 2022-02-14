
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct hci_ev_sync_conn_complete {int status; scalar_t__ link_type; int handle; int bdaddr; } ;
struct hci_dev {int esco_type; int name; } ;
struct hci_conn {int attempt; int pkt_type; int state; TYPE_1__* link; int out; int handle; int type; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,scalar_t__,int *) ;
 int FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_conn*,int) ;
 int FUNC_9 (struct hci_conn*,int ) ;

__attribute__((used)) static inline void FUNC_10(struct hci_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct hci_ev_sync_conn_complete *VAR_8 = (void *) VAR_7->data;
 struct hci_conn *VAR_9;

 FUNC_0("%s status %d", VAR_6->name, VAR_8->status);

 FUNC_6(VAR_6);

 VAR_9 = FUNC_4(VAR_6, VAR_8->link_type, &VAR_8->bdaddr);
 if (!VAR_9) {
  if (VAR_8->link_type == VAR_3)
   goto unlock;

  VAR_9 = FUNC_4(VAR_6, VAR_3, &VAR_8->bdaddr);
  if (!VAR_9)
   goto unlock;

  VAR_9->type = VAR_5;
 }

 switch (VAR_8->status) {
 case 0x00:
  VAR_9->handle = FUNC_1(VAR_8->handle);
  VAR_9->state = VAR_1;

  FUNC_5(VAR_9);
  FUNC_2(VAR_9);
  break;

 case 0x1c:
 case 0x1f:
  if (VAR_9->out && VAR_9->attempt < 2) {
   VAR_9->pkt_type = (VAR_6->esco_type & VAR_4) |
     (VAR_6->esco_type & VAR_2);
   FUNC_9(VAR_9, VAR_9->link->handle);
   goto unlock;
  }


 default:
  VAR_9->state = VAR_0;
  break;
 }

 FUNC_8(VAR_9, VAR_8->status);
 if (VAR_8->status)
  FUNC_3(VAR_9);

unlock:
 FUNC_7(VAR_6);
}
