
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct gx_softc {struct ifnet* sc_ifp; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1)
{
 struct ifnet *VAR_2;
 struct gx_softc *VAR_3;

 VAR_3 = VAR_1;
 VAR_2 = VAR_3->sc_ifp;

 if ((VAR_2->if_drv_flags & VAR_0) != 0)
  VAR_2->if_drv_flags &= ~VAR_0;

 VAR_2->if_drv_flags |= VAR_0;
}
