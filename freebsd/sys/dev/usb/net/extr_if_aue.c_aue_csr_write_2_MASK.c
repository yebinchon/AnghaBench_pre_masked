
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct aue_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,struct usb_device_request*,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct aue_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_0(VAR_5.wValue, VAR_4);
 FUNC_0(VAR_5.wIndex, VAR_3);
 FUNC_0(VAR_5.wLength, 2);

 VAR_4 = FUNC_1(VAR_4);

 if (FUNC_2(&VAR_2->sc_ue, &VAR_5, &VAR_4, 1000)) {

 }
}
