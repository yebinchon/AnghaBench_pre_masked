
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ural_tx_data {int rate; int desc; struct ieee80211_node* ni; struct mbuf* m; } ;
struct ural_softc {scalar_t__ tx_nfree; int * sc_xfer; int tx_q; int tx_free; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211com {int ic_rt; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int ibp_rate0; int ibp_flags; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int FUNC_2 (struct ural_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct ural_tx_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ural_tx_data*,int ) ;
 int FUNC_5 (int *,int ) ;
 size_t VAR_10 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct mbuf*) ;
 int VAR_11 ;
 int FUNC_8 (struct ural_softc*,struct mbuf*,struct ieee80211_node*,int ,int) ;
 int FUNC_9 (struct ural_softc*,int *,int ,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct ural_softc *VAR_12, struct mbuf *VAR_13, struct ieee80211_node *VAR_14,
    const struct ieee80211_bpf_params *VAR_15)
{
 struct ieee80211com *VAR_16 = VAR_14->ni_ic;
 struct ural_tx_data *VAR_17;
 uint32_t VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_2(VAR_12, VAR_7);
 FUNC_1(VAR_15 != ((void*)0), ("no raw xmit params"));

 VAR_20 = VAR_15->ibp_rate0;
 if (!FUNC_6(VAR_16->ic_rt, VAR_20)) {
  FUNC_7(VAR_13);
  return VAR_0;
 }
 VAR_18 = 0;
 if ((VAR_15->ibp_flags & VAR_3) == 0)
  VAR_18 |= VAR_8;
 if (VAR_15->ibp_flags & (VAR_4|VAR_2)) {
  VAR_19 = FUNC_8(VAR_12, VAR_13, VAR_14,
      VAR_15->ibp_flags & VAR_4 ?
    VAR_6 : VAR_5,
      VAR_20);
  if (VAR_19 || VAR_12->tx_nfree == 0) {
   FUNC_7(VAR_13);
   return VAR_1;
  }
  VAR_18 |= VAR_9;
 }

 VAR_17 = FUNC_3(&VAR_12->tx_free);
 FUNC_5(&VAR_12->tx_free, VAR_11);
 VAR_12->tx_nfree--;

 VAR_17->m = VAR_13;
 VAR_17->ni = VAR_14;
 VAR_17->rate = VAR_20;


 FUNC_9(VAR_12, &VAR_17->desc, VAR_18, VAR_13->m_pkthdr.len, VAR_20);

 FUNC_0(10, "sending raw frame len=%u rate=%u\n",
     VAR_13->m_pkthdr.len, VAR_20);

 FUNC_4(&VAR_12->tx_q, VAR_17, VAR_11);
 FUNC_10(VAR_12->sc_xfer[VAR_10]);

 return 0;
}
