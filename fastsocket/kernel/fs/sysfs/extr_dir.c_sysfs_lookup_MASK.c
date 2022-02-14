
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_dirent {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct dentry {int d_fsdata; int * d_op; TYPE_1__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_4__ {struct sysfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 struct sysfs_dirent* FUNC_5 (struct sysfs_dirent*,int ) ;
 int FUNC_6 (struct sysfs_dirent*) ;
 struct inode* FUNC_7 (struct sysfs_dirent*) ;
 int VAR_3 ;

__attribute__((used)) static struct dentry * FUNC_8(struct inode *VAR_4, struct dentry *VAR_5,
    struct nameidata *VAR_6)
{
 struct dentry *VAR_7 = ((void*)0);
 struct sysfs_dirent *VAR_8 = VAR_5->d_parent->d_fsdata;
 struct sysfs_dirent *VAR_9;
 struct inode *VAR_10;

 FUNC_3(&VAR_3);

 VAR_9 = FUNC_5(VAR_8, VAR_5->d_name.name);


 if (!VAR_9) {
  VAR_7 = FUNC_0(-VAR_0);
  goto out_unlock;
 }


 VAR_10 = FUNC_7(VAR_9);
 if (!VAR_10) {
  VAR_7 = FUNC_0(-VAR_1);
  goto out_unlock;
 }


 VAR_5->d_op = &VAR_2;
 VAR_5->d_fsdata = FUNC_6(VAR_9);
 FUNC_1(VAR_5, VAR_10);
 FUNC_2(VAR_5);

 out_unlock:
 FUNC_4(&VAR_3);
 return VAR_7;
}
