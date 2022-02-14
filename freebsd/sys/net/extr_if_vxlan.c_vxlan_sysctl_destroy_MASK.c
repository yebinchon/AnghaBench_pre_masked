
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int * vxl_sysctl_node; int vxl_sysctl_ctx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct vxlan_softc *VAR_0)
{

 FUNC_0(&VAR_0->vxl_sysctl_ctx);
 VAR_0->vxl_sysctl_node = ((void*)0);
}
