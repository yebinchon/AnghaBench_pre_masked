
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct usb_ether_cfg_task {struct usb_ether* ue; } ;
struct usb_ether {TYPE_1__* ue_methods; struct ifnet* ue_ifp; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int (* ue_mii_upd ) (struct ifnet*) ;} ;


 int FUNC_0 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_1(struct usb_proc_msg *VAR_0)
{
 struct usb_ether_cfg_task *VAR_1 =
     (struct usb_ether_cfg_task *)VAR_0;
 struct usb_ether *VAR_2 = VAR_1->ue;
 struct ifnet *VAR_3 = VAR_2->ue_ifp;

 VAR_2->ue_methods->ue_mii_upd(VAR_3);
}
