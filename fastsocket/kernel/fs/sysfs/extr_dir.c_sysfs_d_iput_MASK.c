
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct sysfs_dirent* d_fsdata; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct sysfs_dirent*) ;

__attribute__((used)) static void FUNC_2(struct dentry * VAR_0, struct inode * VAR_1)
{
 struct sysfs_dirent * VAR_2 = VAR_0->d_fsdata;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1);
}
