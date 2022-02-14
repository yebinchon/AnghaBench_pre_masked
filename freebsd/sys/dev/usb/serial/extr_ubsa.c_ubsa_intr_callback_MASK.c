
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ubsa_softc {int sc_lsr; int sc_ucom; int sc_msr; } ;
typedef int buf ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct ubsa_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_9, usb_error_t VAR_10)
{
 struct ubsa_softc *VAR_11 = FUNC_9(VAR_9);
 struct usb_page_cache *VAR_12;
 uint8_t VAR_13[4];
 int VAR_14;

 FUNC_10(VAR_9, &VAR_14, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_9)) {
 case 128:

  if (VAR_14 >= (int)sizeof(VAR_13)) {
   VAR_12 = FUNC_5(VAR_9, 0);
   FUNC_3(VAR_12, 0, VAR_13, sizeof(VAR_13));





   VAR_11->sc_msr = 0;
   if (VAR_13[3] & VAR_4)
    VAR_11->sc_msr |= VAR_0;
   if (VAR_13[3] & VAR_5)
    VAR_11->sc_msr |= VAR_1;
   if (VAR_13[3] & VAR_7)
    VAR_11->sc_msr |= VAR_3;
   if (VAR_13[3] & VAR_6)
    VAR_11->sc_msr |= VAR_2;
   VAR_11->sc_lsr = VAR_13[2];

   FUNC_0("lsr = 0x%02x, msr = 0x%02x\n",
       VAR_11->sc_lsr, VAR_11->sc_msr);

   FUNC_2(&VAR_11->sc_ucom);
  } else {
   FUNC_0("ignoring short packet, %d bytes\n", VAR_14);
  }

 case 129:
tr_setup:
  FUNC_7(VAR_9, 0, FUNC_6(VAR_9));
  FUNC_4(VAR_9);
  return;

 default:
  if (VAR_10 != VAR_8) {

   FUNC_8(VAR_9);
   goto tr_setup;
  }
  return;

 }
}
