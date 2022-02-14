
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin_port; } ;
struct TYPE_4__ {TYPE_1__ in4; } ;
struct vxlan_softc {TYPE_2__ vxl_dst_addr; } ;
struct ifvxlancmd {scalar_t__ vxlcmd_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_4(struct vxlan_softc *VAR_2, void *VAR_3)
{
 struct ifvxlancmd *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3;

 if (VAR_4->vxlcmd_port == 0)
  return (VAR_1);

 FUNC_0(VAR_2);
 if (FUNC_3(VAR_2)) {
  VAR_2->vxl_dst_addr.in4.sin_port = FUNC_2(VAR_4->vxlcmd_port);
  VAR_5 = 0;
 } else
  VAR_5 = VAR_0;
 FUNC_1(VAR_2);

 return (VAR_5);
}
