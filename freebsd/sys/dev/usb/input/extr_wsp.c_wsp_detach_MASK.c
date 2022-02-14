
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_softc {int sc_state; int sc_mutex; int sc_xfer; int sc_fifo; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct wsp_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wsp_softc*) ;
 int FUNC_7 (struct wsp_softc*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct wsp_softc *VAR_3 = FUNC_0(VAR_2);

 (void) FUNC_7(VAR_3, 0);

 FUNC_2(&VAR_3->sc_mutex);
 if (VAR_3->sc_state & VAR_0)
  FUNC_6(VAR_3);
 FUNC_3(&VAR_3->sc_mutex);

 FUNC_4(&VAR_3->sc_fifo);

 FUNC_5(VAR_3->sc_xfer, VAR_1);

 FUNC_1(&VAR_3->sc_mutex);

 return (0);
}
