
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_bus {int dummy; } ;
struct TYPE_4__ {int sc_bus; } ;
typedef TYPE_1__ ehci_softc_t ;


 TYPE_1__* FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct usb_bus *VAR_0)
{
 ehci_softc_t *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->sc_bus);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->sc_bus);
}
