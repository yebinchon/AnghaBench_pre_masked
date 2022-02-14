
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ural_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct ural_softc*,struct usb_device_request*,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct ural_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_0(VAR_5.wValue, VAR_4);
 FUNC_0(VAR_5.wIndex, VAR_3);
 FUNC_0(VAR_5.wLength, 0);

 VAR_6 = FUNC_2(VAR_2, &VAR_5, ((void*)0));
 if (VAR_6 != 0) {
  FUNC_1(VAR_2->sc_dev, "could not write MAC register: %s\n",
      FUNC_3(VAR_6));
 }
}
