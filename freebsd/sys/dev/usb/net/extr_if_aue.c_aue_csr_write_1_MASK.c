
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; scalar_t__* wValue; int bRequest; int bmRequestType; } ;
struct aue_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,struct usb_device_request*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(struct aue_softc *VAR_2, uint16_t VAR_3, uint8_t VAR_4)
{
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 VAR_5.wValue[0] = VAR_4;
 VAR_5.wValue[1] = 0;
 FUNC_0(VAR_5.wIndex, VAR_3);
 FUNC_0(VAR_5.wLength, 1);

 if (FUNC_1(&VAR_2->sc_ue, &VAR_5, &VAR_4, 1000)) {

 }
}
