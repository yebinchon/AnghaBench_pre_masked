
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct aue_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,struct usb_device_request*,int*,int) ;

__attribute__((used)) static uint16_t
FUNC_3(struct aue_softc *VAR_2, uint16_t VAR_3)
{
 struct usb_device_request VAR_4;
 usb_error_t VAR_5;
 uint16_t VAR_6;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, 0);
 FUNC_0(VAR_4.wIndex, VAR_3);
 FUNC_0(VAR_4.wLength, 2);

 VAR_5 = FUNC_2(&VAR_2->sc_ue, &VAR_4, &VAR_6, 1000);
 if (VAR_5)
  return (0);
 return (FUNC_1(VAR_6));
}
