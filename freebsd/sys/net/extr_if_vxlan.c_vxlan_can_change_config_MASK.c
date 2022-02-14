
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_flags; struct ifnet* vxl_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_1(struct vxlan_softc *VAR_3)
{
 struct ifnet *VAR_4;

 VAR_4 = VAR_3->vxl_ifp;
 FUNC_0(VAR_3);

 if (VAR_4->if_drv_flags & VAR_0)
  return (0);
 if (VAR_3->vxl_flags & (VAR_1 | VAR_2))
  return (0);

 return (1);
}
