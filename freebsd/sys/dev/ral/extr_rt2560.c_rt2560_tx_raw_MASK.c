
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct rt2560_tx_radiotap_header {int wt_rate; int wt_antenna; scalar_t__ wt_flags; } ;
struct rt2560_tx_desc {int dummy; } ;
struct rt2560_tx_data {int map; struct ieee80211_node* ni; struct mbuf* m; } ;
struct TYPE_6__ {size_t cur; int queued; int desc_map; int desc_dmat; int data_dmat; struct rt2560_tx_data* data; struct rt2560_tx_desc* desc; } ;
struct rt2560_softc {TYPE_2__ prioq; int tx_ant; struct rt2560_tx_radiotap_header sc_txtap; int sc_dev; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211com {int ic_rt; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int ibp_rate0; int ibp_flags; } ;
struct TYPE_7__ {int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (struct rt2560_softc*,int,char*,int ,size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rt2560_softc*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int ,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct ieee80211vap*,struct mbuf*) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct rt2560_softc*,struct mbuf*,struct ieee80211_node*,int ,int) ;
 int FUNC_10 (struct rt2560_softc*,struct rt2560_tx_desc*,int,int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_11(struct rt2560_softc *VAR_15, struct mbuf *VAR_16,
    struct ieee80211_node *VAR_17, const struct ieee80211_bpf_params *VAR_18)
{
 struct ieee80211vap *VAR_19 = VAR_17->ni_vap;
 struct ieee80211com *VAR_20 = VAR_17->ni_ic;
 struct rt2560_tx_desc *VAR_21;
 struct rt2560_tx_data *VAR_22;
 bus_dma_segment_t VAR_23[VAR_9];
 uint32_t VAR_24;
 int VAR_25, VAR_26, VAR_27;

 VAR_21 = &VAR_15->prioq.desc[VAR_15->prioq.cur];
 VAR_22 = &VAR_15->prioq.data[VAR_15->prioq.cur];

 VAR_26 = VAR_18->ibp_rate0;
 if (!FUNC_5(VAR_20->ic_rt, VAR_26)) {

  FUNC_8(VAR_16);
  return VAR_1;
 }

 VAR_24 = 0;
 if ((VAR_18->ibp_flags & VAR_4) == 0)
  VAR_24 |= VAR_12;
 if (VAR_18->ibp_flags & (VAR_5|VAR_3)) {
  VAR_27 = FUNC_9(VAR_15, VAR_16, VAR_17,
      VAR_18->ibp_flags & VAR_5 ?
    VAR_7 : VAR_6,
      VAR_26);
  if (VAR_27) {
   FUNC_8(VAR_16);
   return VAR_27;
  }
  VAR_24 |= VAR_14 | VAR_13;
 }

 VAR_27 = FUNC_2(VAR_15->prioq.data_dmat, VAR_22->map, VAR_16,
     VAR_23, &VAR_25, 0);
 if (VAR_27 != 0) {
  FUNC_4(VAR_15->sc_dev, "could not map mbuf (error %d)\n",
      VAR_27);
  FUNC_8(VAR_16);
  return VAR_27;
 }

 if (FUNC_6(VAR_19)) {
  struct rt2560_tx_radiotap_header *VAR_28 = &VAR_15->sc_txtap;

  VAR_28->wt_flags = 0;
  VAR_28->wt_rate = VAR_26;
  VAR_28->wt_antenna = VAR_15->tx_ant;

  FUNC_7(VAR_17->ni_vap, VAR_16);
 }

 VAR_22->m = VAR_16;
 VAR_22->ni = VAR_17;


 FUNC_10(VAR_15, VAR_21, VAR_24, VAR_16->m_pkthdr.len,
     VAR_26, (VAR_18->ibp_flags & VAR_2) != 0,
     VAR_23->ds_addr);

 FUNC_3(VAR_15->prioq.data_dmat, VAR_22->map, VAR_0);
 FUNC_3(VAR_15->prioq.desc_dmat, VAR_15->prioq.desc_map,
     VAR_0);

 FUNC_0(VAR_15, 10, "sending raw frame len=%u idx=%u rate=%u\n",
     VAR_16->m_pkthdr.len, VAR_15->prioq.cur, VAR_26);


 VAR_15->prioq.queued++;
 VAR_15->prioq.cur = (VAR_15->prioq.cur + 1) % VAR_10;
 FUNC_1(VAR_15, VAR_11, VAR_8);

 return 0;
}
