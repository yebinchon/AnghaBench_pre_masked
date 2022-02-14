
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct iwm_softc {int sc_snd; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct mbuf*) ;
 struct mbuf* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct iwm_softc *VAR_0)
{
 struct mbuf *VAR_1;
 struct ieee80211_node *VAR_2;

 while ((VAR_1 = FUNC_2(&VAR_0->sc_snd)) != ((void*)0)) {
  VAR_2 = (struct ieee80211_node *)VAR_1->m_pkthdr.rcvif;
  FUNC_0(VAR_2);
  FUNC_1(VAR_1);
 }
}
