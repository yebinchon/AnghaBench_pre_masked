
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int * wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uhid_snes_softc {int sc_previous_status; int sc_iface_num; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_3 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int) ;
 int FUNC_6 (struct usb_xfer*,int,int) ;
 int FUNC_7 (struct usb_xfer*,int) ;
 struct uhid_snes_softc* FUNC_8 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct uhid_snes_softc *VAR_4 = FUNC_8(VAR_2);
 struct usb_device_request VAR_5;
 struct usb_page_cache *VAR_6;
 uint8_t VAR_7, VAR_8;

 switch (FUNC_0(VAR_2)) {
 case 129:
  VAR_5.bmRequestType = VAR_1;
  VAR_5.bRequest = VAR_0;
  FUNC_1(VAR_5.wValue, 0);
  VAR_5.wIndex[0] = VAR_4->sc_iface_num;
  VAR_5.wIndex[1] = 0;
  FUNC_1(VAR_5.wLength, 1);

  VAR_6 = FUNC_5(VAR_2, 0);
  FUNC_2(VAR_6, 0, &VAR_5, sizeof(VAR_5));
  FUNC_6(VAR_2, 0, sizeof(VAR_5));
  FUNC_6(VAR_2, 1, 1);
  FUNC_7(VAR_2, 2);
  FUNC_4(VAR_2);
  break;

 case 128:
  VAR_6 = FUNC_5(VAR_2, 1);
  FUNC_3(VAR_6, 0, &VAR_7, 1);
  VAR_8 = VAR_7 & ~VAR_4->sc_previous_status;
  VAR_4->sc_previous_status = VAR_7;
  break;

 default:
  break;
 }

}
