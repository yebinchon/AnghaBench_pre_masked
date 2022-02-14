
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct mos_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,struct usb_device_request*,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct mos_softc *VAR_4, uint8_t *VAR_5)
{
 struct usb_device_request VAR_6;
 usb_error_t VAR_7;

 VAR_6.bmRequestType = VAR_3;
 VAR_6.bRequest = VAR_2;
 FUNC_1(VAR_6.wValue, 0);
 FUNC_1(VAR_6.wIndex, VAR_1);
 FUNC_1(VAR_6.wLength, VAR_0);

 VAR_7 = FUNC_2(&VAR_4->sc_ue, &VAR_6, VAR_5, 1000);

 if (VAR_7) {
  FUNC_0("mos_writemac error");
  return (-1);
 }
 return (0);
}
