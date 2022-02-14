
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {scalar_t__ sc_watchdog_timer; int sc_watchdog_ch; int sc_task_ch; int sc_rfswitch_ch; } ;
struct bwn_mac {scalar_t__ mac_status; struct bwn_softc* mac_sc; } ;


 int FUNC_0 (struct bwn_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;

 FUNC_0(VAR_4);

 if (VAR_3->mac_status < VAR_2)
  return;

 FUNC_4(&VAR_4->sc_rfswitch_ch);
 FUNC_4(&VAR_4->sc_task_ch);
 FUNC_4(&VAR_4->sc_watchdog_ch);
 VAR_4->sc_watchdog_timer = 0;
 FUNC_2(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, VAR_0);
 FUNC_3(VAR_3);

 VAR_3->mac_status = VAR_1;
}
