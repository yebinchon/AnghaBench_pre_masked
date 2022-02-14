
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211com {struct bwn_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;
struct bwn_softc {int sc_flags; int sc_watchdog_timer; struct bwn_mac* sc_curmac; } ;
struct bwn_mac {scalar_t__ mac_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bwn_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct bwn_softc*,struct mbuf*) ;
 int FUNC_3 (struct bwn_softc*,struct ieee80211_node*,struct mbuf*) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_4, struct mbuf *VAR_5,
 const struct ieee80211_bpf_params *VAR_6)
{
 struct ieee80211com *VAR_7 = VAR_4->ni_ic;
 struct bwn_softc *VAR_8 = VAR_7->ic_softc;
 struct bwn_mac *VAR_9 = VAR_8->sc_curmac;
 int VAR_10;

 if ((VAR_8->sc_flags & VAR_0) == 0 ||
     VAR_9->mac_status < VAR_1) {
  FUNC_4(VAR_5);
  return (VAR_2);
 }

 FUNC_0(VAR_8);
 if (FUNC_2(VAR_8, VAR_5)) {
  FUNC_4(VAR_5);
  FUNC_1(VAR_8);
  return (VAR_3);
 }

 VAR_10 = FUNC_3(VAR_8, VAR_4, VAR_5);
 if (VAR_10 == 0)
  VAR_8->sc_watchdog_timer = 5;
 FUNC_1(VAR_8);
 return (VAR_10);
}
