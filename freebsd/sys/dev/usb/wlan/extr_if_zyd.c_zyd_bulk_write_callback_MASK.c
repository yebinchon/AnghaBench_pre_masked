
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
struct zyd_tx_radiotap_header {int wt_rate; int wt_flags; } ;
struct zyd_tx_data {int rate; TYPE_1__* ni; int desc; struct mbuf* m; } ;
struct TYPE_6__ {int ic_oerrors; } ;
struct zyd_softc {int sc_dev; TYPE_3__ sc_ic; struct zyd_tx_radiotap_header sc_txtap; int tx_q; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211vap {int dummy; } ;
struct TYPE_4__ {struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (struct zyd_softc*,int ,char*,int) ;
 struct zyd_tx_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct usb_xfer*) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct ieee80211vap*,struct mbuf*) ;
 int VAR_5 ;
 int FUNC_8 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_12 (struct usb_xfer*,int ) ;
 struct zyd_tx_data* FUNC_13 (struct usb_xfer*) ;
 int FUNC_14 (struct usb_xfer*,int ,int) ;
 int FUNC_15 (struct usb_xfer*,struct zyd_tx_data*) ;
 int FUNC_16 (struct usb_xfer*) ;
 struct zyd_softc* FUNC_17 (struct usb_xfer*) ;
 int FUNC_18 (struct usb_xfer*,int*,int *,int *,int *) ;
 int FUNC_19 (struct zyd_softc*) ;
 int FUNC_20 (struct zyd_tx_data*,int ) ;

__attribute__((used)) static void
FUNC_21(struct usb_xfer *VAR_6, usb_error_t VAR_7)
{
 struct zyd_softc *VAR_8 = FUNC_17(VAR_6);
 struct ieee80211vap *VAR_9;
 struct zyd_tx_data *VAR_10;
 struct mbuf *VAR_11;
 struct usb_page_cache *VAR_12;
 int VAR_13;

 FUNC_18(VAR_6, &VAR_13, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_3(VAR_6)) {
 case 128:
  FUNC_0(VAR_8, VAR_2, "transfer complete, %u bytes\n",
      VAR_13);


  VAR_10 = FUNC_13(VAR_6);
  FUNC_20(VAR_10, 0);
  FUNC_15(VAR_6, ((void*)0));


 case 129:
tr_setup:
  VAR_10 = FUNC_1(&VAR_8->tx_q);
  if (VAR_10) {
   FUNC_2(&VAR_8->tx_q, VAR_5);
   VAR_11 = VAR_10->m;

   if (VAR_11->m_pkthdr.len > (int)VAR_3) {
    FUNC_0(VAR_8, VAR_2, "data overflow, %u bytes\n",
        VAR_11->m_pkthdr.len);
    VAR_11->m_pkthdr.len = VAR_3;
   }
   VAR_12 = FUNC_12(VAR_6, 0);
   FUNC_8(VAR_12, 0, &VAR_10->desc, VAR_4);
   FUNC_10(VAR_12, VAR_4, VAR_11, 0,
       VAR_11->m_pkthdr.len);

   VAR_9 = VAR_10->ni->ni_vap;
   if (FUNC_6(VAR_9)) {
    struct zyd_tx_radiotap_header *VAR_14 = &VAR_8->sc_txtap;

    VAR_14->wt_flags = 0;
    VAR_14->wt_rate = VAR_10->rate;

    FUNC_7(VAR_9, VAR_11);
   }

   FUNC_14(VAR_6, 0, VAR_4 + VAR_11->m_pkthdr.len);
   FUNC_15(VAR_6, VAR_10);
   FUNC_11(VAR_6);
  }
  FUNC_19(VAR_8);
  break;

 default:
  FUNC_0(VAR_8, VAR_2, "transfer error, %s\n",
      FUNC_9(VAR_7));

  FUNC_4(VAR_8->sc_ic.ic_oerrors, 1);
  VAR_10 = FUNC_13(VAR_6);
  FUNC_15(VAR_6, ((void*)0));
  if (VAR_10 != ((void*)0))
   FUNC_20(VAR_10, VAR_7);

  if (VAR_7 != VAR_0) {
   if (VAR_7 == VAR_1)
    FUNC_5(VAR_8->sc_dev, "device timeout\n");






   FUNC_16(VAR_6);
   goto tr_setup;
  }
  break;
 }
}
