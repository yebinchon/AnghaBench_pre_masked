
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_proc_callback_t ;
struct usb_proc_msg {int dummy; } ;
struct TYPE_2__ {int * pm_callback; } ;
struct usb_ether_cfg_task {struct usb_ether* ue; TYPE_1__ hdr; } ;
struct usb_ether {int ue_tq; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ether*,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,struct usb_proc_msg*,struct usb_proc_msg*) ;
 int FUNC_3 (int *,struct usb_proc_msg*,struct usb_proc_msg*) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_3,
    usb_proc_callback_t *VAR_4,
    struct usb_proc_msg *VAR_5, struct usb_proc_msg *VAR_6)
{
 struct usb_ether_cfg_task *VAR_7;

 FUNC_0(VAR_3, VAR_0);

 if (FUNC_1(&VAR_3->ue_tq)) {
  return;
 }





 VAR_7 = (struct usb_ether_cfg_task *)
   FUNC_2(&VAR_3->ue_tq, VAR_5, VAR_6);


 VAR_7->hdr.pm_callback = VAR_4;
 VAR_7->ue = VAR_3;




 if ((VAR_4 == VAR_1) || (VAR_4 == VAR_2))
  FUNC_3(&VAR_3->ue_tq, VAR_5, VAR_6);
}
