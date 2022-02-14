
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zyd_softc {int sc_flags; scalar_t__ tx_nfree; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct zyd_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct zyd_softc*) ;
 int FUNC_1 (struct zyd_softc*) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct zyd_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_node *VAR_4, struct mbuf *VAR_5,
 const struct ieee80211_bpf_params *VAR_6)
{
 struct ieee80211com *VAR_7 = VAR_4->ni_ic;
 struct zyd_softc *VAR_8 = VAR_7->ic_softc;

 FUNC_0(VAR_8);

 if (!(VAR_8->sc_flags & VAR_3)) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_5);
  return (VAR_1);
 }
 if (VAR_8->tx_nfree == 0) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_5);
  return (VAR_2);
 }






 if (FUNC_3(VAR_8, VAR_5, VAR_4) != 0) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_5);
  return (VAR_0);
 }
 FUNC_1(VAR_8);
 return (0);
}
