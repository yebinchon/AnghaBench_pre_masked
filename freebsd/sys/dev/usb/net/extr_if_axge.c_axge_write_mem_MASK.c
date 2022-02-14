
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct axge_softc {int sc_ue; } ;


 int FUNC_0 (struct axge_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static void
FUNC_3(struct axge_softc *VAR_2, uint8_t VAR_3, uint16_t VAR_4,
    uint16_t VAR_5, void *VAR_6, int VAR_7)
{
 struct usb_device_request VAR_8;

 FUNC_0(VAR_2, VAR_0);

 VAR_8.bmRequestType = VAR_1;
 VAR_8.bRequest = VAR_3;
 FUNC_1(VAR_8.wValue, VAR_5);
 FUNC_1(VAR_8.wIndex, VAR_4);
 FUNC_1(VAR_8.wLength, VAR_7);

 if (FUNC_2(&VAR_2->sc_ue, &VAR_8, VAR_6, 1000)) {

 }
}
