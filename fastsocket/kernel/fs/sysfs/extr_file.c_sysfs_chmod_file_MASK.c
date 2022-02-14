
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_mode; } ;
struct kobject {int sd; } ;
struct inode {int i_mode; int i_mutex; int i_sb; } ;
struct iattr {int ia_mode; int ia_valid; int ia_ctime; } ;
struct dentry {struct inode* d_inode; } ;
struct attribute {int name; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct dentry* FUNC_7 (struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct sysfs_dirent*) ;
 int VAR_5 ;
 int FUNC_10 (struct dentry*,struct iattr*) ;

int FUNC_11(struct kobject *VAR_6, struct attribute *VAR_7, mode_t VAR_8)
{
 struct sysfs_dirent *VAR_9 = ((void*)0);
 struct dentry *VAR_10 = ((void*)0);
 struct inode * VAR_11;
 struct iattr VAR_12;
 int VAR_13;

 VAR_13 = -VAR_2;
 VAR_9 = FUNC_8(VAR_6->sd, VAR_7->name);
 if (!VAR_9)
  goto out;

 FUNC_5(&VAR_5);
 VAR_10 = FUNC_7(VAR_9);
 FUNC_6(&VAR_5);
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_1(VAR_10);
  VAR_10 = ((void*)0);
  goto out;
 }

 VAR_11 = VAR_10->d_inode;

 FUNC_5(&VAR_11->i_mutex);

 VAR_12.ia_mode = (VAR_8 & VAR_3) | (VAR_11->i_mode & ~VAR_3);
 VAR_12.ia_valid = VAR_1 | VAR_0;
 VAR_12.ia_ctime = FUNC_2(VAR_11->i_sb);
 VAR_13 = FUNC_10(VAR_10, &VAR_12);

 if (VAR_13 == 0) {
  FUNC_4(VAR_10, VAR_12.ia_valid);
  FUNC_5(&VAR_4);
  VAR_9->s_mode = VAR_12.ia_mode;
  FUNC_6(&VAR_4);
 }

 FUNC_6(&VAR_11->i_mutex);
 out:
 FUNC_3(VAR_10);
 FUNC_9(VAR_9);
 return VAR_13;
}
