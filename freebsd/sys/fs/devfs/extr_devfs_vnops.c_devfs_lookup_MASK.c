
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_lookup_args {TYPE_1__* a_dvp; } ;
struct devfs_mount {int dm_lock; } ;
struct TYPE_2__ {int v_mount; } ;


 int VAR_0 ;
 struct devfs_mount* FUNC_0 (int ) ;
 int FUNC_1 (struct vop_lookup_args*,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct vop_lookup_args *VAR_1)
{
 int VAR_2;
 struct devfs_mount *VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_1->a_dvp) != 0)
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_1->a_dvp->v_mount);
 VAR_4 = 1;
 VAR_2 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_4 == 1)
  FUNC_3(&VAR_3->dm_lock);
 return (VAR_2);
}
