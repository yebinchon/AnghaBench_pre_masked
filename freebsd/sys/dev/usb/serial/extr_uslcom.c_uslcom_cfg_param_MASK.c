
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct uslcom_softc {int sc_iface_no; int sc_ucom; int sc_udev; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; void* bmRequestType; } ;
struct ucom_softc {struct uslcom_softc* sc_parent; } ;
struct termios {int c_cflag; scalar_t__ c_ospeed; } ;
typedef int flowctrl ;
typedef int baudrate ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int *,struct usb_device_request*,scalar_t__*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct ucom_softc *VAR_18, struct termios *VAR_19)
{
 struct uslcom_softc *VAR_20 = VAR_18->sc_parent;
 struct usb_device_request VAR_21;
 uint32_t VAR_22, VAR_23[4];
 uint16_t VAR_24;

 FUNC_0("\n");

 VAR_22 = VAR_19->c_ospeed;
 VAR_21.bmRequestType = VAR_17;
 VAR_21.bRequest = VAR_12;
 FUNC_1(VAR_21.wValue, 0);
 FUNC_1(VAR_21.wIndex, VAR_20->sc_iface_no);
 FUNC_1(VAR_21.wLength, sizeof(VAR_22));

 if (FUNC_5(VAR_20->sc_udev, &VAR_20->sc_ucom,
     &VAR_21, &VAR_22, 0, 1000)) {
  FUNC_4("Set baudrate failed (ignored)\n");
 }

 if (VAR_19->c_cflag & VAR_2)
  VAR_24 = VAR_16;
 else
  VAR_24 = VAR_15;
 if (VAR_19->c_cflag & VAR_3) {
  if (VAR_19->c_cflag & VAR_4)
   VAR_24 |= VAR_11;
  else
   VAR_24 |= VAR_9;
 } else
  VAR_24 |= VAR_10;
 switch (VAR_19->c_cflag & VAR_1) {
 case 131:
  VAR_24 |= FUNC_2(5);
  break;
 case 130:
  VAR_24 |= FUNC_2(6);
  break;
 case 129:
  VAR_24 |= FUNC_2(7);
  break;
 case 128:
  VAR_24 |= FUNC_2(8);
  break;
 }

 VAR_21.bmRequestType = VAR_17;
 VAR_21.bRequest = VAR_14;
 FUNC_1(VAR_21.wValue, VAR_24);
 FUNC_1(VAR_21.wIndex, VAR_20->sc_iface_no);
 FUNC_1(VAR_21.wLength, 0);

 if (FUNC_5(VAR_20->sc_udev, &VAR_20->sc_ucom,
     &VAR_21, ((void*)0), 0, 1000)) {
  FUNC_0("Set format failed (ignored)\n");
 }

 if (VAR_19->c_cflag & VAR_0) {
  VAR_23[0] = FUNC_3(VAR_6 | VAR_5);
  VAR_23[1] = FUNC_3(VAR_7);
 } else {
  VAR_23[0] = FUNC_3(VAR_6);
  VAR_23[1] = FUNC_3(VAR_8);
 }
 VAR_23[2] = 0;
 VAR_23[3] = 0;
 VAR_21.bmRequestType = VAR_17;
 VAR_21.bRequest = VAR_13;
 FUNC_1(VAR_21.wValue, 0);
 FUNC_1(VAR_21.wIndex, VAR_20->sc_iface_no);
 FUNC_1(VAR_21.wLength, sizeof(VAR_23));

 if (FUNC_5(VAR_20->sc_udev, &VAR_20->sc_ucom,
     &VAR_21, VAR_23, 0, 1000)) {
  FUNC_0("Set flowcontrol failed (ignored)\n");
 }
}
