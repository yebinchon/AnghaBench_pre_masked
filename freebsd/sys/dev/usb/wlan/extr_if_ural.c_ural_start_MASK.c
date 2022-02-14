
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ural_softc {scalar_t__ sc_running; scalar_t__ tx_nfree; int sc_snd; } ;
struct TYPE_4__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_3__ {int iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ural_softc*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ,int ,int) ;
 struct mbuf* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ural_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_5(struct ural_softc *VAR_3)
{
 struct ieee80211_node *VAR_4;
 struct mbuf *VAR_5;

 FUNC_0(VAR_3, VAR_1);

 if (VAR_3->sc_running == 0)
  return;

 while (VAR_3->tx_nfree >= VAR_2 &&
     (VAR_5 = FUNC_3(&VAR_3->sc_snd)) != ((void*)0)) {
  VAR_4 = (struct ieee80211_node *) VAR_5->m_pkthdr.rcvif;
  if (FUNC_4(VAR_3, VAR_5, VAR_4) != 0) {
   FUNC_2(VAR_4->ni_vap->iv_ifp,
        VAR_0, 1);
   FUNC_1(VAR_4);
   break;
  }
 }
}
