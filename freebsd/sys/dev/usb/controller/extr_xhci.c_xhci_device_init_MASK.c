
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef size_t uint8_t ;
struct TYPE_3__ {TYPE_2__* devs; } ;
struct xhci_softc {size_t sc_noslot; TYPE_1__ sc_hw; } ;
struct usb_device {size_t controller_slot_id; int * parent_hub; int bus; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_0 ;
 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_softc*) ;
 int FUNC_3 (struct xhci_softc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (struct usb_device*) ;
 scalar_t__ FUNC_6 (struct xhci_softc*,size_t*) ;
 scalar_t__ FUNC_7 (struct usb_device*,int *,int ) ;

__attribute__((used)) static usb_error_t
FUNC_8(struct usb_device *VAR_3)
{
 struct xhci_softc *VAR_4 = FUNC_1(VAR_3->bus);
 usb_error_t VAR_5;
 uint8_t VAR_6;


 if (VAR_3->parent_hub == ((void*)0))
  return (0);

 FUNC_2(VAR_4);



 VAR_3->controller_slot_id = VAR_4->sc_noslot + 1;



 VAR_5 = FUNC_6(VAR_4, &VAR_6);

 if (VAR_5) {
  FUNC_3(VAR_4);
  return (VAR_5);
 }

 if (VAR_6 > VAR_4->sc_noslot) {
  FUNC_3(VAR_4);
  return (VAR_0);
 }

 if (VAR_4->sc_hw.devs[VAR_6].state != VAR_1) {
  FUNC_0("slot %u already allocated.\n", VAR_6);
  FUNC_3(VAR_4);
  return (VAR_0);
 }



 VAR_3->controller_slot_id = VAR_6;



 FUNC_4(&VAR_4->sc_hw.devs[VAR_6], 0, sizeof(VAR_4->sc_hw.devs[0]));



 VAR_4->sc_hw.devs[VAR_6].state = VAR_2;

 VAR_5 = FUNC_5(VAR_3);

 FUNC_3(VAR_4);



 if (VAR_5 == 0)
  VAR_5 = FUNC_7(VAR_3, ((void*)0), 0);

 return (VAR_5);
}
