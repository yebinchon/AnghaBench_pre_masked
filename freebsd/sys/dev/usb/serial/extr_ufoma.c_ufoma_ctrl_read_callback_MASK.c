
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int wValue; int wIndex; int bRequest; int bmRequestType; } ;
struct ufoma_softc {int sc_ctrl_iface_no; int sc_num_msg; int sc_ucom; } ;
typedef int req ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,struct usb_page_cache*,int ,int) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int) ;
 struct usb_page_cache* FUNC_8 (struct usb_xfer*,int) ;
 int FUNC_9 (struct usb_xfer*,int,int) ;
 int FUNC_10 (struct usb_xfer*,int) ;
 struct ufoma_softc* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int *,int *,int*,int*) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct ufoma_softc *VAR_6 = FUNC_11(VAR_4);
 struct usb_device_request VAR_7;
 struct usb_page_cache *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_12(VAR_4, ((void*)0), ((void*)0), &VAR_11, &VAR_12);

 switch (FUNC_1(VAR_4)) {
 case 128:
tr_transferred:
  if (VAR_11 != VAR_12)
   goto tr_setup;
  VAR_9 = FUNC_8(VAR_4, 1);
  VAR_10 = FUNC_7(VAR_4, 1);
  if (VAR_10 > 0)
   FUNC_3(&VAR_6->sc_ucom, VAR_9, 0, VAR_10);

 case 129:
tr_setup:
  if (VAR_6->sc_num_msg) {
   VAR_6->sc_num_msg--;

   VAR_7.bmRequestType = VAR_3;
   VAR_7.bRequest = VAR_0;
   FUNC_2(VAR_7.wIndex, VAR_6->sc_ctrl_iface_no);
   FUNC_2(VAR_7.wValue, 0);
   FUNC_2(VAR_7.wLength, VAR_1);

   VAR_8 = FUNC_8(VAR_4, 0);
   FUNC_4(VAR_8, 0, &VAR_7, sizeof(VAR_7));

   FUNC_9(VAR_4, 0, sizeof(VAR_7));
   FUNC_9(VAR_4, 1, VAR_1);
   FUNC_10(VAR_4, 2);
   FUNC_6(VAR_4);
  }
  return;

 default:
  FUNC_0("error = %s\n",
      FUNC_5(VAR_5));

  if (VAR_5 == VAR_2) {
   return;
  }
  goto tr_transferred;
 }
}
