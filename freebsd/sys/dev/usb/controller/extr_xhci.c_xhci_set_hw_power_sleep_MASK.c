
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xhci_softc {int dummy; } ;
struct usb_bus {int dummy; } ;


 int FUNC_0 (char*) ;



 struct xhci_softc* FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct xhci_softc*) ;
 int FUNC_3 (struct xhci_softc*) ;
 int FUNC_4 (struct xhci_softc*) ;

__attribute__((used)) static void
FUNC_5(struct usb_bus *VAR_0, uint32_t VAR_1)
{
 struct xhci_softc *VAR_2 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 128:
  FUNC_0("Stopping the XHCI\n");
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
  break;
 case 129:
  FUNC_0("Stopping the XHCI\n");
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
  break;
 case 130:
  FUNC_0("Starting the XHCI\n");
  FUNC_4(VAR_2);
  break;
 default:
  break;
 }
}
