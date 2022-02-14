
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; scalar_t__ bRequest; int bmRequestType; } ;
struct cue_softc {int sc_ue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static int
FUNC_2(struct cue_softc *VAR_3, uint8_t VAR_4, uint16_t VAR_5, void *VAR_6, int VAR_7)
{
 struct usb_device_request VAR_8;

 if (VAR_4 == VAR_0)
  VAR_8.bmRequestType = VAR_1;
 else
  VAR_8.bmRequestType = VAR_2;
 VAR_8.bRequest = VAR_4;
 FUNC_0(VAR_8.wValue, 0);
 FUNC_0(VAR_8.wIndex, VAR_5);
 FUNC_0(VAR_8.wLength, VAR_7);

 return (FUNC_1(&VAR_3->sc_ue, &VAR_8, VAR_6, 1000));
}
