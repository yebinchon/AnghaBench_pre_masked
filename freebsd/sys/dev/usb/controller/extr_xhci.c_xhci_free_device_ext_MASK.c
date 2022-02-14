
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {TYPE_1__* devs; } ;
struct xhci_softc {TYPE_2__ sc_hw; } ;
struct usb_device {size_t controller_slot_id; int bus; } ;
struct TYPE_3__ {int * endpoint_pc; int input_pc; int device_pc; } ;


 struct xhci_softc* FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xhci_softc*,size_t,int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_device *VAR_1)
{
 struct xhci_softc *VAR_2 = FUNC_0(VAR_1->bus);
 uint8_t VAR_3;
 uint8_t VAR_4;

 VAR_3 = VAR_1->controller_slot_id;
 FUNC_2(VAR_2, VAR_3, 0);

 FUNC_1(&VAR_2->sc_hw.devs[VAR_3].device_pc);
 FUNC_1(&VAR_2->sc_hw.devs[VAR_3].input_pc);
 for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++)
  FUNC_1(&VAR_2->sc_hw.devs[VAR_3].endpoint_pc[VAR_4]);
}
