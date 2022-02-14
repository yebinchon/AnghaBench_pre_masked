
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_auth_requested {int handle; } ;
struct hci_conn {scalar_t__ sec_level; int link_mode; int hdev; int handle; int pend; scalar_t__ auth_type; } ;
typedef int cp ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_auth_requested*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hci_conn *VAR_3, __u8 VAR_4, __u8 VAR_5)
{
 FUNC_0("conn %p", VAR_3);

 if (VAR_4 > VAR_3->sec_level)
  VAR_3->sec_level = VAR_4;
 else if (VAR_3->link_mode & VAR_1)
  return 1;

 VAR_3->auth_type = VAR_5;

 if (!FUNC_3(VAR_0, &VAR_3->pend)) {
  struct hci_cp_auth_requested VAR_6;
  VAR_6.handle = FUNC_1(VAR_3->handle);
  FUNC_2(VAR_3->hdev, VAR_2,
       sizeof(VAR_6), &VAR_6);
 }

 return 0;
}
