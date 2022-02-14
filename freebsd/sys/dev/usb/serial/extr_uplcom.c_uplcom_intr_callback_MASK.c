
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uplcom_softc {int sc_ucom; int sc_msr; int sc_lsr; } ;
typedef int buf ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct uplcom_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_18, usb_error_t VAR_19)
{
 struct uplcom_softc *VAR_20 = FUNC_9(VAR_18);
 struct usb_page_cache *VAR_21;
 uint8_t VAR_22[9];
 int VAR_23;

 FUNC_10(VAR_18, &VAR_23, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_18)) {
 case 128:

  FUNC_0("actlen = %u\n", VAR_23);

  if (VAR_23 >= 9) {

   VAR_21 = FUNC_5(VAR_18, 0);
   FUNC_3(VAR_21, 0, VAR_22, sizeof(VAR_22));

   FUNC_0("status = 0x%02x\n", VAR_22[VAR_16]);

   VAR_20->sc_lsr = 0;
   VAR_20->sc_msr = 0;

   if (VAR_22[VAR_16] & VAR_1) {
    VAR_20->sc_msr |= VAR_8;
   }
   if (VAR_22[VAR_16] & VAR_5) {
    VAR_20->sc_lsr |= VAR_14;
   }
   if (VAR_22[VAR_16] & VAR_6) {
    VAR_20->sc_lsr |= VAR_15;
   }
   if (VAR_22[VAR_16] & VAR_4) {
    VAR_20->sc_lsr |= VAR_13;
   }
   if (VAR_22[VAR_16] & VAR_7) {
    VAR_20->sc_msr |= VAR_11;
   }
   if (VAR_22[VAR_16] & VAR_0) {
    VAR_20->sc_lsr |= VAR_12;
   }
   if (VAR_22[VAR_16] & VAR_3) {
    VAR_20->sc_msr |= VAR_10;
   }
   if (VAR_22[VAR_16] & VAR_2) {
    VAR_20->sc_msr |= VAR_9;
   }
   FUNC_2(&VAR_20->sc_ucom);
  }
 case 129:
tr_setup:
  FUNC_7(VAR_18, 0, FUNC_6(VAR_18));
  FUNC_4(VAR_18);
  return;

 default:
  if (VAR_19 != VAR_17) {

   FUNC_8(VAR_18);
   goto tr_setup;
  }
  return;
 }
}
