
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_vap {int (* newstate ) (struct ieee80211vap*,int,int) ;} ;
struct upgt_softc {int sc_state; int sc_watchdog_ch; int sc_led_ch; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; struct upgt_softc* ic_softc; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int FUNC_0 (struct ieee80211com*) ;





 int FUNC_1 (struct ieee80211com*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct upgt_softc*) ;
 int FUNC_3 (struct upgt_softc*) ;
 struct upgt_vap* FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211vap*,int,int) ;
 int FUNC_7 (struct upgt_softc*,int ) ;
 int FUNC_8 (struct upgt_softc*,int ) ;
 int FUNC_9 (struct upgt_softc*,int) ;

__attribute__((used)) static int
FUNC_10(struct ieee80211vap *VAR_2, enum ieee80211_state VAR_3, int VAR_4)
{
 struct upgt_vap *VAR_5 = FUNC_4(VAR_2);
 struct ieee80211com *VAR_6 = VAR_2->iv_ic;
 struct upgt_softc *VAR_7 = VAR_6->ic_softc;


 VAR_7->sc_state = VAR_3;

 FUNC_1(VAR_6);
 FUNC_2(VAR_7);
 FUNC_5(&VAR_7->sc_led_ch);
 FUNC_5(&VAR_7->sc_watchdog_ch);

 switch (VAR_3) {
 case 130:

  (void)FUNC_9(VAR_7, VAR_7->sc_state);
  FUNC_8(VAR_7, VAR_0);
  break;
 case 128:
  FUNC_7(VAR_7, VAR_6->ic_curchan);
  break;
 case 131:
  FUNC_7(VAR_7, VAR_6->ic_curchan);
  break;
 case 132:
  break;
 case 129:
  FUNC_9(VAR_7, VAR_7->sc_state);
  FUNC_8(VAR_7, VAR_1);
  break;
 default:
  break;
 }
 FUNC_3(VAR_7);
 FUNC_0(VAR_6);
 return (VAR_5->newstate(VAR_2, VAR_3, VAR_4));
}
