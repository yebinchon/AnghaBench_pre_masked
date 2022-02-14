
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_flags; int vxl_vso_mc_index; scalar_t__ vxl_refcnt; int vxl_callout; int vxl_lock; struct vxlan_socket* vxl_sock; struct ifnet* vxl_ifp; } ;
struct vxlan_socket {int dummy; } ;
struct ifnet {int if_drv_flags; int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct vxlan_softc*) ;
 int FUNC_2 (struct vxlan_softc*) ;
 int FUNC_3 (struct vxlan_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (struct ifnet*,int ) ;
 int FUNC_7 (struct vxlan_softc*,int *,int ,char*,int ) ;
 int FUNC_8 (struct vxlan_softc*) ;
 int FUNC_9 (struct vxlan_socket*,int) ;
 int FUNC_10 (struct vxlan_socket*) ;
 int FUNC_11 (struct vxlan_socket*,struct vxlan_softc*) ;
 int FUNC_12 (struct vxlan_softc*) ;

__attribute__((used)) static void
FUNC_13(struct vxlan_softc *VAR_5)
{
 struct ifnet *VAR_6;
 struct vxlan_socket *VAR_7;

 VAR_6 = VAR_5->vxl_ifp;

 FUNC_1(VAR_5);
 FUNC_0(VAR_5->vxl_flags & VAR_3);

 VAR_6->if_flags &= ~VAR_1;
 VAR_6->if_drv_flags &= ~VAR_0;
 FUNC_5(&VAR_5->vxl_callout);
 VAR_7 = VAR_5->vxl_sock;
 VAR_5->vxl_sock = ((void*)0);

 FUNC_3(VAR_5);
 FUNC_6(VAR_6, VAR_2);

 if (VAR_7 != ((void*)0)) {
  FUNC_11(VAR_7, VAR_5);

  if (VAR_5->vxl_vso_mc_index != -1) {
   FUNC_9(VAR_7,
       VAR_5->vxl_vso_mc_index);
   VAR_5->vxl_vso_mc_index = -1;
  }
 }

 FUNC_2(VAR_5);
 while (VAR_5->vxl_refcnt != 0)
  FUNC_7(VAR_5, &VAR_5->vxl_lock, 0, "vxldrn", VAR_4);
 FUNC_3(VAR_5);

 FUNC_4(&VAR_5->vxl_callout);

 FUNC_8(VAR_5);
 if (VAR_7 != ((void*)0))
  FUNC_10(VAR_7);

 FUNC_12(VAR_5);
}
