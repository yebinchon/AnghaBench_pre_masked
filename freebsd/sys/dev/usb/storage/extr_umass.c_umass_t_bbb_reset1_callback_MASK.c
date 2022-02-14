
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int * wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct umass_softc {int sc_iface_no; } ;
typedef int req ;


 int FUNC_0 (struct umass_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct umass_softc*,int ) ;
 int FUNC_5 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*,int ,int) ;
 int FUNC_9 (struct usb_xfer*,int) ;
 struct umass_softc* FUNC_10 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct umass_softc *VAR_6 = FUNC_10(VAR_4);
 struct usb_device_request VAR_7;
 struct usb_page_cache *VAR_8;

 switch (FUNC_1(VAR_4)) {
 case 128:
  FUNC_4(VAR_6, VAR_1);
  return;

 case 129:
  FUNC_0(VAR_6, VAR_0, "BBB reset!\n");

  VAR_7.bmRequestType = VAR_3;
  VAR_7.bRequest = VAR_2;
  FUNC_2(VAR_7.wValue, 0);
  VAR_7.wIndex[0] = VAR_6->sc_iface_no;
  VAR_7.wIndex[1] = 0;
  FUNC_2(VAR_7.wLength, 0);

  VAR_8 = FUNC_7(VAR_4, 0);
  FUNC_5(VAR_8, 0, &VAR_7, sizeof(VAR_7));

  FUNC_8(VAR_4, 0, sizeof(VAR_7));
  FUNC_9(VAR_4, 1);
  FUNC_6(VAR_4);
  return;

 default:
  FUNC_3(VAR_4, VAR_5);
  return;
 }
}
