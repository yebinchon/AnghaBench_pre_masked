
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_mc_ifindex; struct ifnet* vxl_mc_ifp; int vxl_mc_ifname; int vxl_ifp; } ;
struct ifnet {int if_flags; int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ifnet*) ;
 struct ifnet* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vxlan_softc *VAR_3)
{
 struct ifnet *VAR_4;

 VAR_4 = FUNC_2(VAR_3->vxl_mc_ifname);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3->vxl_ifp, "multicast interface %s does "
      "not exist\n", VAR_3->vxl_mc_ifname);
  return (VAR_0);
 }

 if ((VAR_4->if_flags & VAR_2) == 0) {
  FUNC_0(VAR_3->vxl_ifp, "interface %s does not support "
       "multicast\n", VAR_3->vxl_mc_ifname);
  FUNC_1(VAR_4);
  return (VAR_1);
 }

 VAR_3->vxl_mc_ifp = VAR_4;
 VAR_3->vxl_mc_ifindex = VAR_4->if_index;

 return (0);
}
