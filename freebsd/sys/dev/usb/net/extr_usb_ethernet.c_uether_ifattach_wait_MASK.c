
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_sync_task; int ue_tq; } ;
struct TYPE_2__ {int hdr; } ;


 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (int *,int *,int *) ;

void
FUNC_3(struct usb_ether *VAR_0)
{

 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->ue_tq,
     &VAR_0->ue_sync_task[0].hdr,
     &VAR_0->ue_sync_task[1].hdr);
 FUNC_1(VAR_0);
}
