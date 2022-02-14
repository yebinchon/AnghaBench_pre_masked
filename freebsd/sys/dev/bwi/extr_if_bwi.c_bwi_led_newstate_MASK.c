
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {int ic_curmode; } ;
struct bwi_softc {int sc_flags; struct bwi_led* sc_leds; scalar_t__ sc_led_blinking; int sc_led_blink_ch; struct ieee80211com sc_ic; } ;
struct bwi_led {int l_act; int l_flags; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int VAR_8 ;


 int FUNC_2 (struct bwi_led*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bwi_softc *VAR_9, enum ieee80211_state VAR_10)
{
 struct ieee80211com *VAR_11 = &VAR_9->sc_ic;
 uint16_t VAR_12;
 int VAR_13;

 if (VAR_10 == 129) {
  FUNC_3(&VAR_9->sc_led_blink_ch);
  VAR_9->sc_led_blinking = 0;
 }

 if ((VAR_9->sc_flags & VAR_0) == 0)
  return;

 VAR_12 = FUNC_0(VAR_9, VAR_7);
 for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {
  struct bwi_led *VAR_14 = &VAR_9->sc_leds[VAR_13];
  int VAR_15;

  if (VAR_14->l_act == VAR_4 ||
      VAR_14->l_act == VAR_3)
   continue;

  if ((VAR_14->l_flags & VAR_5) &&
      VAR_10 != 129)
       continue;

  switch (VAR_14->l_act) {
  case 130:
   VAR_15 = 1;
   break;
  case 131:
  case 132:
   VAR_15 = 0;
   break;
  default:
   VAR_15 = 1;
   switch (VAR_10) {
   case 129:
    VAR_15 = 0;
    break;
   case 128:
    if (VAR_14->l_act == VAR_1 &&
        VAR_11->ic_curmode != VAR_8)
     VAR_15 = 0;
    break;
   default:
    if (VAR_14->l_act == VAR_2)
     VAR_15 = 0;
    break;
   }
   break;
  }

  VAR_12 = FUNC_2(VAR_14, VAR_12, VAR_15);
 }
 FUNC_1(VAR_9, VAR_7, VAR_12);
}
