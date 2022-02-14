
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpt_softc {int sc_mtx; int sc_watchdog; int sc_xfer; int sc_fifo_noreset; int sc_fifo; } ;
typedef int device_t ;


 int FUNC_0 (char*,struct ulpt_softc*) ;
 int VAR_0 ;
 struct ulpt_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 struct ulpt_softc *VAR_2 = FUNC_1(VAR_1);

 FUNC_0("sc=%p\n", VAR_2);

 FUNC_7(&VAR_2->sc_fifo);
 FUNC_7(&VAR_2->sc_fifo_noreset);

 FUNC_3(&VAR_2->sc_mtx);
 FUNC_6(&VAR_2->sc_watchdog);
 FUNC_4(&VAR_2->sc_mtx);

 FUNC_8(VAR_2->sc_xfer, VAR_0);
 FUNC_5(&VAR_2->sc_watchdog);
 FUNC_2(&VAR_2->sc_mtx);

 return (0);
}
