
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; scalar_t__* wValue; int bRequest; int bmRequestType; } ;
struct ucom_softc {scalar_t__ sc_portno; struct ubser_softc* sc_parent; } ;
struct ubser_softc {int sc_udev; scalar_t__ sc_iface_no; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct ucom_softc*,struct usb_device_request*,int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ucom_softc *VAR_2, uint8_t VAR_3)
{
 struct ubser_softc *VAR_4 = VAR_2->sc_parent;
 uint8_t VAR_5 = VAR_2->sc_portno;
 struct usb_device_request VAR_6;
 usb_error_t VAR_7;

 if (VAR_3) {

  VAR_6.bmRequestType = VAR_0;
  VAR_6.bRequest = VAR_1;
  VAR_6.wValue[0] = VAR_5;
  VAR_6.wValue[1] = 0;
  VAR_6.wIndex[0] = VAR_4->sc_iface_no;
  VAR_6.wIndex[1] = 0;
  FUNC_1(VAR_6.wLength, 0);

  VAR_7 = FUNC_2(VAR_4->sc_udev, VAR_2,
      &VAR_6, ((void*)0), 0, 1000);
  if (VAR_7) {
   FUNC_0(0, "send break failed, error=%s\n",
       FUNC_3(VAR_7));
  }
 }
}
