
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; int ic_oerrors; } ;
struct ipw_softc {scalar_t__ sc_tx_timer; scalar_t__ sc_scan_timer; int flags; int sc_wdtimer; int sc_init_task; int sc_dev; struct ieee80211com sc_ic; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_softc*) ;
 int FUNC_2 (struct ipw_softc*) ;
 int FUNC_3 (struct ipw_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,void (*) (void*),struct ipw_softc*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,char*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(void *VAR_4)
{
 struct ipw_softc *VAR_5 = VAR_4;
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;

 FUNC_2(VAR_5);

 if (VAR_5->sc_tx_timer > 0) {
  if (--VAR_5->sc_tx_timer == 0) {
   FUNC_7(VAR_5->sc_dev, "device timeout\n");
   FUNC_6(VAR_6->ic_oerrors, 1);
   FUNC_9(VAR_3, &VAR_5->sc_init_task);
  }
 }
 if (VAR_5->sc_scan_timer > 0) {
  if (--VAR_5->sc_scan_timer == 0) {
   FUNC_0(3, ("Scan timeout\n"));

   if (VAR_5->flags & VAR_1) {
    FUNC_3(VAR_5);
    FUNC_8(FUNC_4(&VAR_6->ic_vaps));
    FUNC_1(VAR_5);
    VAR_5->flags &= ~VAR_1;
   }
  }
 }
 if (VAR_5->flags & VAR_0)
  FUNC_5(&VAR_5->sc_wdtimer, VAR_2, FUNC_10, VAR_5);
}
