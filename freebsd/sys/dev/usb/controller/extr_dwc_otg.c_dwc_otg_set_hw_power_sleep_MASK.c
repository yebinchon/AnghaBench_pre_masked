
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_bus {int dummy; } ;
struct dwc_otg_softc {int dummy; } ;


 struct dwc_otg_softc* FUNC_0 (struct usb_bus*) ;



 int FUNC_1 (struct dwc_otg_softc*) ;
 int FUNC_2 (struct dwc_otg_softc*) ;
 int FUNC_3 (struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_4(struct usb_bus *VAR_0, uint32_t VAR_1)
{
 struct dwc_otg_softc *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 128:
  FUNC_2(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  break;
 case 130:
  FUNC_1(VAR_2);
  break;
 default:
  break;
 }
}
