
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uark_softc {int sc_ucom; int sc_udev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct uark_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_1(VAR_5.wValue, VAR_4);
 FUNC_1(VAR_5.wIndex, VAR_3);
 FUNC_1(VAR_5.wLength, 0);

 VAR_6 = FUNC_2(VAR_2->sc_udev, &VAR_2->sc_ucom,
     &VAR_5, ((void*)0), 0, 1000);
 if (VAR_6) {
  FUNC_0(0, "device request failed, err=%s "
      "(ignored)\n", FUNC_3(VAR_6));
 }
}
