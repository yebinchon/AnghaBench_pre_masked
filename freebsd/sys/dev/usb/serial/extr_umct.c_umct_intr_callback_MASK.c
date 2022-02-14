
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct umct_softc {scalar_t__ sc_swap_cb; } ;


 int FUNC_0 (struct usb_xfer*,int ) ;
 int FUNC_1 (struct usb_xfer*,int ) ;
 struct umct_softc* FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0, usb_error_t VAR_1)
{
 struct umct_softc *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->sc_swap_cb)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
