
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_dirent {int s_name; struct sysfs_dirent* s_parent; } ;
struct dentry {TYPE_1__* d_inode; struct sysfs_dirent* d_fsdata; } ;
struct TYPE_4__ {int s_root; } ;
struct TYPE_3__ {int i_mutex; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ,struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* VAR_0 ;

struct dentry *FUNC_6(struct sysfs_dirent *VAR_1)
{
 struct dentry *VAR_2 = FUNC_1(VAR_0->s_root);

 while (VAR_2->d_fsdata != VAR_1) {
  struct sysfs_dirent *VAR_3;
  struct dentry *VAR_4;


  VAR_3 = VAR_1;
  while (VAR_3->s_parent != VAR_2->d_fsdata)
   VAR_3 = VAR_3->s_parent;


  VAR_4 = VAR_2;
  FUNC_4(&VAR_4->d_inode->i_mutex);
  VAR_2 = FUNC_3(VAR_3->s_name, VAR_4);
  FUNC_5(&VAR_4->d_inode->i_mutex);
  FUNC_2(VAR_4);

  if (FUNC_0(VAR_2))
   break;
 }
 return VAR_2;
}
