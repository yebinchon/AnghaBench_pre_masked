
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_role_change {scalar_t__ role; int status; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int pend; int link_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_conn*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_ev_role_change *VAR_5 = (void *) VAR_4->data;
 struct hci_conn *VAR_6;

 FUNC_0("%s status %d", VAR_3->name, VAR_5->status);

 FUNC_3(VAR_3);

 VAR_6 = FUNC_2(VAR_3, VAR_0, &VAR_5->bdaddr);
 if (VAR_6) {
  if (!VAR_5->status) {
   if (VAR_5->role)
    VAR_6->link_mode &= ~VAR_2;
   else
    VAR_6->link_mode |= VAR_2;
  }

  FUNC_1(VAR_1, &VAR_6->pend);

  FUNC_5(VAR_6, VAR_5->status, VAR_5->role);
 }

 FUNC_4(VAR_3);
}
