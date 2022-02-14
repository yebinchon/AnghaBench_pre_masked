
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uipaq_softc {int sc_ucom; int sc_udev; int sc_line; } ;
struct ucom_softc {struct uipaq_softc* sc_parent; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_4, uint8_t VAR_5)
{
 struct uipaq_softc *VAR_6 = VAR_4->sc_parent;
 struct usb_device_request VAR_7;

 FUNC_0("onoff=%d\n", VAR_5);

 if (VAR_5)
  VAR_6->sc_line |= VAR_0;
 else
  VAR_6->sc_line &= ~VAR_0;

 VAR_7.bmRequestType = VAR_3;
 VAR_7.bRequest = VAR_1;
 FUNC_1(VAR_7.wValue, VAR_6->sc_line);
 VAR_7.wIndex[0] = VAR_2;
 VAR_7.wIndex[1] = 0;
 FUNC_1(VAR_7.wLength, 0);

 FUNC_2(VAR_6->sc_udev, &VAR_6->sc_ucom,
     &VAR_7, ((void*)0), 0, 1000);
}
