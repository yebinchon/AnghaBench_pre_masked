
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_sync_task; } ;
struct TYPE_2__ {int hdr; } ;


 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (struct usb_ether*,int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct usb_ether *VAR_2 = VAR_1;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_0,
     &VAR_2->ue_sync_task[0].hdr,
     &VAR_2->ue_sync_task[1].hdr);
 FUNC_1(VAR_2);
}
