
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct urtw_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct urtw_softc*) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct urtw_softc*,struct usb_device_request*,int *) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_2, int VAR_3, uint8_t *VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;

 FUNC_0(VAR_2);

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_1(VAR_5.wValue, (VAR_3 & 0xff) | 0xff00);
 FUNC_1(VAR_5.wIndex, (VAR_3 >> 8) & 0x3);
 FUNC_1(VAR_5.wLength, sizeof(uint8_t));

 VAR_6 = FUNC_2(VAR_2, &VAR_5, VAR_4);
 return (VAR_6);
}
