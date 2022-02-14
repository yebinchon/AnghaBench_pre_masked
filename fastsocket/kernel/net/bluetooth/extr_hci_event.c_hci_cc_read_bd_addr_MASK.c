
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_bd_addr {int status; int bdaddr; } ;
struct hci_dev {int bdaddr; int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_rp_read_bd_addr *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%x", VAR_0->name, VAR_2->status);

 if (!VAR_2->status)
  FUNC_1(&VAR_0->bdaddr, &VAR_2->bdaddr);

 FUNC_2(VAR_0, VAR_2->status);
}
