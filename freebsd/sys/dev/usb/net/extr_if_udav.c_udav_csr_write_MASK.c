
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct udav_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static int
FUNC_2(struct udav_softc *VAR_2, uint16_t VAR_3, void *VAR_4, int VAR_5)
{
 struct usb_device_request VAR_6;

 VAR_3 &= 0xff;
 VAR_5 &= 0xff;

 VAR_6.bmRequestType = VAR_1;
 VAR_6.bRequest = VAR_0;
 FUNC_0(VAR_6.wValue, 0x0000);
 FUNC_0(VAR_6.wIndex, VAR_3);
 FUNC_0(VAR_6.wLength, VAR_5);

 return (FUNC_1(&VAR_2->sc_ue, &VAR_6, VAR_4, 1000));
}
