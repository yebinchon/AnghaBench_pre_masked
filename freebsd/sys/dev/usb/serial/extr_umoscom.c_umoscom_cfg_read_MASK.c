
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct umoscom_softc {int sc_ucom; int sc_udev; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct umoscom_softc *VAR_2, uint16_t VAR_3)
{
 struct usb_device_request VAR_4;
 uint8_t VAR_5;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_1(VAR_4.wValue, 0);
 FUNC_1(VAR_4.wIndex, VAR_3);
 FUNC_1(VAR_4.wLength, 1);

 FUNC_2(VAR_2->sc_udev, &VAR_2->sc_ucom,
     &VAR_4, &VAR_5, 0, 1000);

 FUNC_0("reg=0x%04x, val=0x%02x\n", VAR_3, VAR_5);

 return (VAR_5);
}
