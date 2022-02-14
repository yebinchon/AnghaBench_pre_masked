
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct umodem_softc {int sc_acm_cap; int sc_ucom; int sc_udev; scalar_t__ sc_ctrl_iface_no; } ;
struct ucom_softc {struct umodem_softc* sc_parent; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ucom_softc *VAR_5, uint8_t VAR_6)
{
 struct umodem_softc *VAR_7 = VAR_5->sc_parent;
 struct usb_device_request VAR_8;
 uint16_t VAR_9;

 FUNC_0("onoff=%d\n", VAR_6);

 if (VAR_7->sc_acm_cap & VAR_3) {

  VAR_9 = VAR_6 ? VAR_1 : VAR_0;

  VAR_8.bmRequestType = VAR_4;
  VAR_8.bRequest = VAR_2;
  FUNC_1(VAR_8.wValue, VAR_9);
  VAR_8.wIndex[0] = VAR_7->sc_ctrl_iface_no;
  VAR_8.wIndex[1] = 0;
  FUNC_1(VAR_8.wLength, 0);

  FUNC_2(VAR_7->sc_udev, &VAR_7->sc_ucom,
      &VAR_8, ((void*)0), 0, 1000);
 }
}
