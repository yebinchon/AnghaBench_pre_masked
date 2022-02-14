
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct usb_ether_cfg_task {struct usb_ether* ue; } ;
struct usb_ether {TYPE_1__* ue_methods; struct ifnet* ue_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int (* ue_tick ) (struct usb_ether*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_1(struct usb_proc_msg *VAR_1)
{
 struct usb_ether_cfg_task *VAR_2 =
     (struct usb_ether_cfg_task *)VAR_1;
 struct usb_ether *VAR_3 = VAR_2->ue;
 struct ifnet *VAR_4 = VAR_3->ue_ifp;

 if ((VAR_4->if_drv_flags & VAR_0) == 0)
  return;

 VAR_3->ue_methods->ue_tick(VAR_3);
}
