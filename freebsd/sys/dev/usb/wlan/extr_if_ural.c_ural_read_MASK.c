
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ural_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ural_softc*,struct usb_device_request*,int*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static uint16_t
FUNC_5(struct ural_softc *VAR_2, uint16_t VAR_3)
{
 struct usb_device_request VAR_4;
 usb_error_t VAR_5;
 uint16_t VAR_6;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, 0);
 FUNC_0(VAR_4.wIndex, VAR_3);
 FUNC_0(VAR_4.wLength, sizeof (uint16_t));

 VAR_5 = FUNC_3(VAR_2, &VAR_4, &VAR_6);
 if (VAR_5 != 0) {
  FUNC_1(VAR_2->sc_dev, "could not read MAC register: %s\n",
      FUNC_4(VAR_5));
  return 0;
 }

 return FUNC_2(VAR_6);
}
