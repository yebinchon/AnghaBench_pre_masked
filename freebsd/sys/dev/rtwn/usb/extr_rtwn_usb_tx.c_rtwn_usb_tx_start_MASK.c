
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct usb_xfer {int dummy; } ;
struct rtwn_usb_softc {int uc_tx_inactive; int uc_tx_pending; struct usb_xfer** uc_xfer; } ;
struct rtwn_tx_desc_common {scalar_t__ offset; int flags0; int pktlen; } ;
struct rtwn_softc {scalar_t__ txdesc_len; int sc_tx_timer; int qfullmsk; } ;
struct rtwn_data {scalar_t__ buf; scalar_t__ buflen; int id; struct mbuf* m; struct ieee80211_node* ni; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;


 size_t FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct rtwn_usb_softc* FUNC_2 (struct rtwn_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct rtwn_data*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mbuf*,int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_8 (struct rtwn_softc*,int*) ;
 struct rtwn_data* FUNC_9 (struct rtwn_usb_softc*) ;
 int FUNC_10 (struct rtwn_tx_desc_common*) ;
 int FUNC_11 (struct usb_xfer*) ;
 size_t* VAR_6 ;

int
FUNC_12(struct rtwn_softc *VAR_7, struct ieee80211_node *VAR_8,
    struct mbuf *VAR_9, uint8_t *VAR_10, uint8_t VAR_11, int VAR_12)
{
 struct rtwn_usb_softc *VAR_13 = FUNC_2(VAR_7);
 struct rtwn_tx_desc_common *VAR_14;
 struct rtwn_data *VAR_15;
 struct usb_xfer *VAR_16;
 uint16_t VAR_17;

 FUNC_1(VAR_7);

 if (VAR_9->m_pkthdr.len + VAR_7->txdesc_len > VAR_4)
  return (VAR_0);

 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15 == ((void*)0))
  return (VAR_1);

 VAR_17 = FUNC_0(VAR_9);

 switch (VAR_11) {
 case 129:
 case 128:
  VAR_16 = VAR_13->uc_xfer[VAR_2];
  break;
 default:
  VAR_16 = VAR_13->uc_xfer[VAR_6[VAR_17]];
  break;
 }

 VAR_14 = (struct rtwn_tx_desc_common *)VAR_10;
 VAR_14->pktlen = FUNC_5(VAR_9->m_pkthdr.len);
 VAR_14->offset = VAR_7->txdesc_len;
 VAR_14->flags0 |= VAR_3;
 FUNC_10(VAR_14);


 FUNC_8(VAR_7, VAR_10);

 FUNC_7(VAR_15->buf, VAR_10, VAR_7->txdesc_len);
 FUNC_6(VAR_9, 0, VAR_9->m_pkthdr.len,
     (caddr_t)(VAR_15->buf + VAR_7->txdesc_len));

 VAR_15->buflen = VAR_9->m_pkthdr.len + VAR_7->txdesc_len;
 VAR_15->id = VAR_12;
 VAR_15->ni = VAR_8;
 if (VAR_15->ni != ((void*)0)) {
  VAR_15->m = VAR_9;

  VAR_7->sc_tx_timer = 5;

 }

 FUNC_4(&VAR_13->uc_tx_pending, VAR_15, VAR_5);
 if (FUNC_3(&VAR_13->uc_tx_inactive))
  VAR_7->qfullmsk = 1;

 FUNC_11(VAR_16);

 return (0);
}
