
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct rum_softc {int dummy; } ;
struct ieee80211vap {int iv_state; int iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct rum_softc* ic_softc; } ;
struct ieee80211_node {int ni_intval; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_3 (int ) ;
 int FUNC_4 (struct rum_softc*,int ,int ) ;
 int FUNC_5 (struct rum_softc*,int ) ;
 int FUNC_6 (struct rum_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211vap *VAR_4, u_long VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_4->iv_ic;
 struct ieee80211_node *VAR_7;
 struct rum_softc *VAR_8 = VAR_6->ic_softc;
 int VAR_9;

 switch (VAR_5) {
 case 131:
 case 129:
 case 128:
  VAR_9 = 0;
  break;
 case 130:
  VAR_7 = FUNC_3(VAR_4->iv_bss);

  FUNC_0(VAR_8);
  VAR_9 = FUNC_5(VAR_8, VAR_7->ni_intval);
  if (VAR_4->iv_state == VAR_1) {

   FUNC_4(VAR_8, VAR_3, VAR_2);
   FUNC_6(VAR_8, VAR_3, VAR_2);
  }

  FUNC_1(VAR_8);

  FUNC_2(VAR_7);
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }

 return (VAR_9);
}
