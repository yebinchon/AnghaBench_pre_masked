
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_conn {scalar_t__ ssp_mode; int link_mode; TYPE_1__* hdev; } ;
struct TYPE_2__ {scalar_t__ ssp_mode; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;

int FUNC_1(struct hci_conn *VAR_1)
{
 FUNC_0("conn %p", VAR_1);

 if (VAR_1->ssp_mode > 0 && VAR_1->hdev->ssp_mode > 0 &&
     !(VAR_1->link_mode & VAR_0))
  return 0;

 return 1;
}
