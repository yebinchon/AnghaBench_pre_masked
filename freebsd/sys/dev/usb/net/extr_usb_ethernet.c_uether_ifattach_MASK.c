
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_sync_task; int * ue_dev; int * ue_mtx; int ue_tq; int * ue_methods; int * ue_udev; } ;
struct TYPE_2__ {int hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct usb_ether*,int ,int *,int *) ;
 int FUNC_5 (int *,int *,int ,int ) ;

int
FUNC_6(struct usb_ether *VAR_3)
{
 int VAR_4;


 if ((VAR_3->ue_dev == ((void*)0)) ||
     (VAR_3->ue_udev == ((void*)0)) ||
     (VAR_3->ue_mtx == ((void*)0)) ||
     (VAR_3->ue_methods == ((void*)0)))
  return (VAR_0);

 VAR_4 = FUNC_5(&VAR_3->ue_tq, VAR_3->ue_mtx,
     FUNC_2(VAR_3->ue_dev), VAR_1);
 if (VAR_4) {
  FUNC_3(VAR_3->ue_dev, "could not setup taskqueue\n");
  goto error;
 }


 FUNC_0(VAR_3);
 FUNC_4(VAR_3, VAR_2,
     &VAR_3->ue_sync_task[0].hdr,
     &VAR_3->ue_sync_task[1].hdr);
 FUNC_1(VAR_3);

error:
 return (VAR_4);
}
