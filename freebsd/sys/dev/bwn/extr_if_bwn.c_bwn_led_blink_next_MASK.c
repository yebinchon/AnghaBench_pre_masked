
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_softc {int sc_led_blink_offdur; int sc_led_blink_ch; int sc_blink_led; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct bwn_mac *VAR_3 = VAR_2;
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;
 uint16_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = FUNC_2(VAR_4->sc_blink_led, VAR_5, 0);
 FUNC_1(VAR_3, VAR_0, VAR_5);

 FUNC_3(&VAR_4->sc_led_blink_ch, VAR_4->sc_led_blink_offdur,
     VAR_1, VAR_3);
}
