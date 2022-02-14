
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uByte ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct mos_softc {int sc_ue; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,struct usb_device_request*,int*,int) ;

__attribute__((used)) static int
FUNC_3(struct mos_softc *VAR_2, int VAR_3, int VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;
 uByte VAR_7;
 VAR_7 = VAR_4;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_1(VAR_5.wValue, 0);
 FUNC_1(VAR_5.wIndex, VAR_3);
 FUNC_1(VAR_5.wLength, 1);

 VAR_6 = FUNC_2(&VAR_2->sc_ue, &VAR_5, &VAR_7, 1000);

 if (VAR_6) {
  FUNC_0("mos_reg_write_1 error, reg: %d", VAR_3);
  return (-1);
 }
 return (0);
}
