
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct xhci_softc {int dummy; } ;
struct usb_device {int controller_slot_id; int * parent_hub; int bus; } ;


 int FUNC_0 (char*,...) ;
 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_softc*) ;
 int FUNC_3 (struct xhci_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct xhci_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct usb_device *VAR_1)
{
 struct xhci_softc *VAR_2 = FUNC_1(VAR_1->bus);
 uint8_t VAR_3;
 uint8_t VAR_4;
 usb_error_t VAR_5;

 FUNC_0("\n");


 if (VAR_1->parent_hub == ((void*)0))
  return;

 VAR_3 = VAR_1->controller_slot_id;

 FUNC_2(VAR_2);



 for (VAR_4 = 1; VAR_4 != VAR_0; VAR_4++) {
  VAR_5 = FUNC_4(VAR_2, 1, VAR_4, VAR_3);
  if (VAR_5 != 0) {
   FUNC_0("Failed to suspend endpoint "
       "%u on slot %u (ignored).\n", VAR_4, VAR_3);
  }
 }

 FUNC_3(VAR_2);
}
