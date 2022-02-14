
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_softc {int sc_snd; } ;
struct TYPE_2__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int *) ;

void
FUNC_4(struct rtwn_softc *VAR_0)
{
 struct mbuf *VAR_1;
 struct ieee80211_node *VAR_2;
 FUNC_0(VAR_0);
 while ((VAR_1 = FUNC_3(&VAR_0->sc_snd)) != ((void*)0)) {
  VAR_2 = (struct ieee80211_node *)VAR_1->m_pkthdr.rcvif;
  VAR_1->m_pkthdr.rcvif = ((void*)0);
  FUNC_1(VAR_2);
  FUNC_2(VAR_1);
 }
}
