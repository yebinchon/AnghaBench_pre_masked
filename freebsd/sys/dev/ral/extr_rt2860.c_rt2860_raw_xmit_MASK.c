
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_softc {int sc_flags; int sc_tx_timer; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct rt2860_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2860_softc*) ;
 int FUNC_1 (struct rt2860_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct rt2860_softc*,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_4 (struct rt2860_softc*,struct mbuf*,struct ieee80211_node*,struct ieee80211_bpf_params const*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_2, struct mbuf *VAR_3,
    const struct ieee80211_bpf_params *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_2->ni_ic;
 struct rt2860_softc *VAR_6 = VAR_5->ic_softc;
 int VAR_7;

 FUNC_0(VAR_6);


 if (!(VAR_6->sc_flags & VAR_1)) {
  FUNC_1(VAR_6);
  FUNC_2(VAR_3);
  return VAR_0;
 }
 if (VAR_4 == ((void*)0)) {




  VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_2);
 } else {




  VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_2, VAR_4);
 }
 VAR_6->sc_tx_timer = 5;
 FUNC_1(VAR_6);
 return VAR_7;
}
