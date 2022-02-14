
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_switch_role {scalar_t__ role; int bdaddr; } ;
struct hci_conn {int link_mode; int hdev; int dst; int pend; } ;
typedef int cp ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_switch_role*) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct hci_conn *VAR_3, __u8 VAR_4)
{
 FUNC_0("conn %p", VAR_3);

 if (!VAR_4 && VAR_3->link_mode & VAR_1)
  return 1;

 if (!FUNC_3(VAR_0, &VAR_3->pend)) {
  struct hci_cp_switch_role VAR_5;
  FUNC_1(&VAR_5.bdaddr, &VAR_3->dst);
  VAR_5.role = VAR_4;
  FUNC_2(VAR_3->hdev, VAR_2, sizeof(VAR_5), &VAR_5);
 }

 return 0;
}
