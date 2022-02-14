
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vte_softc {struct ifnet* vte_ifp; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vte_softc*) ;
 int FUNC_1 (struct vte_softc*) ;
 struct vte_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct vte_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct vte_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->vte_ifp;
 if ((VAR_4->if_flags & VAR_1) != 0) {
  VAR_4->if_drv_flags &= ~VAR_0;
  FUNC_3(VAR_3);
 }
 FUNC_1(VAR_3);

 return (0);
}
