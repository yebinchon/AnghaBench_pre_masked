
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ufoma_softc {scalar_t__ sc_currentmode; int sc_ucom; int sc_udev; scalar_t__ sc_ctrl_iface_no; int sc_line; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ufoma_softc *VAR_3)
{
 struct usb_device_request VAR_4;


 if (VAR_3->sc_currentmode == VAR_1) {
  return;
 }
 VAR_4.bmRequestType = VAR_2;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, VAR_3->sc_line);
 VAR_4.wIndex[0] = VAR_3->sc_ctrl_iface_no;
 VAR_4.wIndex[1] = 0;
 FUNC_0(VAR_4.wLength, 0);

 FUNC_1(VAR_3->sc_udev, &VAR_3->sc_ucom,
     &VAR_4, ((void*)0), 0, 1000);
}
