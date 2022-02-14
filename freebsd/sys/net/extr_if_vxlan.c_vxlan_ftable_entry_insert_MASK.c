
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vxlan_softc {int vxl_ftable_cnt; int * vxl_ftable; } ;
struct vxlan_ftable_entry {int vxlfe_mac; } ;


 int VAR_0 ;
 struct vxlan_ftable_entry* FUNC_0 (int *) ;
 int FUNC_1 (struct vxlan_ftable_entry*,struct vxlan_ftable_entry*,int ) ;
 int FUNC_2 (struct vxlan_ftable_entry*,struct vxlan_ftable_entry*,int ) ;
 int FUNC_3 (int *,struct vxlan_ftable_entry*,int ) ;
 struct vxlan_ftable_entry* FUNC_4 (struct vxlan_ftable_entry*,int ) ;
 int FUNC_5 (struct vxlan_softc*) ;
 size_t FUNC_6 (struct vxlan_softc*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(struct vxlan_softc *VAR_2,
    struct vxlan_ftable_entry *VAR_3)
{
 struct vxlan_ftable_entry *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 FUNC_5(VAR_2);
 VAR_5 = FUNC_6(VAR_2, VAR_3->vxlfe_mac);

 VAR_4 = FUNC_0(&VAR_2->vxl_ftable[VAR_5]);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(&VAR_2->vxl_ftable[VAR_5], VAR_3, VAR_1);
  goto out;
 }

 do {
  VAR_6 = FUNC_7(VAR_3->vxlfe_mac, VAR_4->vxlfe_mac);
  if (VAR_6 == 0)
   return (VAR_0);
  if (VAR_6 > 0) {
   FUNC_2(VAR_4, VAR_3, VAR_1);
   goto out;
  } else if (FUNC_4(VAR_4, VAR_1) == ((void*)0)) {
   FUNC_1(VAR_4, VAR_3, VAR_1);
   goto out;
  } else
   VAR_4 = FUNC_4(VAR_4, VAR_1);
 } while (VAR_4 != ((void*)0));

out:
 VAR_2->vxl_ftable_cnt++;

 return (0);
}
