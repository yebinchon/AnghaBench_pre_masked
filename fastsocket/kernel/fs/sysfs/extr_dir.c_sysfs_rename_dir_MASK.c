
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_dirent {char* s_name; int s_parent; } ;
struct kobject {struct sysfs_dirent* sd; } ;
struct dentry {TYPE_1__* d_inode; struct dentry* d_parent; } ;
struct TYPE_2__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,int *) ;
 struct dentry* FUNC_3 (struct dentry*,char const*) ;
 int FUNC_4 (struct dentry*,struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 scalar_t__ FUNC_11 (int ,char const*) ;
 struct dentry* FUNC_12 (struct sysfs_dirent*) ;
 int FUNC_13 (struct sysfs_dirent*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (struct sysfs_dirent*) ;

int FUNC_15(struct kobject * VAR_5, const char *VAR_6)
{
 struct sysfs_dirent *VAR_7 = VAR_5->sd;
 struct dentry *VAR_8 = ((void*)0);
 struct dentry *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const char *VAR_11 = ((void*)0);
 int VAR_12;

 FUNC_8(&VAR_4);

 VAR_12 = 0;
 if (FUNC_10(VAR_7->s_name, VAR_6) == 0)
  goto out;


 VAR_9 = FUNC_12(VAR_7);
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  goto out;
 }

 VAR_8 = VAR_9->d_parent;


 FUNC_8(&VAR_8->d_inode->i_mutex);
 FUNC_8(&VAR_3);

 VAR_12 = -VAR_0;
 if (FUNC_11(VAR_7->s_parent, VAR_6))
  goto out_unlock;

 VAR_12 = -VAR_1;
 VAR_10 = FUNC_3(VAR_8, VAR_6);
 if (!VAR_10)
  goto out_unlock;


 VAR_12 = -VAR_1;
 VAR_6 = VAR_11 = FUNC_7(VAR_6, VAR_2);
 if (!VAR_6)
  goto out_unlock;

 FUNC_14(VAR_7);
 VAR_11 = VAR_7->s_name;
 VAR_7->s_name = VAR_6;
 FUNC_13(VAR_7);


 FUNC_2(VAR_10, ((void*)0));
 FUNC_4(VAR_9, VAR_10);

 VAR_12 = 0;
 out_unlock:
 FUNC_9(&VAR_3);
 FUNC_9(&VAR_8->d_inode->i_mutex);
 FUNC_6(VAR_11);
 FUNC_5(VAR_9);
 FUNC_5(VAR_10);
 out:
 FUNC_9(&VAR_4);
 return VAR_12;
}
