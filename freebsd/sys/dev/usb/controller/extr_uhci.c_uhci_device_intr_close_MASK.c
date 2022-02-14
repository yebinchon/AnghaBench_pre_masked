
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * sc_intr_stat; } ;
typedef TYPE_2__ uhci_softc_t ;
struct usb_xfer {size_t qh_pos; TYPE_1__* xroot; } ;
struct TYPE_4__ {int bus; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_xfer *VAR_1)
{
 uhci_softc_t *VAR_2 = FUNC_0(VAR_1->xroot->bus);

 VAR_2->sc_intr_stat[VAR_1->qh_pos]--;

 FUNC_1(VAR_1, VAR_0);
}
