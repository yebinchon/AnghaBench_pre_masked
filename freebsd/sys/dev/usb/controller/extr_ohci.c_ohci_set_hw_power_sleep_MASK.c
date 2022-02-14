
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_bus {int dummy; } ;
struct ohci_softc {int dummy; } ;


 struct ohci_softc* FUNC_0 (struct usb_bus*) ;



 int FUNC_1 (struct ohci_softc*) ;
 int FUNC_2 (struct ohci_softc*) ;

__attribute__((used)) static void
FUNC_3(struct usb_bus *VAR_0, uint32_t VAR_1)
{
 struct ohci_softc *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 128:
 case 129:
  FUNC_2(VAR_2);
  break;
 case 130:
  FUNC_1(VAR_2);
  break;
 default:
  break;
 }
}
