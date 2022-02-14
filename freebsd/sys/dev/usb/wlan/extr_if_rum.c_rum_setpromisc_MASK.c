
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_promisc; } ;
struct rum_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rum_softc*,int ,int ) ;
 int FUNC_2 (struct rum_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct rum_softc *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 if (VAR_3->ic_promisc == 0)
  FUNC_2(VAR_2, VAR_1, VAR_0);
 else
  FUNC_1(VAR_2, VAR_1, VAR_0);

 FUNC_0("%s promiscuous mode\n", VAR_3->ic_promisc > 0 ?
     "entering" : "leaving");
}
