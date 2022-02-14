
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int intr_q; } ;
struct xhci_softc {int * sc_config_msg; TYPE_2__ sc_bus; } ;
struct usb_xfer {TYPE_1__* xroot; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct xhci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_0)
{
 struct xhci_softc *VAR_1 = FUNC_1(VAR_0->xroot->bus);


 FUNC_3(&VAR_1->sc_bus.intr_q, VAR_0);

 (void)FUNC_2(FUNC_0(&VAR_1->sc_bus),
     &VAR_1->sc_config_msg[0], &VAR_1->sc_config_msg[1]);
}
