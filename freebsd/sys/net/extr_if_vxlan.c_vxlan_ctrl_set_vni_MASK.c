
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_vni; } ;
struct ifvxlancmd {int vxlcmd_vni; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 scalar_t__ FUNC_2 (struct vxlan_softc*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct vxlan_softc *VAR_2, void *VAR_3)
{
 struct ifvxlancmd *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3;

 if (FUNC_3(VAR_4->vxlcmd_vni) != 0)
  return (VAR_1);

 FUNC_0(VAR_2);
 if (FUNC_2(VAR_2)) {
  VAR_2->vxl_vni = VAR_4->vxlcmd_vni;
  VAR_5 = 0;
 } else
  VAR_5 = VAR_0;
 FUNC_1(VAR_2);

 return (VAR_5);
}
