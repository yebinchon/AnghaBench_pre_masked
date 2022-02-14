
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_disconnect {int reason; int handle; } ;
struct hci_conn {int hdev; int handle; int state; } ;
typedef int cp ;
typedef int __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_disconnect*) ;

void FUNC_3(struct hci_conn *VAR_2, __u8 VAR_3)
{
 struct hci_cp_disconnect VAR_4;

 FUNC_0("%p", VAR_2);

 VAR_2->state = VAR_0;

 VAR_4.handle = FUNC_1(VAR_2->handle);
 VAR_4.reason = VAR_3;
 FUNC_2(VAR_2->hdev, VAR_1, sizeof(VAR_4), &VAR_4);
}
