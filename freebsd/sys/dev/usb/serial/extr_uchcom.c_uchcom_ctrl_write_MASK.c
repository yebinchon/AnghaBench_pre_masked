
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uchcom_softc {int sc_ucom; int sc_udev; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct uchcom_softc *VAR_1, uint8_t VAR_2,
    uint16_t VAR_3, uint16_t VAR_4)
{
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_0;
 VAR_5.bRequest = VAR_2;
 FUNC_1(VAR_5.wValue, VAR_3);
 FUNC_1(VAR_5.wIndex, VAR_4);
 FUNC_1(VAR_5.wLength, 0);

 FUNC_0("WR REQ 0x%02X VAL 0x%04X IDX 0x%04X\n",
     VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1->sc_udev,
     &VAR_1->sc_ucom, &VAR_5, ((void*)0), 0, 1000);
}
