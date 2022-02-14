
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct run_softc {int sc_flags; int sc_snd; } ;
struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct run_softc*,int ) ;
 int VAR_1 ;
 struct mbuf* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mbuf*) ;
 scalar_t__ FUNC_3 (struct run_softc*,struct mbuf*,struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_4(struct run_softc *VAR_2)
{
 struct ieee80211_node *VAR_3;
 struct mbuf *VAR_4;

 FUNC_0(VAR_2, VAR_0);

 if ((VAR_2->sc_flags & VAR_1) == 0)
  return;

 while ((VAR_4 = FUNC_1(&VAR_2->sc_snd)) != ((void*)0)) {
  VAR_3 = (struct ieee80211_node *)VAR_4->m_pkthdr.rcvif;
  if (FUNC_3(VAR_2, VAR_4, VAR_3) != 0) {
   FUNC_2(&VAR_2->sc_snd, VAR_4);
   break;
  }
 }
}
