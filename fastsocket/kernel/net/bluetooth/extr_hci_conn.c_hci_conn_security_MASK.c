
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_cp_set_conn_encrypt {int encrypt; int handle; } ;
struct hci_conn {int link_mode; TYPE_1__* hdev; int handle; int pend; int ssp_mode; } ;
typedef int cp ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {int ssp_mode; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ,int,struct hci_cp_set_conn_encrypt*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct hci_conn *VAR_5, __u8 VAR_6, __u8 VAR_7)
{
 FUNC_0("conn %p", VAR_5);

 if (VAR_6 == VAR_1)
  return 1;

 if (VAR_6 == VAR_0 &&
    (!VAR_5->ssp_mode || !VAR_5->hdev->ssp_mode))
  return 1;

 if (VAR_5->link_mode & VAR_3)
  return FUNC_2(VAR_5, VAR_6, VAR_7);

 if (FUNC_4(VAR_2, &VAR_5->pend))
  return 0;

 if (FUNC_2(VAR_5, VAR_6, VAR_7)) {
  struct hci_cp_set_conn_encrypt VAR_8;
  VAR_8.handle = FUNC_1(VAR_5->handle);
  VAR_8.encrypt = 1;
  FUNC_3(VAR_5->hdev, VAR_4,
       sizeof(VAR_8), &VAR_8);
 }

 return 0;
}
