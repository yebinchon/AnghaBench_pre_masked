
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rt2860_softc {int (* sc_node_free ) (struct ieee80211_node*) ;} ;
struct ieee80211com {struct rt2860_softc* ic_softc; } ;
struct ieee80211_node {scalar_t__ ni_associd; struct ieee80211com* ni_ic; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rt2860_softc*,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_node *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->ni_ic;
 struct rt2860_softc *VAR_2 = VAR_1->ic_softc;
 uint8_t VAR_3;

 if (VAR_0->ni_associd != 0) {
  VAR_3 = FUNC_0(VAR_0->ni_associd);


  FUNC_1(VAR_2, FUNC_2(VAR_3), 0, 2);
 }
 VAR_2->sc_node_free(VAR_0);
}
