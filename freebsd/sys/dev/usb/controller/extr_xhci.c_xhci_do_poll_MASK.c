
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_softc {int sc_bus; } ;
struct usb_bus {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xhci_softc* FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct xhci_softc*) ;

__attribute__((used)) static void
FUNC_4(struct usb_bus *VAR_0)
{
 struct xhci_softc *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->sc_bus);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->sc_bus);
}
