
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct urio_softc {int sc_flags; struct usb_xfer** sc_xfer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (struct usb_xfer*,struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*) ;
 struct urio_softc* FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct urio_softc *VAR_4 = FUNC_3(VAR_2);
 struct usb_xfer *VAR_5 = VAR_4->sc_xfer[VAR_1];

 if (FUNC_1(VAR_2, VAR_5)) {
  FUNC_0("stall cleared\n");
  VAR_4->sc_flags &= ~VAR_0;
  FUNC_2(VAR_5);
 }
}
