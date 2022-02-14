
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct usb_bus {int hw_power_state; } ;
struct TYPE_2__ {int bdev; } ;
struct uhci_softc {TYPE_1__ sc_bus; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct uhci_softc*,int ) ;
 struct uhci_softc* FUNC_2 (struct usb_bus*) ;
 int VAR_0 ;
 int FUNC_3 (struct usb_bus*) ;
 int FUNC_4 (struct usb_bus*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uhci_softc*) ;

__attribute__((used)) static void
FUNC_7(struct usb_bus *VAR_6)
{
 struct uhci_softc *VAR_7 = FUNC_2(VAR_6);
 uint32_t VAR_8;

 FUNC_0("\n");

 FUNC_3(VAR_6);

 VAR_8 = VAR_6->hw_power_state;






 if (VAR_8 & (VAR_2 |
     VAR_5 |
     VAR_1 |
     VAR_3 |
     VAR_4)) {
  FUNC_0("Some USB transfer is "
      "active on unit %u.\n",
      FUNC_5(VAR_7->sc_bus.bdev));
  FUNC_6(VAR_7);
 } else {
  FUNC_0("Power save on unit %u.\n",
      FUNC_5(VAR_7->sc_bus.bdev));
  FUNC_1(VAR_7, VAR_0);
 }

 FUNC_4(VAR_6);

 return;
}
