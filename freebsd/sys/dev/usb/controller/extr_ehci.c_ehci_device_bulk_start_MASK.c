
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_xfer {TYPE_1__* xroot; } ;
struct TYPE_6__ {int sc_flags; int sc_async_p_last; } ;
typedef TYPE_2__ ehci_softc_t ;
struct TYPE_5__ {int bus; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct usb_xfer*,int *) ;
 int FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_1)
{
 ehci_softc_t *VAR_2 = FUNC_0(VAR_1->xroot->bus);


 FUNC_2(VAR_1, &VAR_2->sc_async_p_last);


 FUNC_3(VAR_1);





 if (VAR_2->sc_flags & VAR_0)
  return;

 FUNC_1(VAR_2);
}
