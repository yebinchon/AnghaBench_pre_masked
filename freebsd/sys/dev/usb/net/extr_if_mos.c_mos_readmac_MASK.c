
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int u_char ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct mos_softc {int sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,struct usb_device_request*,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct mos_softc *VAR_4, u_char *VAR_5)
{
 struct usb_device_request VAR_6;
 usb_error_t VAR_7;

 VAR_6.bmRequestType = VAR_3;
 VAR_6.bRequest = VAR_2;
 FUNC_0(VAR_6.wValue, 0);
 FUNC_0(VAR_6.wIndex, VAR_1);
 FUNC_0(VAR_6.wLength, VAR_0);

 VAR_7 = FUNC_1(&VAR_4->sc_ue, &VAR_6, VAR_5, 1000);

 if (VAR_7) {
  return (-1);
 }
 return (0);
}
