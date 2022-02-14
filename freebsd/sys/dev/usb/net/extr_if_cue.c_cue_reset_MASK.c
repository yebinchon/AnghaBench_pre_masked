
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct cue_softc {int sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,struct usb_device_request*,int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(struct cue_softc *VAR_3)
{
 struct usb_device_request VAR_4;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, 0);
 FUNC_0(VAR_4.wIndex, 0);
 FUNC_0(VAR_4.wLength, 0);

 if (FUNC_1(&VAR_3->sc_ue, &VAR_4, ((void*)0), 1000)) {

 }




 FUNC_2(&VAR_3->sc_ue, VAR_2 / 100);
}
