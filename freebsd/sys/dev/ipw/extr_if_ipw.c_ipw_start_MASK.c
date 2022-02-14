
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ipw_softc {scalar_t__ txfree; int sc_tx_timer; int sc_snd; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_3__ {int iv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (struct ipw_softc*,struct mbuf*,struct ieee80211_node*) ;
 struct mbuf* FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ipw_softc *VAR_2)
{
 struct ieee80211_node *VAR_3;
 struct mbuf *VAR_4;

 FUNC_0(VAR_2);

 while (VAR_2->txfree >= 1 + VAR_1 &&
     (VAR_4 = FUNC_4(&VAR_2->sc_snd)) != ((void*)0)) {
  VAR_3 = (struct ieee80211_node *) VAR_4->m_pkthdr.rcvif;
  if (FUNC_3(VAR_2, VAR_4, VAR_3) != 0) {
   FUNC_2(VAR_3->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_1(VAR_3);
   break;
  }

  VAR_2->sc_tx_timer = 5;
 }
}
