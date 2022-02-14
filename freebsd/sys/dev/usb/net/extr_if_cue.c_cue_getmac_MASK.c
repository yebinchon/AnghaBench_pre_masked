
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct cue_softc {int sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static int
FUNC_2(struct cue_softc *VAR_3, void *VAR_4)
{
 struct usb_device_request VAR_5;

 VAR_5.bmRequestType = VAR_2;
 VAR_5.bRequest = VAR_0;
 FUNC_0(VAR_5.wValue, 0);
 FUNC_0(VAR_5.wIndex, 0);
 FUNC_0(VAR_5.wLength, VAR_1);

 return (FUNC_1(&VAR_3->sc_ue, &VAR_5, VAR_4, 1000));
}
