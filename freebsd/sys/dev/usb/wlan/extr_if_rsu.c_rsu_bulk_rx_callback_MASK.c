
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct ieee80211com {int ic_ierrors; } ;
struct rsu_softc {int sc_rx_inactive; int sc_rx_active; struct ieee80211com sc_ic; } ;
struct rsu_data {int buf; } ;
struct mbuf {int m_flags; struct mbuf* m_next; } ;
struct ieee80211_node {int ni_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct rsu_softc*) ;
 int FUNC_2 (struct rsu_softc*) ;
 int FUNC_3 (struct rsu_softc*) ;
 struct rsu_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct rsu_data*,struct mbuf*) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int VAR_2 ;
 int FUNC_7 (struct usb_xfer*) ;


 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct ieee80211_node*) ;
 int FUNC_10 (struct ieee80211_node*,struct mbuf*) ;
 int FUNC_11 (struct ieee80211com*,struct mbuf*) ;
 struct ieee80211_node* FUNC_12 (struct rsu_softc*,struct mbuf*) ;
 struct mbuf* FUNC_13 (struct usb_xfer*,struct rsu_data*) ;
 int FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*,int ,int ,int ) ;
 int FUNC_17 (struct usb_xfer*) ;
 struct rsu_softc* FUNC_18 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_19(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct rsu_softc *VAR_5 = FUNC_18(VAR_3);
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 struct ieee80211_node *VAR_7;
 struct mbuf *VAR_8 = ((void*)0), *VAR_9;
 struct rsu_data *VAR_10;

 FUNC_1(VAR_5);

 switch (FUNC_7(VAR_3)) {
 case 128:
  VAR_10 = FUNC_4(&VAR_5->sc_rx_active);
  if (VAR_10 == ((void*)0))
   goto tr_setup;
  FUNC_6(&VAR_5->sc_rx_active, VAR_9);
  VAR_8 = FUNC_13(VAR_3, VAR_10);
  FUNC_5(&VAR_5->sc_rx_inactive, VAR_10, VAR_9);

 case 129:
tr_setup:
  VAR_10 = FUNC_4(&VAR_5->sc_rx_inactive);
  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_8 == ((void*)0), ("mbuf isn't NULL"));
   return;
  }
  FUNC_6(&VAR_5->sc_rx_inactive, VAR_9);
  FUNC_5(&VAR_5->sc_rx_active, VAR_10, VAR_9);
  FUNC_16(VAR_3, 0, VAR_10->buf,
      FUNC_15(VAR_3));
  FUNC_14(VAR_3);





  while (VAR_8 != ((void*)0)) {
   VAR_9 = VAR_8->m_next;
   VAR_8->m_next = ((void*)0);

   VAR_7 = FUNC_12(VAR_5, VAR_8);
   FUNC_3(VAR_5);

   if (VAR_7 != ((void*)0)) {
    if (VAR_7->ni_flags & VAR_0)
     VAR_8->m_flags |= VAR_1;
    (void)FUNC_10(VAR_7, VAR_8);
    FUNC_9(VAR_7);
   } else
    (void)FUNC_11(VAR_6, VAR_8);

   FUNC_2(VAR_5);
   VAR_8 = VAR_9;
  }
  break;
 default:

  VAR_10 = FUNC_4(&VAR_5->sc_rx_active);
  if (VAR_10 != ((void*)0)) {
   FUNC_6(&VAR_5->sc_rx_active, VAR_9);
   FUNC_5(&VAR_5->sc_rx_inactive, VAR_10, VAR_9);
  }
  if (VAR_4 != VAR_2) {
   FUNC_17(VAR_3);
   FUNC_8(VAR_6->ic_ierrors, 1);
   goto tr_setup;
  }
  break;
 }

}
