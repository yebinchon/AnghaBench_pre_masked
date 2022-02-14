
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_softc {scalar_t__ tx_nfree; int sc_running; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct ural_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ural_softc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ural_softc*) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct ural_softc*,struct mbuf*,struct ieee80211_node*) ;
 scalar_t__ FUNC_4 (struct ural_softc*,struct mbuf*,struct ieee80211_node*,struct ieee80211_bpf_params const*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_3, struct mbuf *VAR_4,
 const struct ieee80211_bpf_params *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_3->ni_ic;
 struct ural_softc *VAR_7 = VAR_6->ic_softc;

 FUNC_0(VAR_7);

 if (!VAR_7->sc_running) {
  FUNC_1(VAR_7);
  FUNC_2(VAR_4);
  return VAR_1;
 }
 if (VAR_7->tx_nfree < VAR_2) {
  FUNC_1(VAR_7);
  FUNC_2(VAR_4);
  return VAR_0;
 }

 if (VAR_5 == ((void*)0)) {




  if (FUNC_3(VAR_7, VAR_4, VAR_3) != 0)
   goto bad;
 } else {




  if (FUNC_4(VAR_7, VAR_4, VAR_3, VAR_5) != 0)
   goto bad;
 }
 FUNC_1(VAR_7);
 return 0;
bad:
 FUNC_1(VAR_7);
 return VAR_0;
}
