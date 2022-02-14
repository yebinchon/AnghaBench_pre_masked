
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_change_conn_link_key {int handle; } ;
struct hci_conn {int hdev; int handle; int pend; } ;
typedef int cp ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_change_conn_link_key*) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct hci_conn *VAR_2)
{
 FUNC_0("conn %p", VAR_2);

 if (!FUNC_3(VAR_0, &VAR_2->pend)) {
  struct hci_cp_change_conn_link_key VAR_3;
  VAR_3.handle = FUNC_1(VAR_2->handle);
  FUNC_2(VAR_2->hdev, VAR_1,
       sizeof(VAR_3), &VAR_3);
 }

 return 0;
}
