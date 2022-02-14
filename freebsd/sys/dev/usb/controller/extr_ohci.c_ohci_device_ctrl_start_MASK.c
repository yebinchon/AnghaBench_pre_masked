
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_xfer {TYPE_1__* xroot; } ;
struct TYPE_5__ {int sc_ctrl_p_last; } ;
typedef TYPE_2__ ohci_softc_t ;
struct TYPE_4__ {int bus; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_xfer*,int *) ;
 int FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0)
{
 ohci_softc_t *VAR_1 = FUNC_0(VAR_0->xroot->bus);


 FUNC_1(VAR_0, &VAR_1->sc_ctrl_p_last);


 FUNC_2(VAR_0);
}
