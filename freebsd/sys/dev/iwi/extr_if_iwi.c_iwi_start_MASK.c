
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct iwi_softc {int sc_tx_timer; int sc_snd; TYPE_1__* txq; } ;
struct ieee80211_node {TYPE_3__* ni_vap; } ;
struct TYPE_6__ {int iv_ifp; } ;
struct TYPE_4__ {int queued; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwi_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct iwi_softc*,struct mbuf*,struct ieee80211_node*,int) ;
 struct mbuf* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct mbuf*) ;

__attribute__((used)) static void
FUNC_7(struct iwi_softc *VAR_2)
{
 struct mbuf *VAR_3;
 struct ieee80211_node *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2);

 while ((VAR_3 = FUNC_5(&VAR_2->sc_snd)) != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_2->txq[VAR_5].queued > VAR_1 - 8) {


   FUNC_6(&VAR_2->sc_snd, VAR_3);
   break;
  }
  VAR_4 = (struct ieee80211_node *) VAR_3->m_pkthdr.rcvif;
  if (FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5) != 0) {
   FUNC_3(VAR_4->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_2(VAR_4);
   break;
  }
  VAR_2->sc_tx_timer = 5;
 }
}
