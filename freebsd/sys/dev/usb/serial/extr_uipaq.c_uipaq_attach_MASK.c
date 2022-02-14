
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_attach_arg {int device; } ;
struct uipaq_softc {int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_udev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int VAR_8 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct uipaq_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int,struct uipaq_softc*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int *,struct usb_device_request*,int *,int ,int *,int) ;
 int FUNC_13 (int ,int*,int *,int ,int ,struct uipaq_softc*,int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_12)
{
 struct usb_device_request VAR_13;
 struct usb_attach_arg *VAR_14 = FUNC_1(VAR_12);
 struct uipaq_softc *VAR_15 = FUNC_2(VAR_12);
 int VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;

 VAR_15->sc_udev = VAR_14->device;

 FUNC_3(VAR_12);
 FUNC_4(&VAR_15->sc_mtx, "uipaq", ((void*)0), VAR_1);
 FUNC_8(&VAR_15->sc_super_ucom);






 VAR_13.bmRequestType = VAR_8;
 VAR_13.bRequest = VAR_3;
 FUNC_0(VAR_13.wValue, VAR_2);
 FUNC_0(VAR_13.wIndex, 0x0);
 FUNC_0(VAR_13.wLength, 0);
 for (VAR_18 = 0; VAR_18 != 64; VAR_18++) {
  VAR_16 =
      FUNC_12(VAR_14->device, ((void*)0), &VAR_13,
      ((void*)0), 0, ((void*)0), 100);
  if (VAR_16 == 0)
   break;
  FUNC_11(((void*)0), VAR_9 / 10);
 }

 VAR_17 = VAR_6;
 VAR_16 = FUNC_13(VAR_14->device, &VAR_17,
     VAR_15->sc_xfer, VAR_11,
     VAR_7, VAR_15, &VAR_15->sc_mtx);

 if (VAR_16) {
  goto detach;
 }

 FUNC_5(&VAR_15->sc_mtx);
 FUNC_14(VAR_15->sc_xfer[VAR_5]);
 FUNC_14(VAR_15->sc_xfer[VAR_4]);
 FUNC_6(&VAR_15->sc_mtx);

 VAR_16 = FUNC_7(&VAR_15->sc_super_ucom, &VAR_15->sc_ucom, 1, VAR_15,
     &VAR_10, &VAR_15->sc_mtx);
 if (VAR_16) {
  goto detach;
 }
 FUNC_9(&VAR_15->sc_super_ucom, VAR_12);

 return (0);

detach:
 FUNC_10(VAR_12);
 return (VAR_0);
}
