
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct usb_device_request {scalar_t__* wLength; scalar_t__* wIndex; scalar_t__* wValue; int bRequest; int bmRequestType; } ;
struct ipheth_softc {scalar_t__* sc_data; int sc_carrier_on; scalar_t__ sc_iface_no; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_ether*,struct usb_device_request*,scalar_t__*,int ) ;
 struct ipheth_softc* FUNC_1 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_2(struct usb_ether *VAR_5)
{
 struct ipheth_softc *VAR_6 = FUNC_1(VAR_5);
 struct usb_device_request VAR_7;
 int VAR_8;

 VAR_7.bmRequestType = VAR_4;
 VAR_7.bRequest = VAR_1;
 VAR_7.wValue[0] = 0;
 VAR_7.wValue[1] = 0;
 VAR_7.wIndex[0] = VAR_6->sc_iface_no;
 VAR_7.wIndex[1] = 0;
 VAR_7.wLength[0] = VAR_2;
 VAR_7.wLength[1] = 0;

 VAR_8 = FUNC_0(VAR_5, &VAR_7, VAR_6->sc_data, VAR_3);

 if (VAR_8)
  return;

 VAR_6->sc_carrier_on =
     (VAR_6->sc_data[0] == VAR_0);
}
