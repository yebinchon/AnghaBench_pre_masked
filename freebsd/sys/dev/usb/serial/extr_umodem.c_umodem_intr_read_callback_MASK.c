
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_cdc_notification {int bmRequestType; int bNotification; int* data; int wLength; } ;
struct umodem_softc {int sc_ucom; int sc_msr; int sc_lsr; } ;
typedef int pkt ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_cdc_notification*,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct umodem_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct usb_cdc_notification VAR_10;
 struct umodem_softc *VAR_11 = FUNC_10(VAR_8);
 struct usb_page_cache *VAR_12;
 uint16_t VAR_13;
 int VAR_14;

 FUNC_11(VAR_8, &VAR_14, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_8)) {
 case 128:

  if (VAR_14 < 8) {
   FUNC_0("received short packet, "
       "%d bytes\n", VAR_14);
   goto tr_setup;
  }
  if (VAR_14 > (int)sizeof(VAR_10)) {
   FUNC_0("truncating message\n");
   VAR_14 = sizeof(VAR_10);
  }
  VAR_12 = FUNC_6(VAR_8, 0);
  FUNC_4(VAR_12, 0, &VAR_10, VAR_14);

  VAR_14 -= 8;

  VAR_13 = FUNC_1(VAR_10.wLength);
  if (VAR_14 > VAR_13) {
   VAR_14 = VAR_13;
  }
  if (VAR_10.bmRequestType != VAR_3) {
   FUNC_0("unknown message type, "
       "0x%02x, on notify pipe!\n",
       VAR_10.bmRequestType);
   goto tr_setup;
  }
  switch (VAR_10.bNotification) {
  case 130:




   if (VAR_14 < 2) {
    FUNC_0("invalid notification "
        "length, %d bytes!\n", VAR_14);
    break;
   }
   FUNC_0("notify bytes = %02x%02x\n",
       VAR_10.data[0],
       VAR_10.data[1]);


   VAR_11->sc_lsr = 0;
   VAR_11->sc_msr = 0;

   if (VAR_10.data[0] & VAR_6) {
    VAR_11->sc_msr |= VAR_2;
   }
   if (VAR_10.data[0] & VAR_5) {
    VAR_11->sc_msr |= VAR_1;
   }
   if (VAR_10.data[0] & VAR_4) {
    VAR_11->sc_msr |= VAR_0;
   }
   FUNC_3(&VAR_11->sc_ucom);
   break;

  default:
   FUNC_0("unknown notify message: 0x%02x\n",
       VAR_10.bNotification);
   break;
  }

 case 129:
tr_setup:
  FUNC_8(VAR_8, 0, FUNC_7(VAR_8));
  FUNC_5(VAR_8);
  return;

 default:
  if (VAR_9 != VAR_7) {

   FUNC_9(VAR_8);
   goto tr_setup;
  }
  return;

 }
}
