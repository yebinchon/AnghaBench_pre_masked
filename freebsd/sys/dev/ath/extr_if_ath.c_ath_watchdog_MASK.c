
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_oerrors; } ;
struct TYPE_2__ {int ast_watchdog; } ;
struct ath_softc {scalar_t__ sc_wd_timer; int sc_wd_ch; int sc_resettask; int sc_tq; TYPE_1__ sc_stats; int sc_dev; int sc_ah; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ath_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int,int*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_2;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 int VAR_5 = 0;

 FUNC_0(VAR_3);

 if (VAR_3->sc_wd_timer != 0 && --VAR_3->sc_wd_timer == 0) {
  uint32_t VAR_6;

  FUNC_3(VAR_3, VAR_0);

  if (FUNC_1(VAR_3->sc_ah, 0xffff, &VAR_6) &&
      VAR_6 != 0) {
   FUNC_6(VAR_3->sc_dev, "%s hang detected (0x%x)\n",
       VAR_6 & 0xff ? "bb" : "mac", VAR_6);
  } else
   FUNC_6(VAR_3->sc_dev, "device timeout\n");
  VAR_5 = 1;
  FUNC_5(VAR_4->ic_oerrors, 1);
  VAR_3->sc_stats.ast_watchdog++;

  FUNC_2(VAR_3);
 }







 if (VAR_5) {
  FUNC_7(VAR_3->sc_tq, &VAR_3->sc_resettask);
 }

 FUNC_4(&VAR_3->sc_wd_ch, VAR_1);
}
