
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_softc {int sc_led_blinking; int sc_led_blink_offdur; int sc_led_blink_ch; struct bwn_led* sc_blink_led; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;
struct bwn_led {int led_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct bwn_led*,int ,int) ;
 int FUNC_4 (int *,int,int ,struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_3, int VAR_4, int VAR_5)
{
 struct bwn_softc *VAR_6 = VAR_3->mac_sc;
 struct bwn_led *VAR_7 = VAR_6->sc_blink_led;
 uint16_t VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_0);
 VAR_8 = FUNC_3(VAR_7, VAR_8, 1);
 FUNC_2(VAR_3, VAR_0, VAR_8);

 if (VAR_7->led_flags & VAR_1) {
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
 }

 VAR_6->sc_led_blinking = 1;
 VAR_6->sc_led_blink_offdur = VAR_5;

 FUNC_4(&VAR_6->sc_led_blink_ch, VAR_4, VAR_2, VAR_3);
}
