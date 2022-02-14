
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int wValue; int wIndex; int bRequest; int bmRequestType; } ;
struct ufoma_softc {int sc_ctrl_iface_no; int sc_ucom; } ;
typedef int req ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct usb_page_cache*,int ,int,int *) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int) ;
 int FUNC_8 (struct usb_xfer*,int,int) ;
 int FUNC_9 (struct usb_xfer*,int) ;
 struct ufoma_softc* FUNC_10 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct ufoma_softc *VAR_5 = FUNC_10(VAR_3);
 struct usb_device_request VAR_6;
 struct usb_page_cache *VAR_7;
 uint32_t VAR_8;

 switch (FUNC_1(VAR_3)) {
 case 128:
tr_transferred:
 case 129:
  VAR_7 = FUNC_7(VAR_3, 1);
  if (FUNC_3(&VAR_5->sc_ucom, VAR_7, 0, 1, &VAR_8)) {

   VAR_6.bmRequestType = VAR_2;
   VAR_6.bRequest = VAR_0;
   FUNC_2(VAR_6.wIndex, VAR_5->sc_ctrl_iface_no);
   FUNC_2(VAR_6.wValue, 0);
   FUNC_2(VAR_6.wLength, 1);

   VAR_7 = FUNC_7(VAR_3, 0);
   FUNC_4(VAR_7, 0, &VAR_6, sizeof(VAR_6));

   FUNC_8(VAR_3, 0, sizeof(VAR_6));
   FUNC_8(VAR_3, 1, 1);
   FUNC_9(VAR_3, 2);

   FUNC_6(VAR_3);
  }
  return;

 default:
  FUNC_0("error = %s\n", FUNC_5(VAR_4));

  if (VAR_4 == VAR_1) {
   return;
  }
  goto tr_transferred;
 }
}
