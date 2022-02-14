
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer {int endpointno; scalar_t__ timeout; TYPE_1__* xroot; } ;
struct avr32dci_softc {int dummy; } ;
struct TYPE_4__ {int intr_q; } ;
struct TYPE_3__ {TYPE_2__* bus; } ;


 struct avr32dci_softc* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct avr32dci_softc*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (int *,struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct usb_xfer *VAR_2)
{
 FUNC_2(9, "\n");


 if (FUNC_4(VAR_2)) {
  uint8_t VAR_3 = VAR_2->endpointno & VAR_0;
  struct avr32dci_softc *VAR_4 = FUNC_0(VAR_2->xroot->bus);

  FUNC_3(VAR_4, FUNC_1(VAR_3), 0);


  FUNC_5(&VAR_2->xroot->bus->intr_q, VAR_2);


  if (VAR_2->timeout != 0) {
   FUNC_6(VAR_2,
       &VAR_1, VAR_2->timeout);
  }
 }
}
