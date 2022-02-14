
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {int ic_curmode; } ;
struct bwn_softc {int sc_flags; struct bwn_led* sc_leds; scalar_t__ sc_led_blinking; int sc_led_blink_ch; struct ieee80211com sc_ic; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;
struct bwn_led {int led_act; int led_flags; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int VAR_8 ;


 int FUNC_2 (struct bwn_led*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_9, enum ieee80211_state VAR_10)
{
 struct bwn_softc *VAR_11 = VAR_9->mac_sc;
 struct ieee80211com *VAR_12 = &VAR_11->sc_ic;
 uint16_t VAR_13;
 int VAR_14;

 if (VAR_10 == 129) {
  FUNC_3(&VAR_11->sc_led_blink_ch);
  VAR_11->sc_led_blinking = 0;
 }

 if ((VAR_11->sc_flags & VAR_0) == 0)
  return;

 VAR_13 = FUNC_0(VAR_9, VAR_1);
 for (VAR_14 = 0; VAR_14 < VAR_7; ++VAR_14) {
  struct bwn_led *VAR_15 = &VAR_11->sc_leds[VAR_14];
  int VAR_16;

  if (VAR_15->led_act == VAR_5 ||
      VAR_15->led_act == VAR_4)
   continue;

  if ((VAR_15->led_flags & VAR_6) &&
      VAR_10 != 129)
   continue;

  switch (VAR_15->led_act) {
  case 130:
   VAR_16 = 1;
   break;
  case 131:
  case 132:
   VAR_16 = 0;
   break;
  default:
   VAR_16 = 1;
   switch (VAR_10) {
   case 129:
    VAR_16 = 0;
    break;
   case 128:
    if (VAR_15->led_act == VAR_2 &&
        VAR_12->ic_curmode != VAR_8)
     VAR_16 = 0;
    break;
   default:
    if (VAR_15->led_act == VAR_3)
     VAR_16 = 0;
    break;
   }
   break;
  }

  VAR_13 = FUNC_2(VAR_15, VAR_13, VAR_16);
 }
 FUNC_1(VAR_9, VAR_1, VAR_13);
}
