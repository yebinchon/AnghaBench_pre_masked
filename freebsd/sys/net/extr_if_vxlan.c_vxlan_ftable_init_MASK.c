
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_softc {int vxl_ftable_hash_key; int * vxl_ftable; } ;
struct vxlan_ftable_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int * FUNC_2 (int,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct vxlan_softc *VAR_4)
{
 int VAR_5;

 VAR_4->vxl_ftable = FUNC_2(sizeof(struct vxlan_ftable_head) *
     VAR_3, VAR_0, VAR_2 | VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(&VAR_4->vxl_ftable[VAR_5]);
 VAR_4->vxl_ftable_hash_key = FUNC_1();
}
