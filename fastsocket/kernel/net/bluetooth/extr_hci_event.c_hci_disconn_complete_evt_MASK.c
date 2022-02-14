
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_disconn_complete {int reason; int handle; scalar_t__ status; } ;
struct hci_dev {int name; } ;
struct hci_conn {int state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_conn*,int ) ;

__attribute__((used)) static inline void FUNC_7(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_ev_disconn_complete *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;

 FUNC_0("%s status %d", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 FUNC_4(VAR_1);

 VAR_4 = FUNC_3(VAR_1, FUNC_1(VAR_3->handle));
 if (VAR_4) {
  VAR_4->state = VAR_0;

  FUNC_6(VAR_4, VAR_3->reason);
  FUNC_2(VAR_4);
 }

 FUNC_5(VAR_1);
}
