
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_proc_msg {int dummy; } ;
struct usb_ether_cfg_task {struct usb_ether* ue; } ;
struct usb_ether {TYPE_1__* ue_methods; int ue_watchdog; } ;
struct TYPE_2__ {int (* ue_stop ) (struct usb_ether*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ether*,int ) ;
 int FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct usb_proc_msg *VAR_1)
{
 struct usb_ether_cfg_task *VAR_2 =
     (struct usb_ether_cfg_task *)VAR_1;
 struct usb_ether *VAR_3 = VAR_2->ue;

 FUNC_0(VAR_3, VAR_0);

 FUNC_2(&VAR_3->ue_watchdog);

 VAR_3->ue_methods->ue_stop(VAR_3);
}
