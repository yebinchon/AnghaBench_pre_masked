
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {TYPE_1__* devs; } ;
struct xhci_softc {size_t sc_noslot; TYPE_2__ sc_hw; } ;
struct usb_device {size_t controller_slot_id; int * parent_hub; int bus; } ;
struct TYPE_3__ {int state; } ;


 struct xhci_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_softc*) ;
 int FUNC_2 (struct xhci_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct xhci_softc*,size_t) ;
 int FUNC_4 (struct usb_device*) ;

__attribute__((used)) static void
FUNC_5(struct usb_device *VAR_1)
{
 struct xhci_softc *VAR_2 = FUNC_0(VAR_1->bus);
 uint8_t VAR_3;


 if (VAR_1->parent_hub == ((void*)0))
  return;

 FUNC_1(VAR_2);

 VAR_3 = VAR_1->controller_slot_id;

 if (VAR_3 <= VAR_2->sc_noslot) {
  FUNC_3(VAR_2, VAR_3);
  VAR_2->sc_hw.devs[VAR_3].state = VAR_0;


  FUNC_4(VAR_1);
 }

 FUNC_2(VAR_2);
}
