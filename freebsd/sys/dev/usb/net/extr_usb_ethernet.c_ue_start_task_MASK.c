
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct usb_ether_cfg_task {struct usb_ether* ue; } ;
struct usb_ether {int ue_watchdog; TYPE_1__* ue_methods; struct ifnet* ue_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int * ue_tick; int (* ue_init ) (struct usb_ether*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_ether*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_ether*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,struct usb_ether*) ;

__attribute__((used)) static void
FUNC_3(struct usb_proc_msg *VAR_4)
{
 struct usb_ether_cfg_task *VAR_5 =
     (struct usb_ether_cfg_task *)VAR_4;
 struct usb_ether *VAR_6 = VAR_5->ue;
 struct ifnet *VAR_7 = VAR_6->ue_ifp;

 FUNC_0(VAR_6, VAR_1);

 VAR_6->ue_methods->ue_init(VAR_6);

 if ((VAR_7->if_drv_flags & VAR_0) == 0)
  return;

 if (VAR_6->ue_methods->ue_tick != ((void*)0))
  FUNC_2(&VAR_6->ue_watchdog, VAR_2, VAR_3, VAR_6);
}
