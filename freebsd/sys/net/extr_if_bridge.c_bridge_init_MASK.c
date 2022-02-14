
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct bridge_softc {int sc_stp; int sc_brcallout; struct ifnet* sc_ifp; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 (struct bridge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,struct bridge_softc*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct bridge_softc *VAR_5 = (struct bridge_softc *)VAR_4;
 struct ifnet *VAR_6 = VAR_5->sc_ifp;

 if (VAR_6->if_drv_flags & VAR_0)
  return;

 FUNC_0(VAR_5);
 FUNC_3(&VAR_5->sc_brcallout, VAR_1 * VAR_3,
     VAR_2, VAR_5);

 VAR_6->if_drv_flags |= VAR_0;
 FUNC_2(&VAR_5->sc_stp);

 FUNC_1(VAR_5);
}
