
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_flags; int vxl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct vxlan_softc*,int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct vxlan_softc *VAR_2)
{

 FUNC_0(VAR_2);
 while (VAR_2->vxl_flags & VAR_0)
  FUNC_1(VAR_2, &VAR_2->vxl_lock, 0, "vxltrn", VAR_1);
}
