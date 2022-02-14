
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct ieee80211com {int ic_ierrors; } ;
struct rtwn_softc {struct ieee80211com sc_ic; } ;
struct rtwn_usb_softc {int uc_rx_inactive; int uc_rx_active; struct rtwn_softc uc_sc; } ;
struct rtwn_data {int buf; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*) ;
 struct rtwn_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct rtwn_data*,struct mbuf*) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_7 (struct usb_xfer*) ;


 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct ieee80211_node*) ;
 int FUNC_10 (struct ieee80211_node*,struct mbuf*) ;
 int FUNC_11 (struct ieee80211com*,struct mbuf*) ;
 struct mbuf* FUNC_12 (struct rtwn_usb_softc*,struct usb_xfer*,struct rtwn_data*) ;
 struct ieee80211_node* FUNC_13 (struct rtwn_softc*,struct mbuf*) ;
 int FUNC_14 (struct rtwn_softc*) ;
 int FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*) ;
 int FUNC_17 (struct usb_xfer*,int ,int ,int ) ;
 int FUNC_18 (struct usb_xfer*) ;
 struct rtwn_usb_softc* FUNC_19 (struct usb_xfer*) ;

void
FUNC_20(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct rtwn_usb_softc *VAR_3 = FUNC_19(VAR_1);
 struct rtwn_softc *VAR_4 = &VAR_3->uc_sc;
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;
 struct ieee80211_node *VAR_6;
 struct mbuf *VAR_7 = ((void*)0), *VAR_8;
 struct rtwn_data *VAR_9;

 FUNC_1(VAR_4);

 switch (FUNC_7(VAR_1)) {
 case 128:
  VAR_9 = FUNC_4(&VAR_3->uc_rx_active);
  if (VAR_9 == ((void*)0))
   goto tr_setup;
  FUNC_6(&VAR_3->uc_rx_active, VAR_8);
  VAR_7 = FUNC_12(VAR_3, VAR_1, VAR_9);
  FUNC_5(&VAR_3->uc_rx_inactive, VAR_9, VAR_8);

 case 129:
tr_setup:
  VAR_9 = FUNC_4(&VAR_3->uc_rx_inactive);
  if (VAR_9 == ((void*)0)) {
   FUNC_0(VAR_7 == ((void*)0), ("mbuf isn't NULL"));
   goto finish;
  }
  FUNC_6(&VAR_3->uc_rx_inactive, VAR_8);
  FUNC_5(&VAR_3->uc_rx_active, VAR_9, VAR_8);
  FUNC_17(VAR_1, 0, VAR_9->buf,
      FUNC_16(VAR_1));
  FUNC_15(VAR_1);






  while (VAR_7 != ((void*)0)) {
   VAR_8 = VAR_7->m_nextpkt;
   VAR_7->m_nextpkt = ((void*)0);

   VAR_6 = FUNC_13(VAR_4, VAR_7);

   FUNC_3(VAR_4);

   if (VAR_6 != ((void*)0)) {
    (void)FUNC_10(VAR_6, VAR_7);
    FUNC_9(VAR_6);
   } else {
    (void)FUNC_11(VAR_5, VAR_7);
   }
   FUNC_2(VAR_4);
   VAR_7 = VAR_8;
  }
  break;
 default:

  VAR_9 = FUNC_4(&VAR_3->uc_rx_active);
  if (VAR_9 != ((void*)0)) {
   FUNC_6(&VAR_3->uc_rx_active, VAR_8);
   FUNC_5(&VAR_3->uc_rx_inactive, VAR_9, VAR_8);
  }
  if (VAR_2 != VAR_0) {


   FUNC_18(VAR_1);
   FUNC_8(VAR_5->ic_ierrors, 1);
   goto tr_setup;
  }
  break;
 }
finish:

 FUNC_14(VAR_4);
}
