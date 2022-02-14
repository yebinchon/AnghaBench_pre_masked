
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int queued; } ;
struct rt2560_softc {int sc_tx_timer; int sc_snd; TYPE_2__ txq; } ;
struct TYPE_6__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_3__ m_pkthdr; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_4__ {int iv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2560_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ,int ,int) ;
 struct mbuf* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct rt2560_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_5(struct rt2560_softc *VAR_2)
{
 struct ieee80211_node *VAR_3;
 struct mbuf *VAR_4;

 FUNC_0(VAR_2);

 while (VAR_2->txq.queued < VAR_1 - 1 &&
     (VAR_4 = FUNC_3(&VAR_2->sc_snd)) != ((void*)0)) {
  VAR_3 = (struct ieee80211_node *) VAR_4->m_pkthdr.rcvif;
  if (FUNC_4(VAR_2, VAR_4, VAR_3) != 0) {
   FUNC_2(VAR_3->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_1(VAR_3);
   break;
  }
  VAR_2->sc_tx_timer = 5;
 }
}
