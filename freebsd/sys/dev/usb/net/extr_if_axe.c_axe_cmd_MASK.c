
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct axe_softc {int sc_ue; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct axe_softc*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,struct usb_device_request*,void*,int) ;

__attribute__((used)) static int
FUNC_6(struct axe_softc *VAR_3, int VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 struct usb_device_request VAR_8;
 usb_error_t VAR_9;

 FUNC_3(VAR_3, VAR_0);

 VAR_8.bmRequestType = (FUNC_1(VAR_4) ?
     VAR_2 :
     VAR_1);
 VAR_8.bRequest = FUNC_0(VAR_4);
 FUNC_4(VAR_8.wValue, VAR_6);
 FUNC_4(VAR_8.wIndex, VAR_5);
 FUNC_4(VAR_8.wLength, FUNC_2(VAR_4));

 VAR_9 = FUNC_5(&VAR_3->sc_ue, &VAR_8, VAR_7, 1000);

 return (VAR_9);
}
