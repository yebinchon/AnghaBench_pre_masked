
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct usb_xfer {int dummy; } ;
struct umass_softc {int dummy; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct umass_softc*) ;
 int FUNC_2 (scalar_t__) ;
 struct umass_softc* FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct umass_softc *VAR_4 = FUNC_3(VAR_2);

 if (VAR_3 != VAR_1) {

  FUNC_0(VAR_4, VAR_0, "transfer error, %s -> "
      "reset\n", FUNC_2(VAR_3));
 }
 FUNC_1(VAR_4);
}
