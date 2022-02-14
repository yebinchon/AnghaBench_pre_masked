
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_softc {scalar_t__ sc_running; int calib_to; int scan_timeout; int tx_timeout; } ;


 int FUNC_0 (struct wpi_softc*) ;
 int FUNC_1 (struct wpi_softc*) ;
 int FUNC_2 (struct wpi_softc*) ;
 int FUNC_3 (struct wpi_softc*) ;
 int FUNC_4 (struct wpi_softc*) ;
 int FUNC_5 (struct wpi_softc*) ;
 int FUNC_6 (struct wpi_softc*) ;
 int FUNC_7 (struct wpi_softc*) ;
 int FUNC_8 (struct wpi_softc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wpi_softc*) ;

__attribute__((used)) static void
FUNC_11(struct wpi_softc *VAR_0)
{

 FUNC_0(VAR_0);

 if (VAR_0->sc_running == 0)
  return;

 FUNC_7(VAR_0);
 FUNC_3(VAR_0);
 VAR_0->sc_running = 0;
 FUNC_6(VAR_0);
 FUNC_8(VAR_0);

 FUNC_4(VAR_0);
 FUNC_9(&VAR_0->tx_timeout);
 FUNC_5(VAR_0);

 FUNC_1(VAR_0);
 FUNC_9(&VAR_0->scan_timeout);
 FUNC_9(&VAR_0->calib_to);
 FUNC_2(VAR_0);


 FUNC_10(VAR_0);
}
