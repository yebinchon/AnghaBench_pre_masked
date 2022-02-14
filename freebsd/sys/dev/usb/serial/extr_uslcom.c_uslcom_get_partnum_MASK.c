
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uslcom_softc {int sc_iface_no; int sc_udev; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef int partnum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,scalar_t__*,int ,int *,int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct uslcom_softc *VAR_3)
{
 struct usb_device_request VAR_4;
 uint8_t VAR_5;


 VAR_5 = 0;
 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_2;
 FUNC_1(VAR_4.wValue, VAR_0);
 FUNC_1(VAR_4.wIndex, VAR_3->sc_iface_no);
 FUNC_1(VAR_4.wLength, sizeof(VAR_5));

 if (FUNC_2(VAR_3->sc_udev, ((void*)0),
     &VAR_4, &VAR_5, 0, ((void*)0), 1000)) {
  FUNC_0("GET_PARTNUM failed\n");
 }

 return(VAR_5);
}
