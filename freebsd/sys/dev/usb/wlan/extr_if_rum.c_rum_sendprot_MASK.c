
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rum_tx_data {int rate; int desc; int ni; struct mbuf* m; } ;
struct rum_softc {int * sc_xfer; int tx_q; int tx_nfree; int tx_free; int sc_dev; } ;
struct TYPE_4__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211com {int ic_rt; } ;
struct ieee80211_node {TYPE_1__* ni_vap; struct ieee80211com* ni_ic; } ;
struct TYPE_3__ {int iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct rum_softc*) ;
 struct rum_tx_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct rum_tx_data*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct mbuf* FUNC_5 (struct ieee80211_node*,struct mbuf const*,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct ieee80211_node*) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_9 (struct rum_softc*,int *,int *,int,int ,int ,int ,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct rum_softc *VAR_6,
    const struct mbuf *VAR_7, struct ieee80211_node *VAR_8, int VAR_9, int VAR_10)
{
 struct ieee80211com *VAR_11 = VAR_8->ni_ic;
 struct rum_tx_data *VAR_12;
 struct mbuf *VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_6);

 VAR_13 = FUNC_5(VAR_8, VAR_7, VAR_10, VAR_9);
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_8->ni_vap->iv_ifp, VAR_2, 1);
  FUNC_4(VAR_6->sc_dev,
      "could not allocate mbuf for protection mode %d\n", VAR_9);
  return (VAR_0);
 }

 VAR_14 = FUNC_6(VAR_11->ic_rt, VAR_10);
 VAR_15 = 0;
 if (VAR_9 == VAR_1)
  VAR_15 |= VAR_3;

 VAR_12 = FUNC_1(&VAR_6->tx_free);
 FUNC_3(&VAR_6->tx_free, VAR_5);
 VAR_6->tx_nfree--;

 VAR_12->m = VAR_13;
 VAR_12->ni = FUNC_7(VAR_8);
 VAR_12->rate = VAR_14;
 FUNC_9(VAR_6, &VAR_12->desc, ((void*)0), VAR_15, 0, 0, 0,
     VAR_13->m_pkthdr.len, VAR_14);

 FUNC_2(&VAR_6->tx_q, VAR_12, VAR_5);
 FUNC_10(VAR_6->sc_xfer[VAR_4]);

 return 0;
}
