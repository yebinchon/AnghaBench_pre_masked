
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uhso_softc {TYPE_1__* sc_ifp; int * sc_if_xfer; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct uhso_softc *VAR_4)
{

 FUNC_0(VAR_4->sc_if_xfer[VAR_2]);
 FUNC_0(VAR_4->sc_if_xfer[VAR_3]);
 VAR_4->sc_ifp->if_drv_flags &= ~(VAR_1 | VAR_0);
}
