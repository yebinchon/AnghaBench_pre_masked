
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct uvscom_softc {int sc_unit_status; int sc_ucom; int sc_msr; int sc_lsr; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_xfer*) ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_3 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_4 (struct usb_xfer*,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct uvscom_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_11, usb_error_t VAR_12)
{
 struct uvscom_softc *VAR_13 = FUNC_8(VAR_11);
 struct usb_page_cache *VAR_14;
 uint8_t VAR_15[2];
 int VAR_16;

 FUNC_9(VAR_11, &VAR_16, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_0(VAR_11)) {
 case 128:
  if (VAR_16 >= 2) {

   VAR_14 = FUNC_4(VAR_11, 0);
   FUNC_2(VAR_14, 0, VAR_15, sizeof(VAR_15));

   VAR_13->sc_lsr = 0;
   VAR_13->sc_msr = 0;
   VAR_13->sc_unit_status = VAR_15[1];

   if (VAR_15[0] & VAR_10) {
    VAR_13->sc_lsr |= VAR_4;
   }
   if (VAR_15[0] & VAR_9) {
    VAR_13->sc_lsr |= VAR_3;
   }
   if (VAR_15[1] & VAR_6) {
    VAR_13->sc_msr |= VAR_0;
   }
   if (VAR_15[1] & VAR_8) {
    VAR_13->sc_msr |= VAR_2;
   }
   if (VAR_15[1] & VAR_7) {
    VAR_13->sc_msr |= VAR_1;
   }




   FUNC_1(&VAR_13->sc_ucom);
  }
 case 129:
tr_setup:
  FUNC_6(VAR_11, 0, FUNC_5(VAR_11));
  FUNC_3(VAR_11);
  return;

 default:
  if (VAR_12 != VAR_5) {

   FUNC_7(VAR_11);
   goto tr_setup;
  }
  return;
 }
}
