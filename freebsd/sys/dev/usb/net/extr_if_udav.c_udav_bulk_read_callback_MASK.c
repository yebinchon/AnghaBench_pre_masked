
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct udav_softc {struct usb_ether sc_ue; } ;
struct udav_rxpkt {int rxstat; int pktlen; } ;
struct ifnet {int dummy; } ;
typedef int stat ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 struct ifnet* FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_ether*,struct usb_page_cache*,int,int) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct usb_page_cache*,int ,struct udav_rxpkt*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_11 (struct usb_xfer*,int ) ;
 int FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*,int ,int ) ;
 int FUNC_14 (struct usb_xfer*) ;
 struct udav_softc* FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_17(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 struct udav_softc *VAR_8 = FUNC_15(VAR_6);
 struct usb_ether *VAR_9 = &VAR_8->sc_ue;
 struct ifnet *VAR_10 = FUNC_5(VAR_9);
 struct usb_page_cache *VAR_11;
 struct udav_rxpkt VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_16(VAR_6, &VAR_14, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_6)) {
 case 128:

  if (VAR_14 < (int)(sizeof(VAR_12) + VAR_0)) {
   FUNC_2(VAR_10, VAR_2, 1);
   goto tr_setup;
  }
  VAR_11 = FUNC_11(VAR_6, 0);
  FUNC_8(VAR_11, 0, &VAR_12, sizeof(VAR_12));
  VAR_14 -= sizeof(VAR_12);
  VAR_13 = FUNC_4(VAR_14, FUNC_3(VAR_12.pktlen));
  VAR_13 -= VAR_0;

  if (VAR_12.rxstat & VAR_4) {
   FUNC_2(VAR_10, VAR_1, 1);
   goto tr_setup;
  }
  if (VAR_12.rxstat & VAR_3) {
   FUNC_2(VAR_10, VAR_2, 1);
   goto tr_setup;
  }
  FUNC_6(VAR_9, VAR_11, sizeof(VAR_12), VAR_13);

 case 129:
tr_setup:
  FUNC_13(VAR_6, 0, FUNC_12(VAR_6));
  FUNC_10(VAR_6);
  FUNC_7(VAR_9);
  return;

 default:
  FUNC_0("bulk read error, %s\n",
      FUNC_9(VAR_7));

  if (VAR_7 != VAR_5) {

   FUNC_14(VAR_6);
   goto tr_setup;
  }
  return;
 }
}
