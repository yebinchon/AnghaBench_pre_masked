
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_methods; } ;
struct ifnet {int if_drv_flags; struct usb_ether* if_softc; } ;
struct TYPE_2__ {int (* ue_start ) (struct usb_ether*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ether*) ;
 int FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1)
{
 struct usb_ether *VAR_2 = VAR_1->if_softc;

 if ((VAR_1->if_drv_flags & VAR_0) == 0)
  return;

 FUNC_0(VAR_2);
 VAR_2->ue_methods->ue_start(VAR_2);
 FUNC_1(VAR_2);
}
