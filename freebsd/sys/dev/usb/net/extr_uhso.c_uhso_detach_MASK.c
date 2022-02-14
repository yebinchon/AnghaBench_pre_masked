
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uhso_softc {int sc_ttys; int sc_if_xfer; int sc_mtx; TYPE_2__* sc_ifp; int sc_c; TYPE_1__* sc_tty; int sc_ucom; int sc_super_ucom; int sc_ctrl_xfer; int sc_xfer; } ;
typedef int device_t ;
struct TYPE_6__ {int if_dunit; } ;
struct TYPE_5__ {int ht_muxport; int ht_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct uhso_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct uhso_softc*) ;
 int FUNC_11 (struct uhso_softc*) ;
 int VAR_2 ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_3)
{
 struct uhso_softc *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 FUNC_12(VAR_4->sc_xfer, 3);
 FUNC_12(VAR_4->sc_ctrl_xfer, VAR_0);
 if (VAR_4->sc_ttys > 0) {
  FUNC_9(&VAR_4->sc_super_ucom, VAR_4->sc_ucom);

  for (VAR_5 = 0; VAR_5 < VAR_4->sc_ttys; VAR_5++) {
   if (VAR_4->sc_tty[VAR_5].ht_muxport != -1) {
    FUNC_12(VAR_4->sc_tty[VAR_5].ht_xfer,
        VAR_0);
   }
  }
 }

 if (VAR_4->sc_ifp != ((void*)0)) {
  FUNC_1(&VAR_4->sc_c);
  FUNC_4(VAR_2, VAR_4->sc_ifp->if_dunit);
  FUNC_7(&VAR_4->sc_mtx);
  FUNC_11(VAR_4);
  FUNC_0(VAR_4->sc_ifp);
  FUNC_5(VAR_4->sc_ifp);
  FUNC_6(VAR_4->sc_ifp);
  FUNC_8(&VAR_4->sc_mtx);
  FUNC_12(VAR_4->sc_if_xfer, VAR_1);
 }

 FUNC_2(VAR_3);

 FUNC_10(VAR_4);

 return (0);
}
