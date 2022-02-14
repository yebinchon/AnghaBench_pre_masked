
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_ftable_cnt; } ;
struct vxlan_ftable_entry {int dummy; } ;


 int FUNC_0 (struct vxlan_ftable_entry*,int ) ;
 int FUNC_1 (struct vxlan_ftable_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct vxlan_softc *VAR_1,
    struct vxlan_ftable_entry *VAR_2)
{

 VAR_1->vxl_ftable_cnt--;
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2);
}
