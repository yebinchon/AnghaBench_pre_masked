
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct uvscom_softc {int sc_ucom; int sc_udev; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct uvscom_softc *VAR_1, uint8_t VAR_2, uint16_t VAR_3)
{
 struct usb_device_request VAR_4;
 usb_error_t VAR_5;

 VAR_4.bmRequestType = VAR_0;
 VAR_4.bRequest = VAR_2;
 FUNC_1(VAR_4.wValue, VAR_3);
 FUNC_1(VAR_4.wIndex, 0);
 FUNC_1(VAR_4.wLength, 0);

 VAR_5 = FUNC_2(VAR_1->sc_udev, &VAR_1->sc_ucom,
     &VAR_4, ((void*)0), 0, 1000);
 if (VAR_5) {
  FUNC_0(0, "device request failed, err=%s "
      "(ignored)\n", FUNC_3(VAR_5));
 }
}
