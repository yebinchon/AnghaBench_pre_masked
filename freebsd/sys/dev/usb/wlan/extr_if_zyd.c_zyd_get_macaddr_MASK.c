
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct TYPE_2__ {int ic_macaddr; } ;
struct zyd_softc {int sc_dev; TYPE_1__ sc_ic; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct zyd_softc*,struct usb_device_request*,int ) ;

__attribute__((used)) static int
FUNC_4(struct zyd_softc *VAR_4)
{
 struct usb_device_request VAR_5;
 usb_error_t VAR_6;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_3;
 FUNC_0(VAR_5.wValue, VAR_2);
 FUNC_0(VAR_5.wIndex, 0);
 FUNC_0(VAR_5.wLength, VAR_0);

 VAR_6 = FUNC_3(VAR_4, &VAR_5, VAR_4->sc_ic.ic_macaddr);
 if (VAR_6 != 0) {
  FUNC_1(VAR_4->sc_dev, "could not read EEPROM: %s\n",
      FUNC_2(VAR_6));
 }

 return (VAR_6);
}
