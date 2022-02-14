
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct umct_softc {int sc_ucom; int sc_udev; scalar_t__ sc_iface_no; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct umct_softc *VAR_1, uint8_t VAR_2,
    uint16_t VAR_3, uint32_t VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;
 uint8_t VAR_7[4];

 if (VAR_3 > 4)
  VAR_3 = 4;
 VAR_5.bmRequestType = VAR_0;
 VAR_5.bRequest = VAR_2;
 FUNC_2(VAR_5.wValue, 0);
 VAR_5.wIndex[0] = VAR_1->sc_iface_no;
 VAR_5.wIndex[1] = 0;
 FUNC_2(VAR_5.wLength, VAR_3);
 FUNC_1(VAR_7, VAR_4);

 VAR_6 = FUNC_3(VAR_1->sc_udev, &VAR_1->sc_ucom,
     &VAR_5, VAR_7, 0, 1000);
 if (VAR_6) {
  FUNC_0(0, "device request failed, err=%s "
      "(ignored)\n", FUNC_4(VAR_6));
 }
 return;
}
