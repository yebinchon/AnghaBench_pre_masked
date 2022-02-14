
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct ifnet {int dummy; } ;
struct aue_softc {int sc_flags; struct usb_ether sc_ue; } ;
struct aue_rxpkt {int aue_rxstat; } ;
typedef int stat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (struct ifnet*,int ,int) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct usb_ether*,struct usb_page_cache*,int ,int) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_page_cache*,int,struct aue_rxpkt*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int ,int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct aue_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct aue_softc *VAR_7 = FUNC_14(VAR_5);
 struct usb_ether *VAR_8 = &VAR_7->sc_ue;
 struct ifnet *VAR_9 = FUNC_4(VAR_8);
 struct aue_rxpkt VAR_10;
 struct usb_page_cache *VAR_11;
 int VAR_12;

 FUNC_15(VAR_5, &VAR_12, ((void*)0), ((void*)0), ((void*)0));
 VAR_11 = FUNC_10(VAR_5, 0);

 switch (FUNC_2(VAR_5)) {
 case 128:
  FUNC_1(11, "received %d bytes\n", VAR_12);

  if (VAR_7->sc_flags & VAR_0) {

   if (VAR_12 == 0) {
    FUNC_3(VAR_9, VAR_3, 1);
    goto tr_setup;
   }
  } else {

   if (VAR_12 <= (int)(sizeof(VAR_10) + VAR_2)) {
    FUNC_3(VAR_9, VAR_3, 1);
    goto tr_setup;
   }
   FUNC_7(VAR_11, VAR_12 - sizeof(VAR_10), &VAR_10,
       sizeof(VAR_10));





   VAR_10.aue_rxstat &= VAR_1;
   if (VAR_10.aue_rxstat) {
    FUNC_3(VAR_9, VAR_3, 1);
    goto tr_setup;
   }

   VAR_12 -= (sizeof(VAR_10) + VAR_2);
  }
  FUNC_5(VAR_8, VAR_11, 0, VAR_12);


 case 129:
tr_setup:
  FUNC_12(VAR_5, 0, FUNC_11(VAR_5));
  FUNC_9(VAR_5);
  FUNC_6(VAR_8);
  return;

 default:
  FUNC_0("bulk read error, %s\n",
      FUNC_8(VAR_6));

  if (VAR_6 != VAR_4) {

   FUNC_13(VAR_5);
   goto tr_setup;
  }
  return;
 }
}
