
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_cp_create_conn_cancel {int bdaddr; } ;
struct hci_conn {TYPE_1__* hdev; int dst; } ;
typedef int cp ;
struct TYPE_2__ {int hci_ver; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int,struct hci_cp_create_conn_cancel*) ;

__attribute__((used)) static void FUNC_3(struct hci_conn *VAR_1)
{
 struct hci_cp_create_conn_cancel VAR_2;

 FUNC_0("%p", VAR_1);

 if (VAR_1->hdev->hci_ver < 2)
  return;

 FUNC_1(&VAR_2.bdaddr, &VAR_1->dst);
 FUNC_2(VAR_1->hdev, VAR_0, sizeof(VAR_2), &VAR_2);
}
