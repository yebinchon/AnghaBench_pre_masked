
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct uvisor_softc {int sc_ucom; int sc_udev; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ucom_softc {struct uvisor_softc* sc_parent; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ucom_softc *VAR_3)
{
 struct uvisor_softc *VAR_4 = VAR_3->sc_parent;
 uint8_t VAR_5[VAR_2];
 struct usb_device_request VAR_6;
 usb_error_t VAR_7;

 VAR_6.bmRequestType = VAR_0;
 VAR_6.bRequest = VAR_1;
 FUNC_1(VAR_6.wValue, 0);
 FUNC_1(VAR_6.wIndex, 0);
 FUNC_1(VAR_6.wLength, VAR_2);

 VAR_7 = FUNC_2(VAR_4->sc_udev, &VAR_4->sc_ucom,
     &VAR_6, VAR_5, 0, 1000);
 if (VAR_7) {
  FUNC_0(0, "close notification failed, error=%s\n",
      FUNC_3(VAR_7));
 }
}
