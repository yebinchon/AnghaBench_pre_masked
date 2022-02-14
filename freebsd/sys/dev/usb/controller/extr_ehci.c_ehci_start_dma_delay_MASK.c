
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_xfer {TYPE_1__* xroot; } ;
struct ehci_softc {int dummy; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (char*) ;
 struct ehci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct ehci_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct usb_xfer*,void (*) (void*),int) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_1)
{
 struct ehci_softc *VAR_2 = FUNC_1(VAR_1->xroot->bus);

 FUNC_0("\n");


 FUNC_2(VAR_2);


 FUNC_3(VAR_1,
     (void (*)(void *))&VAR_0, 4);
}
