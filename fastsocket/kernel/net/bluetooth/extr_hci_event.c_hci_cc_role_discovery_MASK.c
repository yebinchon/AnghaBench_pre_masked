
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_role_discovery {scalar_t__ role; int handle; scalar_t__ status; } ;
struct hci_dev {int name; } ;
struct hci_conn {int link_mode; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_rp_role_discovery *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;

 FUNC_0("%s status 0x%x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 FUNC_3(VAR_1);

 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_3->handle));
 if (VAR_4) {
  if (VAR_3->role)
   VAR_4->link_mode &= ~VAR_0;
  else
   VAR_4->link_mode |= VAR_0;
 }

 FUNC_4(VAR_1);
}
