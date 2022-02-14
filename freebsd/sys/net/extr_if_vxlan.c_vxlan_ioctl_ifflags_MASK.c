
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {struct ifnet* vxl_ifp; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_2(struct vxlan_softc *VAR_2)
{
 struct ifnet *VAR_3;

 VAR_3 = VAR_2->vxl_ifp;

 if (VAR_3->if_flags & VAR_1) {
  if ((VAR_3->if_drv_flags & VAR_0) == 0)
   FUNC_0(VAR_2);
 } else {
  if (VAR_3->if_drv_flags & VAR_0)
   FUNC_1(VAR_2);
 }

 return (0);
}
