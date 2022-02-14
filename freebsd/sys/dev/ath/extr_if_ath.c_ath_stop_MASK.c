
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int * sc_rxlink; int sc_invalid; scalar_t__ sc_blinking; int sc_ledon; int sc_ledpin; int sc_ledtimer; scalar_t__ sc_softled; scalar_t__ sc_running; scalar_t__ sc_wd_timer; int sc_wd_ch; TYPE_1__* sc_tx99; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int (* stop ) (TYPE_1__*) ;} ;


 int FUNC_0 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*,int ) ;
 int FUNC_8 (struct ath_softc*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(struct ath_softc *VAR_2)
{
 struct ath_hal *VAR_3 = VAR_2->sc_ah;

 FUNC_0(VAR_2);




 FUNC_7(VAR_2, VAR_1);

 if (VAR_2->sc_running) {
  FUNC_9(&VAR_2->sc_wd_ch);
  VAR_2->sc_wd_timer = 0;
  VAR_2->sc_running = 0;
  if (!VAR_2->sc_invalid) {
   if (VAR_2->sc_softled) {
    FUNC_9(&VAR_2->sc_ledtimer);
    FUNC_3(VAR_3, VAR_2->sc_ledpin,
     !VAR_2->sc_ledon);
    VAR_2->sc_blinking = 0;
   }
   FUNC_4(VAR_3, 0);
  }

  if (!VAR_2->sc_invalid) {
   FUNC_8(VAR_2, 1);
   FUNC_5(VAR_3);
  } else
   VAR_2->sc_rxlink = ((void*)0);
  FUNC_2(VAR_2, VAR_0);
  FUNC_1(VAR_2);
 }


 FUNC_6(VAR_2);
}
