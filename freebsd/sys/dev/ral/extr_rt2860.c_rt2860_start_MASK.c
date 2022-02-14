
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2860_softc {int sc_flags; scalar_t__ qfullmsk; int sc_tx_timer; int sc_snd; int data_pool; } ;
struct TYPE_3__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {TYPE_2__* ni_vap; } ;
struct TYPE_4__ {int iv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2860_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int ,int ,int) ;
 struct mbuf* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct rt2860_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_6(struct rt2860_softc *VAR_2)
{
 struct ieee80211_node *VAR_3;
 struct mbuf *VAR_4;

 FUNC_0(VAR_2);

 if ((VAR_2->sc_flags & VAR_1) == 0)
  return;

 while (!FUNC_1(&VAR_2->data_pool) && VAR_2->qfullmsk == 0 &&
     (VAR_4 = FUNC_4(&VAR_2->sc_snd)) != ((void*)0)) {
  VAR_3 = (struct ieee80211_node *)VAR_4->m_pkthdr.rcvif;
  if (FUNC_5(VAR_2, VAR_4, VAR_3) != 0) {
   FUNC_3(VAR_3->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_2(VAR_3);
   continue;
  }
  VAR_2->sc_tx_timer = 5;
 }
}
