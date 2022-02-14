
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef size_t uint8_t ;
struct usb_xfer {int dummy; } ;
struct umass_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct umass_softc*) ;
 int FUNC_2 (struct usb_xfer*,int ) ;
 int FUNC_3 (struct umass_softc*,size_t) ;
 int FUNC_4 (struct usb_xfer*,int ) ;
 struct umass_softc* FUNC_5 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_1,
    uint8_t VAR_2, uint8_t VAR_3, usb_error_t VAR_4)
{
 struct umass_softc *VAR_5 = FUNC_5(VAR_1);

 switch (FUNC_0(VAR_1)) {
 case 128:
tr_transferred:
  if (VAR_2 == VAR_0) {
   FUNC_1(VAR_5);
  } else {
   FUNC_3(VAR_5, VAR_2);
  }
  break;

 case 129:
  if (FUNC_4(VAR_1, VAR_5->sc_xfer[VAR_3])) {
   goto tr_transferred;
  }
  break;

 default:
  FUNC_2(VAR_1, VAR_4);
  break;
 }
}
