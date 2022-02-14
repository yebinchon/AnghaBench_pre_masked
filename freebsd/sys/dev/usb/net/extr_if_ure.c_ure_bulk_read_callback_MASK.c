
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct ure_softc {struct usb_ether sc_ue; } ;
struct ure_rxpkt {int ure_pktlen; } ;
struct ifnet {int dummy; } ;
typedef int pkt ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (int ) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct usb_ether*,struct usb_page_cache*,int,int) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_page_cache*,int ,struct ure_rxpkt*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int ,int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct ure_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct ure_softc *VAR_6 = FUNC_14(VAR_4);
 struct usb_ether *VAR_7 = &VAR_6->sc_ue;
 struct ifnet *VAR_8 = FUNC_4(VAR_7);
 struct usb_page_cache *VAR_9;
 struct ure_rxpkt VAR_10;
 int VAR_11, VAR_12;

 FUNC_15(VAR_4, &VAR_11, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_4)) {
 case 128:
  if (VAR_11 < (int)(sizeof(VAR_10))) {
   FUNC_2(VAR_8, VAR_1, 1);
   goto tr_setup;
  }
  VAR_9 = FUNC_10(VAR_4, 0);
  FUNC_7(VAR_9, 0, &VAR_10, sizeof(VAR_10));
  VAR_12 = FUNC_3(VAR_10.ure_pktlen) & VAR_2;
  VAR_12 -= VAR_0;
  if (VAR_11 < (int)(VAR_12 + sizeof(VAR_10))) {
   FUNC_2(VAR_8, VAR_1, 1);
   goto tr_setup;
  }

  FUNC_5(VAR_7, VAR_9, sizeof(VAR_10), VAR_12);

 case 129:
tr_setup:
  FUNC_12(VAR_4, 0, FUNC_11(VAR_4));
  FUNC_9(VAR_4);
  FUNC_6(VAR_7);
  return;

 default:
  FUNC_0("bulk read error, %s\n",
      FUNC_8(VAR_5));

  if (VAR_5 != VAR_3) {

   FUNC_13(VAR_4);
   goto tr_setup;
  }
  return;
 }
}
