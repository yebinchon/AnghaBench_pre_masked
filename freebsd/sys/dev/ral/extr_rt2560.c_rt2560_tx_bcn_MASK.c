
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rt2560_tx_radiotap_header {int wt_rate; int wt_antenna; scalar_t__ wt_flags; } ;
struct rt2560_tx_desc {int dummy; } ;
struct rt2560_tx_data {int map; struct ieee80211_node* ni; struct mbuf* m; } ;
struct TYPE_8__ {size_t cur; int desc_map; int desc_dmat; int data_dmat; struct rt2560_tx_data* data; struct rt2560_tx_desc* desc; } ;
struct rt2560_softc {TYPE_3__ bcnq; int tx_ant; struct rt2560_tx_radiotap_header sc_txtap; int sc_dev; } ;
struct TYPE_7__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211vap {TYPE_1__* iv_txparms; } ;
struct ieee80211_node {int ni_chan; struct ieee80211vap* ni_vap; } ;
struct TYPE_9__ {int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;
struct TYPE_6__ {int mgmtrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2560_softc*,int,char*,int ,size_t,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct mbuf*,TYPE_4__*,int*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct ieee80211vap*) ;
 int FUNC_6 (struct ieee80211vap*,struct mbuf*) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct rt2560_softc*,struct rt2560_tx_desc*,int,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct rt2560_softc *VAR_6, struct mbuf *VAR_7,
    struct ieee80211_node *VAR_8)
{
 struct ieee80211vap *VAR_9 = VAR_8->ni_vap;
 struct rt2560_tx_desc *VAR_10;
 struct rt2560_tx_data *VAR_11;
 bus_dma_segment_t VAR_12[VAR_3];
 int VAR_13, VAR_14, VAR_15;

 VAR_10 = &VAR_6->bcnq.desc[VAR_6->bcnq.cur];
 VAR_11 = &VAR_6->bcnq.data[VAR_6->bcnq.cur];


 VAR_14 = VAR_9->iv_txparms[FUNC_4(VAR_8->ni_chan)].mgmtrate;

 VAR_15 = FUNC_1(VAR_6->bcnq.data_dmat, VAR_11->map, VAR_7,
     VAR_12, &VAR_13, VAR_1);
 if (VAR_15 != 0) {
  FUNC_3(VAR_6->sc_dev, "could not map mbuf (error %d)\n",
      VAR_15);
  FUNC_7(VAR_7);
  return VAR_15;
 }

 if (FUNC_5(VAR_9)) {
  struct rt2560_tx_radiotap_header *VAR_16 = &VAR_6->sc_txtap;

  VAR_16->wt_flags = 0;
  VAR_16->wt_rate = VAR_14;
  VAR_16->wt_antenna = VAR_6->tx_ant;

  FUNC_6(VAR_9, VAR_7);
 }

 VAR_11->m = VAR_7;
 VAR_11->ni = VAR_8;

 FUNC_8(VAR_6, VAR_10, VAR_4 |
     VAR_5, VAR_7->m_pkthdr.len, VAR_14, 0, VAR_12->ds_addr);

 FUNC_0(VAR_6, 10, "sending beacon frame len=%u idx=%u rate=%u\n",
     VAR_7->m_pkthdr.len, VAR_6->bcnq.cur, VAR_14);

 FUNC_2(VAR_6->bcnq.data_dmat, VAR_11->map, VAR_0);
 FUNC_2(VAR_6->bcnq.desc_dmat, VAR_6->bcnq.desc_map,
     VAR_0);

 VAR_6->bcnq.cur = (VAR_6->bcnq.cur + 1) % VAR_2;

 return 0;
}
