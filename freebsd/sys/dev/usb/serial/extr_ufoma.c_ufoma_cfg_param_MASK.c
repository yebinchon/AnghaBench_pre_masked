
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_cdc_line_state {int bDataBits; int bParityType; int bCharFormat; int dwDTERate; } ;
struct ufoma_softc {scalar_t__ sc_currentmode; int sc_ucom; int sc_udev; scalar_t__ sc_ctrl_iface_no; scalar_t__ sc_nobulk; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;
struct termios {int c_cflag; int c_ospeed; } ;
typedef int ls ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct usb_cdc_line_state*,int ,int) ;
 int FUNC_4 (int ,int *,struct usb_device_request*,struct usb_cdc_line_state*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct ucom_softc *VAR_13, struct termios *VAR_14)
{
 struct ufoma_softc *VAR_15 = VAR_13->sc_parent;
 struct usb_device_request VAR_16;
 struct usb_cdc_line_state VAR_17;

 if (VAR_15->sc_nobulk ||
     (VAR_15->sc_currentmode == VAR_11)) {
  return;
 }
 FUNC_0("\n");

 FUNC_3(&VAR_17, 0, sizeof(VAR_17));

 FUNC_1(VAR_17.dwDTERate, VAR_14->c_ospeed);

 if (VAR_14->c_cflag & VAR_1) {
  VAR_17.bCharFormat = VAR_10;
 } else {
  VAR_17.bCharFormat = VAR_9;
 }

 if (VAR_14->c_cflag & VAR_2) {
  if (VAR_14->c_cflag & VAR_3) {
   VAR_17.bParityType = VAR_7;
  } else {
   VAR_17.bParityType = VAR_5;
  }
 } else {
  VAR_17.bParityType = VAR_6;
 }

 switch (VAR_14->c_cflag & VAR_0) {
 case 131:
  VAR_17.bDataBits = 5;
  break;
 case 130:
  VAR_17.bDataBits = 6;
  break;
 case 129:
  VAR_17.bDataBits = 7;
  break;
 case 128:
  VAR_17.bDataBits = 8;
  break;
 }

 VAR_16.bmRequestType = VAR_12;
 VAR_16.bRequest = VAR_8;
 FUNC_2(VAR_16.wValue, 0);
 VAR_16.wIndex[0] = VAR_15->sc_ctrl_iface_no;
 VAR_16.wIndex[1] = 0;
 FUNC_2(VAR_16.wLength, VAR_4);

 FUNC_4(VAR_15->sc_udev, &VAR_15->sc_ucom,
     &VAR_16, &VAR_17, 0, 1000);
}
