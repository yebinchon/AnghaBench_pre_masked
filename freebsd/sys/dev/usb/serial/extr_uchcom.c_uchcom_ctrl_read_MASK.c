
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uchcom_softc {int sc_ucom; int sc_udev; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,void*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct uchcom_softc *VAR_2, uint8_t VAR_3,
    uint16_t VAR_4, uint16_t VAR_5, void *VAR_6, uint16_t VAR_7)
{
 struct usb_device_request VAR_8;

 VAR_8.bmRequestType = VAR_1;
 VAR_8.bRequest = VAR_3;
 FUNC_1(VAR_8.wValue, VAR_4);
 FUNC_1(VAR_8.wIndex, VAR_5);
 FUNC_1(VAR_8.wLength, VAR_7);

 FUNC_0("RD REQ 0x%02X VAL 0x%04X IDX 0x%04X LEN %d\n",
     VAR_3, VAR_4, VAR_5, VAR_7);
 FUNC_2(VAR_2->sc_udev,
     &VAR_2->sc_ucom, &VAR_8, VAR_6, VAR_0, 1000);
}
