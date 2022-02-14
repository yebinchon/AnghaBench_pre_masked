
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zyd_softc {scalar_t__ tx_nfree; int sc_snd; } ;
struct TYPE_4__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_3__ {int iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zyd_softc*,int ) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct zyd_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_6(struct zyd_softc *VAR_2)
{
 struct ieee80211_node *VAR_3;
 struct mbuf *VAR_4;

 FUNC_0(VAR_2, VAR_1);

 while (VAR_2->tx_nfree > 0 && (VAR_4 = FUNC_4(&VAR_2->sc_snd)) != ((void*)0)) {
  VAR_3 = (struct ieee80211_node *)VAR_4->m_pkthdr.rcvif;
  if (FUNC_5(VAR_2, VAR_4, VAR_3) != 0) {
   FUNC_3(VAR_4);
   FUNC_2(VAR_3->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_1(VAR_3);
   break;
  }
 }
}
