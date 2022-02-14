
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_dirent {int dummy; } ;
struct sysfs_buffer {scalar_t__ page; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct sysfs_buffer* private_data; TYPE_2__ f_path; } ;
struct TYPE_3__ {struct sysfs_dirent* d_fsdata; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct sysfs_buffer*) ;
 int FUNC_2 (struct sysfs_dirent*,struct sysfs_buffer*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct sysfs_dirent *VAR_2 = VAR_1->f_path.dentry->d_fsdata;
 struct sysfs_buffer *VAR_3 = VAR_1->private_data;

 FUNC_2(VAR_2, VAR_3);

 if (VAR_3->page)
  FUNC_0((unsigned long)VAR_3->page);
 FUNC_1(VAR_3);

 return 0;
}
