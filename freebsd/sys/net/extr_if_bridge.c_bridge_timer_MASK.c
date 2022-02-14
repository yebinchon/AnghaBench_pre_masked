
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bridge_softc {int sc_brcallout; TYPE_1__* sc_ifp; } ;
struct TYPE_2__ {int if_drv_flags; int if_vnet; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bridge_softc*) ;
 int FUNC_4 (int *,int,void (*) (void*),struct bridge_softc*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct bridge_softc *VAR_4 = VAR_3;

 FUNC_0(VAR_4);


 FUNC_2(VAR_4->sc_ifp->if_vnet);
 FUNC_3(VAR_4);

 if (VAR_4->sc_ifp->if_drv_flags & VAR_0)
  FUNC_4(&VAR_4->sc_brcallout,
      VAR_1 * VAR_2, FUNC_5, VAR_4);
 FUNC_1();
}
