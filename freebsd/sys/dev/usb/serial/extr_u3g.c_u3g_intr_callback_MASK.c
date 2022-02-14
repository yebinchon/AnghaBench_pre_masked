
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_cdc_notification {int* data; int bNotification; int bmRequestType; int wLength; } ;
struct ucom_softc {size_t sc_subunit; struct u3g_softc* sc_parent; } ;
struct u3g_softc {int * sc_msr; int * sc_lsr; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (struct ucom_softc*) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_cdc_notification*,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct ucom_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_9, usb_error_t VAR_10)
{
 struct ucom_softc *VAR_11 = FUNC_10(VAR_9);
 struct u3g_softc *VAR_12 = VAR_11->sc_parent;
 struct usb_page_cache *VAR_13;
 struct usb_cdc_notification VAR_14;
 int VAR_15;
 uint16_t VAR_16;
 uint8_t VAR_17;

 FUNC_11(VAR_9, &VAR_15, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_9)) {
 case 128:
  if (VAR_15 < 8) {
   FUNC_0("message too short (expected 8, received %d)\n", VAR_15);
   goto tr_setup;
  }
  VAR_13 = FUNC_6(VAR_9, 0);
  FUNC_4(VAR_13, 0, &VAR_14, VAR_15);

  VAR_16 = FUNC_1(VAR_14.wLength);
  if (VAR_16 < 2) {
   FUNC_0("message too short (expected 2 data bytes, received %d)\n", VAR_16);
   goto tr_setup;
  }

  if (VAR_14.bmRequestType == VAR_3
      && VAR_14.bNotification == VAR_7) {




   FUNC_0("notify bytes = 0x%02x, 0x%02x\n",
       VAR_14.data[0], VAR_14.data[1]);


   VAR_12->sc_lsr[VAR_11->sc_subunit] = 0;
   VAR_12->sc_msr[VAR_11->sc_subunit] = 0;

   VAR_17 = VAR_14.data[0];

   if (VAR_17 & VAR_6)
    VAR_12->sc_msr[VAR_11->sc_subunit] |= VAR_2;
   if (VAR_17 & VAR_5)
    VAR_12->sc_msr[VAR_11->sc_subunit] |= VAR_1;
   if (VAR_17 & VAR_4)
    VAR_12->sc_msr[VAR_11->sc_subunit] |= VAR_0;
   FUNC_3(VAR_11);
  }

 case 129:
tr_setup:
  FUNC_8(VAR_9, 0, FUNC_7(VAR_9));
  FUNC_5(VAR_9);
  return;

 default:
  if (VAR_10 != VAR_8) {

   FUNC_9(VAR_9);
   goto tr_setup;
  }
  return;
 }
}
