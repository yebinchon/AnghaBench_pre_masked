
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct iwn_softc {int sc_xmit_queue; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct iwn_softc *VAR_0)
{
 struct mbuf *VAR_1;
 struct ieee80211_node *VAR_2;

 FUNC_0(VAR_0);
 while ((VAR_1 = FUNC_3(&VAR_0->sc_xmit_queue)) != ((void*)0)) {
  VAR_2 = (struct ieee80211_node *)VAR_1->m_pkthdr.rcvif;
  FUNC_1(VAR_2);
  FUNC_2(VAR_1);
 }
}
