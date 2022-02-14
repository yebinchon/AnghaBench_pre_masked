
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_encrypt_change {scalar_t__ encrypt; int status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ state; int pend; int link_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_conn*,int ,scalar_t__) ;
 int FUNC_8 (struct hci_conn*,int ) ;

__attribute__((used)) static inline void FUNC_9(struct hci_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct hci_ev_encrypt_change *VAR_7 = (void *) VAR_6->data;
 struct hci_conn *VAR_8;

 FUNC_0("%s status %d", VAR_5->name, VAR_7->status);

 FUNC_5(VAR_5);

 VAR_8 = FUNC_3(VAR_5, FUNC_1(VAR_7->handle));
 if (VAR_8) {
  if (!VAR_7->status) {
   if (VAR_7->encrypt) {

    VAR_8->link_mode |= VAR_3;
    VAR_8->link_mode |= VAR_4;
   } else
    VAR_8->link_mode &= ~VAR_4;
  }

  FUNC_2(VAR_2, &VAR_8->pend);

  if (VAR_8->state == VAR_0) {
   if (!VAR_7->status)
    VAR_8->state = VAR_1;

   FUNC_8(VAR_8, VAR_7->status);
   FUNC_4(VAR_8);
  } else
   FUNC_7(VAR_8, VAR_7->status, VAR_7->encrypt);
 }

 FUNC_6(VAR_5);
}
