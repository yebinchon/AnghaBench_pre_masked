
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sysfs_dirent* removed_list; } ;
struct sysfs_dirent {int s_flags; TYPE_1__ u; } ;
struct sysfs_addrm_cxt {int cnt; scalar_t__ parent_inode; struct sysfs_dirent* removed; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sysfs_dirent*) ;
 int FUNC_3 (struct sysfs_dirent*) ;

void FUNC_4(struct sysfs_addrm_cxt *VAR_2, struct sysfs_dirent *VAR_3)
{
 FUNC_0(VAR_3->s_flags & VAR_1);

 FUNC_3(VAR_3);

 VAR_3->s_flags |= VAR_1;
 VAR_3->u.removed_list = VAR_2->removed;
 VAR_2->removed = VAR_3;

 if (FUNC_2(VAR_3) == VAR_0 && VAR_2->parent_inode)
  FUNC_1(VAR_2->parent_inode);

 VAR_2->cnt++;
}
