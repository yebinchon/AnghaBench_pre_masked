
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct iwn_softc {int sc_flags; int sc_tx_timer; scalar_t__ qfullmsk; scalar_t__ sc_beacon_wait; } ;
struct ieee80211com {struct iwn_softc* ic_softc; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (struct iwn_softc*) ;
 int FUNC_2 (struct iwn_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211com *VAR_3, struct mbuf *VAR_4)
{
 struct iwn_softc *VAR_5 = VAR_3->ic_softc;
 struct ieee80211_node *VAR_6;
 int VAR_7;

 VAR_6 = (struct ieee80211_node *)VAR_4->m_pkthdr.rcvif;

 FUNC_0(VAR_5);
 if ((VAR_5->sc_flags & VAR_2) == 0 || VAR_5->sc_beacon_wait) {
  FUNC_1(VAR_5);
  return (VAR_1);
 }

 if (VAR_5->qfullmsk) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }

 VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_6);
 if (!VAR_7)
  VAR_5->sc_tx_timer = 5;
 FUNC_1(VAR_5);
 return (VAR_7);
}
