
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_cdc_notification {int* data; int bNotification; int bmRequestType; int wValue; int wLength; } ;
struct ufoma_softc {int sc_currentmode; int sc_num_msg; int sc_ucom; int sc_msr; int sc_lsr; int sc_nobulk; int * sc_ctrl_xfer; int sc_cv; } ;
typedef int pkt ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 size_t VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct usb_xfer*) ;


 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_page_cache*,int ,struct usb_cdc_notification*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_8 (struct usb_xfer*,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int ,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct ufoma_softc* FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_14(struct usb_xfer *VAR_11, usb_error_t VAR_12)
{
 struct ufoma_softc *VAR_13 = FUNC_12(VAR_11);
 struct usb_cdc_notification VAR_14;
 struct usb_page_cache *VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 uint8_t VAR_18;
 int VAR_19;

 FUNC_13(VAR_11, &VAR_19, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_11)) {
 case 128:
  if (VAR_19 < 8) {
   FUNC_0("too short message\n");
   goto tr_setup;
  }
  if (VAR_19 > (int)sizeof(VAR_14)) {
   FUNC_0("truncating message\n");
   VAR_19 = sizeof(VAR_14);
  }
  VAR_15 = FUNC_8(VAR_11, 0);
  FUNC_5(VAR_15, 0, &VAR_14, VAR_19);

  VAR_19 -= 8;

  VAR_16 = FUNC_1(VAR_14.wLength);
  if (VAR_19 > VAR_16) {
   VAR_19 = VAR_16;
  }
  if ((VAR_14.bmRequestType == VAR_10) &&
      (VAR_14.bNotification == VAR_8)) {
   VAR_17 = FUNC_1(VAR_14.wValue);
   VAR_13->sc_currentmode = (VAR_17 >> 8);
   if (!(VAR_17 & 0xff)) {
    FUNC_0("Mode change failed!\n");
   }
   FUNC_3(&VAR_13->sc_cv);
  }
  if (VAR_14.bmRequestType != VAR_3) {
   goto tr_setup;
  }
  switch (VAR_14.bNotification) {
  case 131:
   if (!(VAR_13->sc_nobulk)) {
    FUNC_0("Wrong serial state!\n");
    break;
   }
   if (VAR_13->sc_num_msg != 0xFF) {
    VAR_13->sc_num_msg++;
   }
   FUNC_6(VAR_13->sc_ctrl_xfer[VAR_7]);
   break;

  case 130:
   if (VAR_13->sc_nobulk) {
    FUNC_0("Wrong serial state!\n");
    break;
   }




   if (VAR_19 < 2) {
    FUNC_0("invalid notification "
        "length, %d bytes!\n", VAR_19);
    break;
   }
   FUNC_0("notify bytes = 0x%02x, 0x%02x\n",
       VAR_14.data[0], VAR_14.data[1]);


   VAR_13->sc_lsr = 0;
   VAR_13->sc_msr = 0;

   VAR_18 = VAR_14.data[0];

   if (VAR_18 & VAR_6) {
    VAR_13->sc_msr |= VAR_2;
   }
   if (VAR_18 & VAR_5) {
    VAR_13->sc_msr |= VAR_1;
   }
   if (VAR_18 & VAR_4) {
    VAR_13->sc_msr |= VAR_0;
   }
   FUNC_4(&VAR_13->sc_ucom);
   break;

  default:
   break;
  }

 case 129:
tr_setup:
  FUNC_10(VAR_11, 0, FUNC_9(VAR_11));
  FUNC_7(VAR_11);
  return;

 default:
  if (VAR_12 != VAR_9) {

   FUNC_11(VAR_11);
   goto tr_setup;
  }
  return;
 }
}
