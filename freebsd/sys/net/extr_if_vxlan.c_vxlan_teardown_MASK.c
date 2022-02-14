
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 int FUNC_2 (struct vxlan_softc*) ;
 int FUNC_3 (struct vxlan_softc*) ;

__attribute__((used)) static void
FUNC_4(struct vxlan_softc *VAR_1)
{

 FUNC_0(VAR_1);
 if (VAR_1->vxl_flags & VAR_0) {
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  return;
 }

 VAR_1->vxl_flags |= VAR_0;
 FUNC_2(VAR_1);
}
