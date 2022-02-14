
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int sc_led_blinking; int sc_led_blink_offdur; int sc_led_blink_ch; struct bwi_led* sc_blink_led; } ;
struct bwi_led {int l_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct bwi_led*,int ,int) ;
 int FUNC_4 (int *,int,int ,struct bwi_softc*) ;

__attribute__((used)) static void
FUNC_5(struct bwi_softc *VAR_3, int VAR_4, int VAR_5)
{
 struct bwi_led *VAR_6 = VAR_3->sc_blink_led;
 uint16_t VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 VAR_7 = FUNC_3(VAR_6, VAR_7, 1);
 FUNC_2(VAR_3, VAR_1, VAR_7);

 if (VAR_6->l_flags & VAR_0) {
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
 }

 VAR_3->sc_led_blinking = 1;
 VAR_3->sc_led_blink_offdur = VAR_5;

 FUNC_4(&VAR_3->sc_led_blink_ch, VAR_4, VAR_2, VAR_3);
}
