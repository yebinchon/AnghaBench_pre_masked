
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int * wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ulpt_softc {int sc_last_status; int sc_iface_no; int sc_dev; } ;
typedef int req ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_6 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_9 (struct usb_xfer*,int) ;
 int FUNC_10 (struct usb_xfer*,int,int) ;
 int FUNC_11 (struct usb_xfer*,int) ;
 struct ulpt_softc* FUNC_12 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_9, usb_error_t VAR_10)
{
 struct ulpt_softc *VAR_11 = FUNC_12(VAR_9);
 struct usb_device_request VAR_12;
 struct usb_page_cache *VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;

 switch (FUNC_1(VAR_9)) {
 case 128:

  VAR_13 = FUNC_9(VAR_9, 1);
  FUNC_6(VAR_13, 0, &VAR_14, 1);

  VAR_14 = (VAR_14 ^ VAR_1) & VAR_2;
  VAR_15 = VAR_14 & ~VAR_11->sc_last_status;
  VAR_11->sc_last_status = VAR_14;

  if (VAR_15 & VAR_5)
   FUNC_4(VAR_0, "%s: offline\n",
       FUNC_3(VAR_11->sc_dev));
  else if (VAR_15 & VAR_4)
   FUNC_4(VAR_0, "%s: out of paper\n",
       FUNC_3(VAR_11->sc_dev));
  else if (VAR_15 & VAR_3)
   FUNC_4(VAR_0, "%s: output error\n",
       FUNC_3(VAR_11->sc_dev));
  break;

 case 129:
  VAR_12.bmRequestType = VAR_8;
  VAR_12.bRequest = VAR_6;
  FUNC_2(VAR_12.wValue, 0);
  VAR_12.wIndex[0] = VAR_11->sc_iface_no;
  VAR_12.wIndex[1] = 0;
  FUNC_2(VAR_12.wLength, 1);

  VAR_13 = FUNC_9(VAR_9, 0);
  FUNC_5(VAR_13, 0, &VAR_12, sizeof(VAR_12));

  FUNC_10(VAR_9, 0, sizeof(VAR_12));
  FUNC_10(VAR_9, 1, 1);
  FUNC_11(VAR_9, 2);
  FUNC_8(VAR_9);
  break;

 default:
  FUNC_0("error=%s\n", FUNC_7(VAR_10));
  if (VAR_10 != VAR_7) {

  }
  break;
 }
}
