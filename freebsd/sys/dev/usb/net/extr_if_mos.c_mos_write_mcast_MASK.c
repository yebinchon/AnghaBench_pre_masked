
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int u_char ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct mos_softc {int sc_ue; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,struct usb_device_request*,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct mos_softc *VAR_3, u_char *VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;

 VAR_5.bmRequestType = VAR_2;
 VAR_5.bRequest = VAR_1;
 FUNC_1(VAR_5.wValue, 0);
 FUNC_1(VAR_5.wIndex, VAR_0);
 FUNC_1(VAR_5.wLength, 8);

 VAR_6 = FUNC_2(&VAR_3->sc_ue, &VAR_5, VAR_4, 1000);

 if (VAR_6) {
  FUNC_0("mos_reg_mcast error");
  return (-1);
 }
 return (0);
}
