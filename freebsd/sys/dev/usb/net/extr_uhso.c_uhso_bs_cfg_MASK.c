
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uhso_softc {int sc_line; int sc_dev; int * sc_ucom; int sc_udev; int sc_iface_no; int sc_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct uhso_softc *VAR_3)
{
 struct usb_device_request VAR_4;
 usb_error_t VAR_5;

 if (!(FUNC_0(VAR_3->sc_type) & VAR_1))
  return;

 VAR_4.bmRequestType = VAR_2;
 VAR_4.bRequest = VAR_0;
 FUNC_1(VAR_4.wValue, VAR_3->sc_line);
 FUNC_1(VAR_4.wIndex, VAR_3->sc_iface_no);
 FUNC_1(VAR_4.wLength, 0);

 VAR_5 = FUNC_3(VAR_3->sc_udev, &VAR_3->sc_ucom[0], &VAR_4, ((void*)0), 0, 1000);
 if (VAR_5 != 0) {
  FUNC_2(VAR_3->sc_dev, "failed to set ctrl line state to "
      "0x%02x: %s\n", VAR_3->sc_line, FUNC_4(VAR_5));
 }
}
