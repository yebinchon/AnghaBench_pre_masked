
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_callout; } ;


 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (struct vxlan_softc*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct vxlan_softc *VAR_3;

 VAR_3 = VAR_2;
 FUNC_0(VAR_3);

 FUNC_2(VAR_3);
 FUNC_1(&VAR_3->vxl_callout, VAR_1 * VAR_0);
}
