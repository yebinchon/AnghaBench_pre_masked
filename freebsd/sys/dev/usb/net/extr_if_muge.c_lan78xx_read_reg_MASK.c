
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint32_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct muge_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct muge_softc*,char*,int) ;
 scalar_t__ FUNC_4 (int *,struct usb_device_request*,int*,int) ;

__attribute__((used)) static int
FUNC_5(struct muge_softc *VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 struct usb_device_request VAR_6;
 uint32_t VAR_7;
 usb_error_t VAR_8;

 FUNC_0(VAR_3, VAR_0);

 VAR_6.bmRequestType = VAR_1;
 VAR_6.bRequest = VAR_2;
 FUNC_1(VAR_6.wValue, 0);
 FUNC_1(VAR_6.wIndex, VAR_4);
 FUNC_1(VAR_6.wLength, 4);

 VAR_8 = FUNC_4(&VAR_3->sc_ue, &VAR_6, &VAR_7, 1000);
 if (VAR_8 != 0)
  FUNC_3(VAR_3, "Failed to read register 0x%0x\n", VAR_4);
 *VAR_5 = FUNC_2(VAR_7);
 return (VAR_8);
}
