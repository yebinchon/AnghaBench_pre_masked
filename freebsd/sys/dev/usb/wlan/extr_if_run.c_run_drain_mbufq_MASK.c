
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct run_softc {int sc_snd; } ;
struct TYPE_2__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct run_softc*,int ) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct run_softc *VAR_1)
{
 struct mbuf *VAR_2;
 struct ieee80211_node *VAR_3;

 FUNC_0(VAR_1, VAR_0);
 while ((VAR_2 = FUNC_3(&VAR_1->sc_snd)) != ((void*)0)) {
  VAR_3 = (struct ieee80211_node *)VAR_2->m_pkthdr.rcvif;
  VAR_2->m_pkthdr.rcvif = ((void*)0);
  FUNC_1(VAR_3);
  FUNC_2(VAR_2);
 }
}
