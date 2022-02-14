
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct urtw_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct urtw_softc*,struct usb_device_request*,int*) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_2, uint8_t VAR_3, int VAR_4,
    uint16_t *VAR_5)
{
 uint8_t VAR_6[2];
 uint16_t VAR_7;
 struct usb_device_request VAR_8;
 usb_error_t VAR_9 = 0;

 VAR_7 = *VAR_5;

 VAR_8.bmRequestType = VAR_1;
 VAR_8.bRequest = VAR_0;
 FUNC_0(VAR_8.wValue, VAR_3);
 FUNC_0(VAR_8.wIndex, VAR_4);
 FUNC_0(VAR_8.wLength, sizeof(uint16_t));
 VAR_6[0] = (VAR_7 & 0x00ff);
 VAR_6[1] = (VAR_7 & 0xff00) >> 8;

 VAR_9 = FUNC_1(VAR_2, &VAR_8, VAR_6);

 return (VAR_9);
}
