
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uplcom_softc {int sc_ucom; int sc_udev; scalar_t__ sc_data_iface_no; int sc_line; } ;
struct ucom_softc {struct uplcom_softc* sc_parent; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_3, uint8_t VAR_4)
{
 struct uplcom_softc *VAR_5 = VAR_3->sc_parent;
 struct usb_device_request VAR_6;

 FUNC_0("onoff = %d\n", VAR_4);

 if (VAR_4)
  VAR_5->sc_line |= VAR_0;
 else
  VAR_5->sc_line &= ~VAR_0;

 VAR_6.bmRequestType = VAR_2;
 VAR_6.bRequest = VAR_1;
 FUNC_1(VAR_6.wValue, VAR_5->sc_line);
 VAR_6.wIndex[0] = VAR_5->sc_data_iface_no;
 VAR_6.wIndex[1] = 0;
 FUNC_1(VAR_6.wLength, 0);

 FUNC_2(VAR_5->sc_udev, &VAR_5->sc_ucom,
     &VAR_6, ((void*)0), 0, 1000);
}
