
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwi_softc {int sc_flags; int sc_nmac; int sc_watchdog_timer; scalar_t__ sc_tx_timer; struct bwi_mac* sc_mac; TYPE_1__* sc_cur_regwin; scalar_t__ sc_led_blinking; int sc_led_blink_ch; int sc_calib_ch; } ;
struct bwi_regwin {int dummy; } ;
struct bwi_mac {int mac_flags; struct bwi_regwin mac_regwin; } ;
struct TYPE_2__ {scalar_t__ rw_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bwi_softc*) ;
 int FUNC_4 (struct bwi_softc*,int ) ;
 int FUNC_5 (struct bwi_mac*) ;
 int FUNC_6 (struct bwi_mac*) ;
 int FUNC_7 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bwi_softc *VAR_6, int VAR_7)
{
 struct bwi_mac *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;

 FUNC_0(VAR_6);

 FUNC_8(&VAR_6->sc_calib_ch);
 FUNC_8(&VAR_6->sc_led_blink_ch);
 VAR_6->sc_led_blinking = 0;
 VAR_6->sc_flags |= VAR_2;

 if (VAR_6->sc_flags & VAR_1) {
  FUNC_2(VAR_6->sc_cur_regwin->rw_type == VAR_5,
      ("current regwin type %d", VAR_6->sc_cur_regwin->rw_type));
  VAR_8 = (struct bwi_mac *)VAR_6->sc_cur_regwin;

  FUNC_4(VAR_6, VAR_0);
  FUNC_1(VAR_6, VAR_4);
  FUNC_6(VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->sc_nmac; ++VAR_9) {
  struct bwi_regwin *VAR_12;

  VAR_8 = &VAR_6->sc_mac[VAR_9];
  if ((VAR_8->mac_flags & VAR_3) == 0)
   continue;

  VAR_10 = FUNC_7(VAR_6, &VAR_8->mac_regwin, &VAR_12);
  if (VAR_10)
   continue;

  FUNC_5(VAR_8);
  VAR_11 = 1;

  FUNC_7(VAR_6, VAR_12, ((void*)0));
 }

 if (VAR_11)
  FUNC_3(VAR_6);

 VAR_6->sc_tx_timer = 0;
 FUNC_8(&VAR_6->sc_watchdog_timer);
 VAR_6->sc_flags &= ~VAR_1;
}
