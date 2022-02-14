
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct uslcom_softc {int sc_msr; int sc_iface_no; int sc_ucom; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef int req ;
typedef int buf ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_5 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_8 (struct usb_xfer*,int) ;
 int FUNC_9 (struct usb_xfer*,int,int) ;
 int FUNC_10 (struct usb_xfer*,int) ;
 struct uslcom_softc* FUNC_11 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_11, usb_error_t VAR_12)
{
 struct uslcom_softc *VAR_13 = FUNC_11(VAR_11);
 struct usb_page_cache *VAR_14;
 struct usb_device_request VAR_15;
 uint8_t VAR_16 = 0;
 uint8_t VAR_17;

 switch (FUNC_1(VAR_11)) {
 case 128:
  VAR_14 = FUNC_8(VAR_11, 1);
  FUNC_5(VAR_14, 0, &VAR_17, sizeof(VAR_17));
  if (VAR_17 & VAR_6)
   VAR_16 |= VAR_0;
  if (VAR_17 & VAR_8)
   VAR_16 |= VAR_2;
  if (VAR_17 & VAR_9)
   VAR_16 |= VAR_3;
  if (VAR_17 & VAR_7)
   VAR_16 |= VAR_1;

  if (VAR_16 != VAR_13->sc_msr) {
   FUNC_0("status change msr=0x%02x "
       "(was 0x%02x)\n", VAR_16, VAR_13->sc_msr);
   VAR_13->sc_msr = VAR_16;
   FUNC_3(&VAR_13->sc_ucom);
  }
  break;

 case 129:
  VAR_15.bmRequestType = VAR_10;
  VAR_15.bRequest = VAR_5;
  FUNC_2(VAR_15.wValue, 0);
  FUNC_2(VAR_15.wIndex, VAR_13->sc_iface_no);
  FUNC_2(VAR_15.wLength, sizeof(VAR_17));

  FUNC_10(VAR_11, 2);
  FUNC_9(VAR_11, 0, sizeof(VAR_15));
  FUNC_9(VAR_11, 1, sizeof(VAR_17));

  VAR_14 = FUNC_8(VAR_11, 0);
  FUNC_4(VAR_14, 0, &VAR_15, sizeof(VAR_15));
  FUNC_7(VAR_11);
  break;

 default:
  if (VAR_12 != VAR_4)
   FUNC_0("error=%s\n", FUNC_6(VAR_12));
  break;
 }
}
