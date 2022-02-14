
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sysfs_dirent* target_sd; } ;
struct sysfs_dirent {TYPE_1__ s_symlink; struct sysfs_dirent* s_parent; } ;
struct dentry {struct sysfs_dirent* d_fsdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sysfs_dirent*,struct sysfs_dirent*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1, char * VAR_2)
{
 struct sysfs_dirent *VAR_3 = VAR_1->d_fsdata;
 struct sysfs_dirent *VAR_4 = VAR_3->s_parent;
 struct sysfs_dirent *VAR_5 = VAR_3->s_symlink.target_sd;
 int VAR_6;

 FUNC_0(&VAR_0);
 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2);
 FUNC_1(&VAR_0);

 return VAR_6;
}
