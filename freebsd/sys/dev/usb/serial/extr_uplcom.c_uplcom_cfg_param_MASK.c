
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device_request {scalar_t__* wLength; scalar_t__* wIndex; scalar_t__* wValue; void* bRequest; void* bmRequestType; } ;
struct usb_cdc_line_state {int bDataBits; int bParityType; int bCharFormat; int dwDTERate; } ;
struct uplcom_softc {scalar_t__ sc_chiptype; int sc_ucom; int sc_udev; scalar_t__ sc_data_iface_no; } ;
struct ucom_softc {struct uplcom_softc* sc_parent; } ;
struct termios {int c_ospeed; int c_cflag; } ;
typedef int ls ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__*,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_4 (struct usb_cdc_line_state*,int ,int) ;
 int FUNC_5 (int ,int *,struct usb_device_request*,struct usb_cdc_line_state*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(struct ucom_softc *VAR_19, struct termios *VAR_20)
{
 struct uplcom_softc *VAR_21 = VAR_19->sc_parent;
 struct usb_cdc_line_state VAR_22;
 struct usb_device_request VAR_23;

 FUNC_0("sc = %p\n", VAR_21);

 FUNC_4(&VAR_22, 0, sizeof(VAR_22));




 if ((VAR_20->c_ospeed & 0x80000000) || FUNC_6(VAR_20->c_ospeed))
  FUNC_2(VAR_22.dwDTERate, VAR_20->c_ospeed);
 else
  VAR_20->c_ospeed = FUNC_7((uint8_t*)&VAR_22.dwDTERate, VAR_20->c_ospeed);

 if (VAR_20->c_cflag & VAR_2) {
  if ((VAR_20->c_cflag & VAR_1) == 131) {




   VAR_22.bCharFormat = VAR_12;
  } else {
   VAR_22.bCharFormat = VAR_13;
  }
 } else {
  VAR_22.bCharFormat = VAR_11;
 }

 if (VAR_20->c_cflag & VAR_3) {
  if (VAR_20->c_cflag & VAR_4) {
   VAR_22.bParityType = VAR_9;
  } else {
   VAR_22.bParityType = VAR_7;
  }
 } else {
  VAR_22.bParityType = VAR_8;
 }

 switch (VAR_20->c_cflag & VAR_1) {
 case 131:
  VAR_22.bDataBits = 5;
  break;
 case 130:
  VAR_22.bDataBits = 6;
  break;
 case 129:
  VAR_22.bDataBits = 7;
  break;
 case 128:
  VAR_22.bDataBits = 8;
  break;
 }

 FUNC_0("rate=0x%08x fmt=%d parity=%d bits=%d\n",
     FUNC_1(VAR_22.dwDTERate), VAR_22.bCharFormat,
     VAR_22.bParityType, VAR_22.bDataBits);

 VAR_23.bmRequestType = VAR_17;
 VAR_23.bRequest = VAR_10;
 FUNC_3(VAR_23.wValue, 0);
 VAR_23.wIndex[0] = VAR_21->sc_data_iface_no;
 VAR_23.wIndex[1] = 0;
 FUNC_3(VAR_23.wLength, VAR_6);

 FUNC_5(VAR_21->sc_udev, &VAR_21->sc_ucom,
     &VAR_23, &VAR_22, 0, 1000);

 if (VAR_20->c_cflag & VAR_0) {

  FUNC_0("crtscts = on\n");

  VAR_23.bmRequestType = VAR_18;
  VAR_23.bRequest = VAR_16;
  FUNC_3(VAR_23.wValue, 0);
  if (VAR_21->sc_chiptype != VAR_5)
   FUNC_3(VAR_23.wIndex, VAR_15);
  else
   FUNC_3(VAR_23.wIndex, VAR_14);
  FUNC_3(VAR_23.wLength, 0);

  FUNC_5(VAR_21->sc_udev, &VAR_21->sc_ucom,
      &VAR_23, ((void*)0), 0, 1000);
 } else {
  VAR_23.bmRequestType = VAR_18;
  VAR_23.bRequest = VAR_16;
  FUNC_3(VAR_23.wValue, 0);
  FUNC_3(VAR_23.wIndex, 0);
  FUNC_3(VAR_23.wLength, 0);
  FUNC_5(VAR_21->sc_udev, &VAR_21->sc_ucom,
      &VAR_23, ((void*)0), 0, 1000);
 }
}
