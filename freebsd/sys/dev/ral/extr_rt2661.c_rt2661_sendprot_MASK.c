
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2661_tx_ring {size_t cur; int queued; int desc_map; int desc_dmat; int data_dmat; struct rt2661_tx_desc* desc; struct rt2661_tx_data* data; } ;
struct rt2661_tx_desc {int dummy; } ;
struct rt2661_tx_data {int map; int rix; int ni; struct mbuf* m; } ;
struct rt2661_softc {int sc_dev; struct rt2661_tx_ring* txq; } ;
struct TYPE_4__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211com {int ic_rt; } ;
struct ieee80211_node {TYPE_1__* ni_vap; struct ieee80211com* ni_ic; } ;
typedef int bus_dma_segment_t ;
struct TYPE_3__ {int iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,struct mbuf*,int *,int*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct mbuf* FUNC_3 (struct ieee80211_node*,struct mbuf const*,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct rt2661_softc*,struct rt2661_tx_desc*,int,int ,int ,int,int *,int,int) ;

__attribute__((used)) static int
FUNC_9(struct rt2661_softc *VAR_9, int VAR_10,
    const struct mbuf *VAR_11, struct ieee80211_node *VAR_12, int VAR_13, int VAR_14)
{
 struct ieee80211com *VAR_15 = VAR_12->ni_ic;
 struct rt2661_tx_ring *VAR_16 = &VAR_9->txq[VAR_10];
 struct rt2661_tx_desc *VAR_17;
 struct rt2661_tx_data *VAR_18;
 struct mbuf *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 bus_dma_segment_t VAR_23[VAR_5];
 int VAR_24;

 VAR_19 = FUNC_3(VAR_12, VAR_11, VAR_14, VAR_13);
 if (VAR_19 == ((void*)0)) {
  FUNC_6(VAR_12->ni_vap->iv_ifp, VAR_4, 1);
  FUNC_2(VAR_9->sc_dev,
      "could not allocate mbuf for protection mode %d\n", VAR_13);
  return VAR_1;
 }

 VAR_18 = &VAR_16->data[VAR_16->cur];
 VAR_17 = &VAR_16->desc[VAR_16->cur];

 VAR_22 = FUNC_0(VAR_16->data_dmat, VAR_18->map, VAR_19, VAR_23,
     &VAR_24, 0);
 if (VAR_22 != 0) {
  FUNC_2(VAR_9->sc_dev,
      "could not map mbuf (error %d)\n", VAR_22);
  FUNC_7(VAR_19);
  return VAR_22;
 }

 VAR_18->m = VAR_19;
 VAR_18->ni = FUNC_5(VAR_12);

 VAR_18->rix = VAR_2;

 VAR_20 = FUNC_4(VAR_15->ic_rt, VAR_14);
 VAR_21 = VAR_6;
 if (VAR_13 == VAR_3)
  VAR_21 |= VAR_7;

 FUNC_8(VAR_9, VAR_17, VAR_21, 0, VAR_19->m_pkthdr.len,
     VAR_20, VAR_23, 1, VAR_10);

 FUNC_1(VAR_16->data_dmat, VAR_18->map, VAR_0);
 FUNC_1(VAR_16->desc_dmat, VAR_16->desc_map, VAR_0);

 VAR_16->queued++;
 VAR_16->cur = (VAR_16->cur + 1) % VAR_8;

 return 0;
}
