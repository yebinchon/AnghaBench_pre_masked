
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
struct atmegadci_softc {int sc_bus; } ;
struct TYPE_3__ {int bus; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct atmegadci_softc*,int ,int) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct atmegadci_softc *VAR_7 = FUNC_0(VAR_5->xroot->bus);
 uint8_t VAR_8;

 FUNC_3(&VAR_7->sc_bus, VAR_2);

 FUNC_2(9, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_5, VAR_5->endpoint, VAR_6);

 if (VAR_5->flags_int.usb_mode == VAR_4) {
  VAR_8 = (VAR_5->endpointno & VAR_3);


  FUNC_1(VAR_7, VAR_1, VAR_8);


  FUNC_1(VAR_7, VAR_0, 0);

  FUNC_2(15, "disabled interrupts!\n");
 }

 FUNC_4(VAR_5, VAR_6);
}
