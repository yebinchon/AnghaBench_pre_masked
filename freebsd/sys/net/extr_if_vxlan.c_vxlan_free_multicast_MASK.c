
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int * vxl_im6o; int * vxl_im4o; scalar_t__ vxl_mc_ifindex; int * vxl_mc_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct vxlan_softc *VAR_1)
{

 if (VAR_1->vxl_mc_ifp != ((void*)0)) {
  FUNC_1(VAR_1->vxl_mc_ifp);
  VAR_1->vxl_mc_ifp = ((void*)0);
  VAR_1->vxl_mc_ifindex = 0;
 }

 if (VAR_1->vxl_im4o != ((void*)0)) {
  FUNC_0(VAR_1->vxl_im4o, VAR_0);
  VAR_1->vxl_im4o = ((void*)0);
 }

 if (VAR_1->vxl_im6o != ((void*)0)) {
  FUNC_0(VAR_1->vxl_im6o, VAR_0);
  VAR_1->vxl_im6o = ((void*)0);
 }
}
