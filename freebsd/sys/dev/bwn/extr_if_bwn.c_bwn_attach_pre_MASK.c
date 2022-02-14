
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; int sc_tq; int sc_snd; int sc_mtx; int sc_watchdog_ch; int sc_task_ch; int sc_rfswitch_ch; int sc_maclist; } ;


 int FUNC_0 (struct bwn_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int ,int ,int *) ;
 int FUNC_6 (int *,int,int ,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct bwn_softc *VAR_4)
{

 FUNC_0(VAR_4);
 FUNC_1(&VAR_4->sc_maclist);
 FUNC_2(&VAR_4->sc_rfswitch_ch, &VAR_4->sc_mtx, 0);
 FUNC_2(&VAR_4->sc_task_ch, &VAR_4->sc_mtx, 0);
 FUNC_2(&VAR_4->sc_watchdog_ch, &VAR_4->sc_mtx, 0);
 FUNC_4(&VAR_4->sc_snd, VAR_2);
 VAR_4->sc_tq = FUNC_5("bwn_taskq", VAR_0,
  VAR_3, &VAR_4->sc_tq);
 FUNC_6(&VAR_4->sc_tq, 1, VAR_1,
  "%s taskq", FUNC_3(VAR_4->sc_dev));
}
