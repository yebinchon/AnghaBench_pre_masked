
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uss820dci_softc {int sc_bus; } ;
struct usb_xfer {scalar_t__ timeout; TYPE_1__* xroot; } ;
struct TYPE_4__ {int intr_q; } ;
struct TYPE_3__ {TYPE_2__* bus; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct uss820dci_softc* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int *,scalar_t__) ;
 int FUNC_6 (struct usb_xfer*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_1)
{
 struct uss820dci_softc *VAR_2 = FUNC_3(VAR_1->xroot->bus);

 FUNC_0(9, "\n");

 FUNC_1(&VAR_2->sc_bus);


 FUNC_8(VAR_1);

 if (FUNC_7(VAR_1) == 0) {





  FUNC_6(VAR_1, 1);


  FUNC_4(&VAR_1->xroot->bus->intr_q, VAR_1);


  if (VAR_1->timeout != 0) {
   FUNC_5(VAR_1,
       &VAR_0, VAR_1->timeout);
  }
 }
 FUNC_2(&VAR_2->sc_bus);
}
