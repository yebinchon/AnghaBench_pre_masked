
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int sc_led_blink_offdur; int sc_led_blink_ch; int sc_blink_led; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,struct bwi_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct bwi_softc *VAR_3 = VAR_2;
 uint16_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 = FUNC_2(VAR_3->sc_blink_led, VAR_4, 0);
 FUNC_1(VAR_3, VAR_0, VAR_4);

 FUNC_3(&VAR_3->sc_led_blink_ch, VAR_3->sc_led_blink_offdur,
     VAR_1, VAR_3);
}
