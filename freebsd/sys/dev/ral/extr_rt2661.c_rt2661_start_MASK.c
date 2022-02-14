
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt2661_softc {int sc_flags; int sc_tx_timer; int sc_snd; TYPE_1__* txq; scalar_t__ sc_invalid; } ;
struct TYPE_5__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ieee80211_node {TYPE_3__* ni_vap; } ;
struct TYPE_6__ {int iv_ifp; } ;
struct TYPE_4__ {int queued; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct rt2661_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int ,int ,int) ;
 struct mbuf* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 scalar_t__ FUNC_6 (struct rt2661_softc*,struct mbuf*,struct ieee80211_node*,int) ;

__attribute__((used)) static void
FUNC_7(struct rt2661_softc *VAR_3)
{
 struct mbuf *VAR_4;
 struct ieee80211_node *VAR_5;
 int VAR_6;

 FUNC_1(VAR_3);


 if (!(VAR_3->sc_flags & VAR_1) || VAR_3->sc_invalid)
  return;

 while ((VAR_4 = FUNC_4(&VAR_3->sc_snd)) != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_3->txq[VAR_6].queued >= VAR_2 - 1) {

   FUNC_5(&VAR_3->sc_snd, VAR_4);
   break;
  }
  VAR_5 = (struct ieee80211_node *) VAR_4->m_pkthdr.rcvif;
  if (FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6) != 0) {
   FUNC_3(VAR_5->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_2(VAR_5);
   break;
  }
  VAR_3->sc_tx_timer = 5;
 }
}
