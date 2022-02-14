
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct vxlan_softc {scalar_t__ vxl_max_port; scalar_t__ vxl_min_port; } ;
struct ifvxlancmd {scalar_t__ vxlcmd_port_min; scalar_t__ vxlcmd_port_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 scalar_t__ FUNC_2 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_3(struct vxlan_softc *VAR_2, void *VAR_3)
{
 struct ifvxlancmd *VAR_4;
 uint16_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_3;
 VAR_5 = VAR_4->vxlcmd_port_min;
 VAR_6 = VAR_4->vxlcmd_port_max;

 if (VAR_6 < VAR_5)
  return (VAR_1);

 FUNC_0(VAR_2);
 if (FUNC_2(VAR_2)) {
  VAR_2->vxl_min_port = VAR_5;
  VAR_2->vxl_max_port = VAR_6;
  VAR_7 = 0;
 } else
  VAR_7 = VAR_0;
 FUNC_1(VAR_2);

 return (VAR_7);
}
