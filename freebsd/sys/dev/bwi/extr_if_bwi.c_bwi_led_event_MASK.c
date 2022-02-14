
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwi_softc {scalar_t__ sc_led_ticks; scalar_t__ sc_led_idle; int sc_rx_rate; int sc_tx_rate; scalar_t__ sc_led_blinking; struct bwi_led* sc_blink_led; } ;
struct bwi_led {int l_flags; } ;
struct TYPE_2__ {int off_dur; int on_dur; } ;





 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct bwi_softc *VAR_3, int VAR_4)
{
 struct bwi_led *VAR_5 = VAR_3->sc_blink_led;
 int VAR_6;

 if (VAR_4 == 130) {
  if ((VAR_5->l_flags & VAR_0) == 0)
   return;
  if (VAR_2 - VAR_3->sc_led_ticks < VAR_3->sc_led_idle)
   return;
 }

 VAR_3->sc_led_ticks = VAR_2;
 if (VAR_3->sc_led_blinking)
  return;

 switch (VAR_4) {
 case 129:
  VAR_6 = VAR_3->sc_rx_rate;
  break;
 case 128:
  VAR_6 = VAR_3->sc_tx_rate;
  break;
 case 130:
  VAR_6 = 0;
  break;
 default:
  FUNC_1("unknown LED event %d\n", VAR_4);
  break;
 }
 FUNC_0(VAR_3, VAR_1[VAR_6].on_dur,
     VAR_1[VAR_6].off_dur);
}
