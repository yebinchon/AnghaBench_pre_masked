
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct cue_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct usb_device_request*,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct cue_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_1;
 VAR_5.bRequest = VAR_0;
 FUNC_0(VAR_5.wValue, VAR_4);
 FUNC_0(VAR_5.wIndex, VAR_3);
 FUNC_0(VAR_5.wLength, 0);

 return (FUNC_1(&VAR_2->sc_ue, &VAR_5, ((void*)0), 1000));
}
