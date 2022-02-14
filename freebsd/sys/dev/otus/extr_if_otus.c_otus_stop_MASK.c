
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {scalar_t__ sc_running; int tx_task; int calib_to; int scan_to; scalar_t__ sc_tx_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct otus_softc*) ;
 int FUNC_1 (struct otus_softc*) ;
 int FUNC_2 (struct otus_softc*) ;
 int FUNC_3 (struct otus_softc*) ;
 int FUNC_4 (struct otus_softc*,int ,int ) ;
 int FUNC_5 (struct otus_softc*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;

void
FUNC_8(struct otus_softc *VAR_2)
{




 FUNC_2(VAR_2);

 FUNC_0(VAR_2);
 VAR_2->sc_running = 0;
 VAR_2->sc_tx_timer = 0;
 FUNC_1(VAR_2);

 FUNC_7(VAR_1, &VAR_2->scan_to);
 FUNC_7(VAR_1, &VAR_2->calib_to);
 FUNC_6(VAR_1, &VAR_2->tx_task);

 FUNC_0(VAR_2);
 VAR_2->sc_running = 0;

 FUNC_4(VAR_2, VAR_0, 0);
 (void)FUNC_5(VAR_2);


 FUNC_3(VAR_2);

 FUNC_1(VAR_2);
}
