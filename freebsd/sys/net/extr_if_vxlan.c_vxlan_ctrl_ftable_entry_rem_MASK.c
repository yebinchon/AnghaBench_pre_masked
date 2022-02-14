
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int dummy; } ;
struct vxlan_ftable_entry {int dummy; } ;
struct ifvxlancmd {int vxlcmd_mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 int FUNC_2 (struct vxlan_softc*,struct vxlan_ftable_entry*) ;
 struct vxlan_ftable_entry* FUNC_3 (struct vxlan_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vxlan_softc *VAR_1, void *VAR_2)
{
 struct ifvxlancmd *VAR_3;
 struct vxlan_ftable_entry *VAR_4;
 int VAR_5;

 VAR_3 = VAR_2;

 FUNC_0(VAR_1);
 VAR_4 = FUNC_3(VAR_1, VAR_3->vxlcmd_mac);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_1, VAR_4);
  VAR_5 = 0;
 } else
  VAR_5 = VAR_0;
 FUNC_1(VAR_1);

 return (VAR_5);
}
