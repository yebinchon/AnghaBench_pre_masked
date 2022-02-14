
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_ftable_max; } ;
struct ifvxlancmd {int vxlcmd_ftable_max; } ;


 int VAR_0 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vxlan_softc *VAR_1, void *VAR_2)
{
 struct ifvxlancmd *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2;

 FUNC_0(VAR_1);
 if (FUNC_2(VAR_3->vxlcmd_ftable_max) == 0) {
  VAR_1->vxl_ftable_max = VAR_3->vxlcmd_ftable_max;
  VAR_4 = 0;
 } else
  VAR_4 = VAR_0;
 FUNC_1(VAR_1);

 return (VAR_4);
}
