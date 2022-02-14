
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sysfs_dirent* removed_list; } ;
struct sysfs_dirent {TYPE_1__ u; } ;
struct sysfs_addrm_cxt {struct sysfs_dirent* removed; scalar_t__ cnt; struct inode* parent_inode; } ;
struct inode {int i_mutex; int i_mtime; int i_ctime; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sysfs_dirent*) ;
 int FUNC_3 (struct sysfs_dirent*) ;
 int VAR_1 ;
 int FUNC_4 (struct sysfs_dirent*) ;
 int FUNC_5 (struct sysfs_dirent*) ;

void FUNC_6(struct sysfs_addrm_cxt *VAR_2)
{

 FUNC_1(&VAR_1);
 if (VAR_2->parent_inode) {
  struct inode *VAR_3 = VAR_2->parent_inode;


  if (VAR_2->cnt)
   VAR_3->i_ctime = VAR_3->i_mtime = VAR_0;

  FUNC_1(&VAR_3->i_mutex);
  FUNC_0(VAR_3);
 }


 while (VAR_2->removed) {
  struct sysfs_dirent *VAR_4 = VAR_2->removed;

  VAR_2->removed = VAR_4->u.removed_list;

  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
 }
}
