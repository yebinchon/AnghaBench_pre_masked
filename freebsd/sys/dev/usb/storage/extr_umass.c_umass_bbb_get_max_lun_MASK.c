
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct umass_softc {char* sc_name; int sc_udev; scalar_t__ sc_iface_no; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,scalar_t__*) ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_4(struct umass_softc *VAR_2)
{
 struct usb_device_request VAR_3;
 usb_error_t VAR_4;
 uint8_t VAR_5 = 0;


 VAR_3.bmRequestType = VAR_1;
 VAR_3.bRequest = VAR_0;
 FUNC_0(VAR_3.wValue, 0);
 VAR_3.wIndex[0] = VAR_2->sc_iface_no;
 VAR_3.wIndex[1] = 0;
 FUNC_0(VAR_3.wLength, 1);

 VAR_4 = FUNC_2(VAR_2->sc_udev, ((void*)0), &VAR_3, &VAR_5);
 if (VAR_4) {
  VAR_5 = 0;


  FUNC_1("%s: Get Max Lun not supported (%s)\n",
      VAR_2->sc_name, FUNC_3(VAR_4));
 }
 return (VAR_5);
}
