
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc_head {int dummy; } ;
struct vxlan_softc {int vxl_flags; struct ifnet* vxl_mc_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct vxlan_softc_head*,struct vxlan_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vxlan_softc*) ;
 int FUNC_2 (struct vxlan_softc*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct vxlan_softc *VAR_2, struct ifnet *VAR_3,
    struct vxlan_softc_head *VAR_4)
{

 FUNC_1(VAR_2);

 if (VAR_2->vxl_mc_ifp != VAR_3)
  goto out;
 if (VAR_2->vxl_flags & VAR_0)
  goto out;

 VAR_2->vxl_flags |= VAR_0;
 FUNC_0(VAR_4, VAR_2, VAR_1);

out:
 FUNC_2(VAR_2);
}
