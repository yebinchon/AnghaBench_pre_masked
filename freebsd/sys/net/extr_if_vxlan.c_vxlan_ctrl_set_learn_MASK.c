
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_flags; } ;
struct ifvxlancmd {int vxlcmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_2(struct vxlan_softc *VAR_2, void *VAR_3)
{
 struct ifvxlancmd *VAR_4;

 VAR_4 = VAR_3;

 FUNC_0(VAR_2);
 if (VAR_4->vxlcmd_flags & VAR_0)
  VAR_2->vxl_flags |= VAR_1;
 else
  VAR_2->vxl_flags &= ~VAR_1;
 FUNC_1(VAR_2);

 return (0);
}
