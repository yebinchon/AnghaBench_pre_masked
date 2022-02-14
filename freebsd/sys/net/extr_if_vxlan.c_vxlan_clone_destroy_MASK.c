
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_lock; int vxl_media; } ;
struct ifnet {struct vxlan_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct vxlan_softc*,int ) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vxlan_softc*) ;
 int FUNC_6 (struct vxlan_softc*,int) ;
 int FUNC_7 (struct vxlan_softc*) ;
 int FUNC_8 (struct vxlan_softc*) ;

__attribute__((used)) static void
FUNC_9(struct ifnet *VAR_1)
{
 struct vxlan_softc *VAR_2;

 VAR_2 = VAR_1->if_softc;

 FUNC_8(VAR_2);

 FUNC_6(VAR_2, 1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(&VAR_2->vxl_media);

 FUNC_5(VAR_2);

 FUNC_7(VAR_2);
 FUNC_4(&VAR_2->vxl_lock);
 FUNC_1(VAR_2, VAR_0);
}
