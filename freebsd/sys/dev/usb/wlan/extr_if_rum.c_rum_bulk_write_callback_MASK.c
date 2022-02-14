
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct rum_tx_radiotap_header {int wt_antenna; int wt_rate; int wt_flags; } ;
struct rum_tx_data {int rate; TYPE_1__* ni; int desc; struct mbuf* m; } ;
struct TYPE_6__ {int ic_oerrors; } ;
struct rum_softc {int sc_dev; TYPE_3__ sc_ic; int tx_ant; struct rum_tx_radiotap_header sc_txtap; int tx_q; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211vap {int dummy; } ;
struct TYPE_4__ {struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rum_tx_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct ieee80211vap*,struct mbuf*) ;
 int VAR_4 ;
 int FUNC_8 (struct rum_softc*) ;
 int FUNC_9 (struct rum_tx_data*,int ) ;
 int FUNC_10 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct usb_page_cache*,int,struct mbuf*,int ,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_14 (struct usb_xfer*,int ) ;
 struct rum_tx_data* FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*,int ,unsigned int) ;
 int FUNC_17 (struct usb_xfer*,struct rum_tx_data*) ;
 int FUNC_18 (struct usb_xfer*) ;
 struct rum_softc* FUNC_19 (struct usb_xfer*) ;
 int FUNC_20 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_21(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct rum_softc *VAR_7 = FUNC_19(VAR_5);
 struct ieee80211vap *VAR_8;
 struct rum_tx_data *VAR_9;
 struct mbuf *VAR_10;
 struct usb_page_cache *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;

 FUNC_20(VAR_5, &VAR_13, &VAR_14, ((void*)0), ((void*)0));

 switch (FUNC_3(VAR_5)) {
 case 128:
  FUNC_0(11, "transfer complete, %d bytes\n", VAR_13);


  VAR_9 = FUNC_15(VAR_5);
  FUNC_9(VAR_9, 0);
  FUNC_17(VAR_5, ((void*)0));


 case 129:
tr_setup:
  VAR_9 = FUNC_1(&VAR_7->tx_q);
  if (VAR_9) {
   FUNC_2(&VAR_7->tx_q, VAR_4);
   VAR_10 = VAR_9->m;

   if (VAR_10->m_pkthdr.len > (int)(VAR_0 + VAR_1)) {
    FUNC_0(0, "data overflow, %u bytes\n",
        VAR_10->m_pkthdr.len);
    VAR_10->m_pkthdr.len = (VAR_0 + VAR_1);
   }
   VAR_11 = FUNC_14(VAR_5, 0);
   FUNC_10(VAR_11, 0, &VAR_9->desc, VAR_1);
   FUNC_12(VAR_11, VAR_1, VAR_10, 0,
       VAR_10->m_pkthdr.len);

   VAR_8 = VAR_9->ni->ni_vap;
   if (FUNC_6(VAR_8)) {
    struct rum_tx_radiotap_header *VAR_15 = &VAR_7->sc_txtap;

    VAR_15->wt_flags = 0;
    VAR_15->wt_rate = VAR_9->rate;
    VAR_15->wt_antenna = VAR_7->tx_ant;

    FUNC_7(VAR_8, VAR_10);
   }


   VAR_12 = (VAR_1 + VAR_10->m_pkthdr.len + 3) & ~3;
   if ((VAR_12 % 64) == 0)
    VAR_12 += 4;

   FUNC_0(11, "sending frame len=%u xferlen=%u\n",
       VAR_10->m_pkthdr.len, VAR_12);

   FUNC_16(VAR_5, 0, VAR_12);
   FUNC_17(VAR_5, VAR_9);

   FUNC_13(VAR_5);
  }
  FUNC_8(VAR_7);
  break;

 default:
  FUNC_0(11, "transfer error, %s\n",
      FUNC_11(VAR_6));

  FUNC_4(VAR_7->sc_ic.ic_oerrors, 1);
  VAR_9 = FUNC_15(VAR_5);
  if (VAR_9 != ((void*)0)) {
   FUNC_9(VAR_9, VAR_6);
   FUNC_17(VAR_5, ((void*)0));
  }

  if (VAR_6 != VAR_2) {
   if (VAR_6 == VAR_3)
    FUNC_5(VAR_7->sc_dev, "device timeout\n");






   FUNC_18(VAR_5);
   goto tr_setup;
  }
  break;
 }
}
