
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ usb_mode; } ;
struct usb_xfer {int endpointno; TYPE_2__ flags_int; int endpoint; TYPE_1__* xroot; } ;
struct avr32dci_softc {int sc_bus; } ;
struct TYPE_3__ {int bus; } ;


 struct avr32dci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct avr32dci_softc*,int ,int ) ;
 int FUNC_5 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct avr32dci_softc *VAR_5 = FUNC_0(VAR_3->xroot->bus);
 uint8_t VAR_6;

 FUNC_3(&VAR_5->sc_bus, VAR_0);

 FUNC_2(9, "xfer=%p, pipe=%p, error=%d\n",
     VAR_3, VAR_3->endpoint, VAR_4);

 if (VAR_3->flags_int.usb_mode == VAR_2) {
  VAR_6 = (VAR_3->endpointno & VAR_1);


  FUNC_4(VAR_5, 0, FUNC_1(VAR_6));

  FUNC_2(15, "disabled interrupts!\n");
 }

 FUNC_5(VAR_3, VAR_4);
}
