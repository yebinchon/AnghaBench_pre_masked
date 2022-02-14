
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rt2560_tx_desc {int dummy; } ;
struct rt2560_tx_data {int map; int rix; int ni; struct mbuf* m; } ;
struct TYPE_8__ {size_t cur_encrypt; int queued; int data_dmat; struct rt2560_tx_data* data; struct rt2560_tx_desc* desc; } ;
struct rt2560_softc {TYPE_3__ txq; int sc_dev; } ;
struct TYPE_7__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211com {int ic_rt; } ;
struct ieee80211_node {TYPE_1__* ni_vap; struct ieee80211com* ni_ic; } ;
struct TYPE_9__ {int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;
struct TYPE_6__ {int iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,struct mbuf*,TYPE_4__*,int*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct mbuf* FUNC_3 (struct ieee80211_node*,struct mbuf const*,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct rt2560_softc*,struct rt2560_tx_desc*,int,int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_9(struct rt2560_softc *VAR_9,
    const struct mbuf *VAR_10, struct ieee80211_node *VAR_11, int VAR_12, int VAR_13)
{
 struct ieee80211com *VAR_14 = VAR_11->ni_ic;
 struct rt2560_tx_desc *VAR_15;
 struct rt2560_tx_data *VAR_16;
 struct mbuf *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 bus_dma_segment_t VAR_21[VAR_5];
 int VAR_22;

 VAR_17 = FUNC_3(VAR_11, VAR_10, VAR_13, VAR_12);
 if (VAR_17 == ((void*)0)) {
  FUNC_6(VAR_11->ni_vap->iv_ifp, VAR_4, 1);
  FUNC_2(VAR_9->sc_dev,
      "could not allocate mbuf for protection mode %d\n", VAR_12);
  return VAR_1;
 }

 VAR_15 = &VAR_9->txq.desc[VAR_9->txq.cur_encrypt];
 VAR_16 = &VAR_9->txq.data[VAR_9->txq.cur_encrypt];

 VAR_20 = FUNC_0(VAR_9->txq.data_dmat, VAR_16->map,
     VAR_17, VAR_21, &VAR_22, 0);
 if (VAR_20 != 0) {
  FUNC_2(VAR_9->sc_dev,
      "could not map mbuf (error %d)\n", VAR_20);
  FUNC_7(VAR_17);
  return VAR_20;
 }

 VAR_16->m = VAR_17;
 VAR_16->ni = FUNC_5(VAR_11);

 VAR_16->rix = VAR_2;

 VAR_18 = FUNC_4(VAR_14->ic_rt, VAR_13);
 VAR_19 = VAR_7;
 if (VAR_12 == VAR_3)
  VAR_19 |= VAR_6;

 FUNC_8(VAR_9, VAR_15, VAR_19, VAR_17->m_pkthdr.len, VAR_18, 1,
     VAR_21->ds_addr);

 FUNC_1(VAR_9->txq.data_dmat, VAR_16->map,
     VAR_0);

 VAR_9->txq.queued++;
 VAR_9->txq.cur_encrypt = (VAR_9->txq.cur_encrypt + 1) % VAR_8;

 return 0;
}
