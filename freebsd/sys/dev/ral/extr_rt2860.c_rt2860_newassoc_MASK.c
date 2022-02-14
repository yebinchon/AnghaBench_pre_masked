
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct rt2860_softc {struct ieee80211_node** wcid2ni; } ;
struct ieee80211com {struct rt2860_softc* ic_softc; } ;
struct ieee80211_node {scalar_t__ ni_associd; int ni_macaddr; struct ieee80211com* ni_ic; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rt2860_softc*,int ,int ,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_node *VAR_1, int VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->ni_ic;
 struct rt2860_softc *VAR_4 = VAR_3->ic_softc;
 uint8_t VAR_5;

 VAR_5 = FUNC_1(VAR_1->ni_associd);
 if (VAR_2 && VAR_1->ni_associd != 0) {
  VAR_4->wcid2ni[VAR_5] = VAR_1;


  FUNC_2(VAR_4, FUNC_3(VAR_5),
      VAR_1->ni_macaddr, VAR_0);
 }
 FUNC_0(("new assoc isnew=%d addr=%s WCID=%d\n",
     VAR_2, FUNC_4(VAR_1->ni_macaddr), VAR_5));
}
