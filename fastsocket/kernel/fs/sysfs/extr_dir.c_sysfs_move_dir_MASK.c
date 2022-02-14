
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_dirent {struct sysfs_dirent* s_parent; int s_name; } ;
struct kobject {struct sysfs_dirent* sd; } ;
struct dentry {TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct TYPE_3__ {int i_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,int *) ;
 struct dentry* FUNC_4 (struct dentry*,int ) ;
 int FUNC_5 (struct dentry*,struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct sysfs_dirent*,int ) ;
 int FUNC_13 (struct sysfs_dirent*) ;
 struct dentry* FUNC_14 (struct sysfs_dirent*) ;
 int FUNC_15 (struct sysfs_dirent*) ;
 int VAR_2 ;
 int FUNC_16 (struct sysfs_dirent*) ;
 int VAR_3 ;
 struct sysfs_dirent VAR_4 ;
 int FUNC_17 (struct sysfs_dirent*) ;

int FUNC_18(struct kobject *VAR_5, struct kobject *VAR_6)
{
 struct sysfs_dirent *VAR_7 = VAR_5->sd;
 struct sysfs_dirent *VAR_8;
 struct dentry *VAR_9, *VAR_10 = ((void*)0);
 struct dentry *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_9(&VAR_3);
 FUNC_0(!VAR_7->s_parent);
 VAR_8 = (VAR_6 && VAR_6->sd) ?
  VAR_6->sd : &VAR_4;

 VAR_13 = 0;
 if (VAR_7->s_parent == VAR_8)
  goto out;


 VAR_11 = FUNC_14(VAR_7);
 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  VAR_11 = ((void*)0);
  goto out;
 }
 VAR_9 = VAR_11->d_parent;

 VAR_10 = FUNC_14(VAR_8);
 if (FUNC_1(VAR_10)) {
  VAR_13 = FUNC_2(VAR_10);
  VAR_10 = ((void*)0);
  goto out;
 }

again:
 FUNC_9(&VAR_9->d_inode->i_mutex);
 if (!FUNC_10(&VAR_10->d_inode->i_mutex)) {
  FUNC_11(&VAR_9->d_inode->i_mutex);
  goto again;
 }
 FUNC_9(&VAR_2);

 VAR_13 = -VAR_0;
 if (FUNC_12(VAR_8, VAR_7->s_name))
  goto out_unlock;

 VAR_13 = -VAR_1;
 VAR_12 = FUNC_4(VAR_10, VAR_7->s_name);
 if (!VAR_12)
  goto out_unlock;

 VAR_13 = 0;
 FUNC_3(VAR_12, ((void*)0));
 FUNC_5(VAR_11, VAR_12);


 FUNC_17(VAR_7);
 FUNC_13(VAR_8);
 FUNC_7(VAR_9->d_inode);
 FUNC_16(VAR_7->s_parent);
 VAR_7->s_parent = VAR_8;
 FUNC_8(VAR_10->d_inode);
 FUNC_15(VAR_7);

 out_unlock:
 FUNC_11(&VAR_2);
 FUNC_11(&VAR_10->d_inode->i_mutex);
 FUNC_11(&VAR_9->d_inode->i_mutex);
 out:
 FUNC_6(VAR_10);
 FUNC_6(VAR_11);
 FUNC_6(VAR_12);
 FUNC_11(&VAR_3);
 return VAR_13;
}
