
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_request {scalar_t__* wLength; scalar_t__* wIndex; scalar_t__* wValue; int bRequest; int bmRequestType; } ;
struct TYPE_2__ {int ue_eaddr; int ue_udev; } ;
struct ipheth_softc {int sc_data; TYPE_1__ sc_ue; scalar_t__ sc_iface_no; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int *,struct usb_device_request*,int ) ;

__attribute__((used)) static int
FUNC_2(struct ipheth_softc *VAR_3)
{
 struct usb_device_request VAR_4;
 int VAR_5;

 VAR_4.bmRequestType = VAR_2;
 VAR_4.bRequest = VAR_1;
 VAR_4.wValue[0] = 0;
 VAR_4.wValue[1] = 0;
 VAR_4.wIndex[0] = VAR_3->sc_iface_no;
 VAR_4.wIndex[1] = 0;
 VAR_4.wLength[0] = VAR_0;
 VAR_4.wLength[1] = 0;

 VAR_5 = FUNC_1(VAR_3->sc_ue.ue_udev, ((void*)0), &VAR_4, VAR_3->sc_data);

 if (VAR_5)
  return (VAR_5);

 FUNC_0(VAR_3->sc_ue.ue_eaddr, VAR_3->sc_data, VAR_0);

 return (0);
}
