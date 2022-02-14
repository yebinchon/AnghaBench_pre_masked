
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
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int*,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_4(struct uvscom_softc *VAR_2)
{
 struct usb_device_request VAR_3;
 usb_error_t VAR_4;
 uint8_t VAR_5[2];

 VAR_3.bmRequestType = VAR_0;
 VAR_3.bRequest = VAR_1;
 FUNC_1(VAR_3.wValue, 0);
 FUNC_1(VAR_3.wIndex, 0);
 FUNC_1(VAR_3.wLength, 2);

 VAR_4 = FUNC_2(VAR_2->sc_udev, &VAR_2->sc_ucom,
     &VAR_3, VAR_5, 0, 1000);
 if (VAR_4) {
  FUNC_0(0, "device request failed, err=%s "
      "(ignored)\n", FUNC_3(VAR_4));
 }
 return (VAR_5[0] | (VAR_5[1] << 8));
}
