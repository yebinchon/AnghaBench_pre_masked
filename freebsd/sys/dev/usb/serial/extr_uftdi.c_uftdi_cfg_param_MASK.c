
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; void* bmRequestType; } ;
struct uftdi_softc {int sc_last_lcr; int sc_ucom; int sc_udev; } ;
struct uftdi_param_config {int lcr; int baud_lobits; int baud_hibits; int v_start; int v_flow; int v_stop; } ;
struct ucom_softc {int sc_portno; struct uftdi_softc* sc_parent; } ;
struct termios {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 void* VAR_3 ;
 int FUNC_3 (int ,int *,struct usb_device_request*,int *,int ,int) ;
 scalar_t__ FUNC_4 (struct ucom_softc*,struct termios*,struct uftdi_param_config*) ;

__attribute__((used)) static void
FUNC_5(struct ucom_softc *VAR_4, struct termios *VAR_5)
{
 struct uftdi_softc *VAR_6 = VAR_4->sc_parent;
 uint16_t VAR_7 = VAR_4->sc_portno;
 struct uftdi_param_config VAR_8;
 struct usb_device_request VAR_9;

 FUNC_0("\n");

 if (FUNC_4(VAR_4, VAR_5, &VAR_8)) {

  return;
 }
 VAR_6->sc_last_lcr = VAR_8.lcr;

 VAR_9.bmRequestType = VAR_3;
 VAR_9.bRequest = VAR_0;
 FUNC_1(VAR_9.wValue, VAR_8.baud_lobits);
 FUNC_1(VAR_9.wIndex, VAR_8.baud_hibits | VAR_7);
 FUNC_1(VAR_9.wLength, 0);
 FUNC_3(VAR_6->sc_udev, &VAR_6->sc_ucom,
     &VAR_9, ((void*)0), 0, 1000);

 VAR_9.bmRequestType = VAR_3;
 VAR_9.bRequest = VAR_1;
 FUNC_1(VAR_9.wValue, VAR_8.lcr);
 FUNC_1(VAR_9.wIndex, VAR_7);
 FUNC_1(VAR_9.wLength, 0);
 FUNC_3(VAR_6->sc_udev, &VAR_6->sc_ucom,
     &VAR_9, ((void*)0), 0, 1000);

 VAR_9.bmRequestType = VAR_3;
 VAR_9.bRequest = VAR_2;
 FUNC_2(VAR_9.wValue, VAR_8.v_stop, VAR_8.v_start);
 FUNC_2(VAR_9.wIndex, VAR_8.v_flow, VAR_7);
 FUNC_1(VAR_9.wLength, 0);
 FUNC_3(VAR_6->sc_udev, &VAR_6->sc_ucom,
     &VAR_9, ((void*)0), 0, 1000);
}
