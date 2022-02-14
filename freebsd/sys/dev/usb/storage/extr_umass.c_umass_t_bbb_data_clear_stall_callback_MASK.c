
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef size_t uint8_t ;
struct usb_xfer {int dummy; } ;
struct umass_softc {int * sc_xfer; } ;


 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_xfer*,int ) ;
 int FUNC_2 (struct umass_softc*,size_t) ;
 int FUNC_3 (struct usb_xfer*,int ) ;
 struct umass_softc* FUNC_4 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_0,
    uint8_t VAR_1, uint8_t VAR_2, usb_error_t VAR_3)
{
 struct umass_softc *VAR_4 = FUNC_4(VAR_0);

 switch (FUNC_0(VAR_0)) {
 case 128:
tr_transferred:
  FUNC_2(VAR_4, VAR_1);
  return;

 case 129:
  if (FUNC_3(VAR_0, VAR_4->sc_xfer[VAR_2])) {
   goto tr_transferred;
  }
  return;

 default:
  FUNC_1(VAR_0, VAR_3);
  return;
 }
}
