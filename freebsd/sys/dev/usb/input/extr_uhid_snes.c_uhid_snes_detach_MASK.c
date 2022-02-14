
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_snes_softc {int sc_mutex; int sc_watchdog; int sc_transfer; int sc_fifo_no_reset; int sc_fifo; } ;
typedef int device_t ;


 int VAR_0 ;
 struct uhid_snes_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct uhid_snes_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_6(&VAR_2->sc_fifo);
 FUNC_6(&VAR_2->sc_fifo_no_reset);

 FUNC_2(&VAR_2->sc_mutex);
 FUNC_5(&VAR_2->sc_watchdog);
 FUNC_3(&VAR_2->sc_mutex);

 FUNC_7(VAR_2->sc_transfer, VAR_0);
 FUNC_4(&VAR_2->sc_watchdog);
 FUNC_1(&VAR_2->sc_mutex);

 return (0);
}
