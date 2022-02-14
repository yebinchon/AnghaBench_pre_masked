
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ufm_softc {int sc_udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,struct usb_device_request*,int *) ;

__attribute__((used)) static int
FUNC_2(struct ufm_softc *VAR_2, uint8_t VAR_3,
    uint16_t VAR_4, uint16_t VAR_5, uint8_t *VAR_6)
{
 int VAR_7;

 struct usb_device_request VAR_8;
 uint8_t VAR_9[1];

 VAR_8.bmRequestType = VAR_1;
 VAR_8.bRequest = VAR_3;
 FUNC_0(VAR_8.wValue, VAR_4);
 FUNC_0(VAR_8.wIndex, VAR_5);
 FUNC_0(VAR_8.wLength, 1);

 VAR_7 = FUNC_1(VAR_2->sc_udev, ((void*)0), &VAR_8, VAR_9);

 if (VAR_6) {
  *VAR_6 = VAR_9[0];
 }
 if (VAR_7) {
  return (VAR_0);
 }
 return (0);
}
