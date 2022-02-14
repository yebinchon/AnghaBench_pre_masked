
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_mc_ifname; } ;
struct ifvxlancmd {int vxlcmd_ifname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_4(struct vxlan_softc * VAR_2, void *VAR_3)
{
 struct ifvxlancmd *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3;

 FUNC_0(VAR_2);
 if (FUNC_3(VAR_2)) {
  FUNC_2(VAR_2->vxl_mc_ifname, VAR_4->vxlcmd_ifname, VAR_1);
  VAR_5 = 0;
 } else
  VAR_5 = VAR_0;
 FUNC_1(VAR_2);

 return (VAR_5);
}
