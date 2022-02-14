
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_unit; } ;
typedef int path ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,int,char*,int,char const*) ;

__attribute__((used)) static int
FUNC_2(struct vxlan_softc *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3[64];

 FUNC_1(VAR_3, sizeof(VAR_3), "net.link.vxlan.%d.%s",
     VAR_0->vxl_unit, VAR_1);
 FUNC_0(VAR_3, &VAR_2);

 return (VAR_2);
}
