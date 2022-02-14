
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {struct file* vm_file; } ;
struct sysfs_dirent {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; struct bin_buffer* private_data; } ;
struct bin_buffer {TYPE_3__* vm_ops; } ;
struct TYPE_6__ {int (* open ) (struct vm_area_struct*) ;} ;
struct TYPE_4__ {struct sysfs_dirent* d_fsdata; } ;


 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct sysfs_dirent*) ;
 int FUNC_2 (struct sysfs_dirent*) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct file *VAR_1 = VAR_0->vm_file;
 struct bin_buffer *VAR_2 = VAR_1->private_data;
 struct sysfs_dirent *VAR_3 = VAR_1->f_path.dentry->d_fsdata;

 if (!VAR_2->vm_ops || !VAR_2->vm_ops->open)
  return;

 if (!FUNC_1(VAR_3))
  return;

 VAR_2->vm_ops->open(VAR_0);

 FUNC_2(VAR_3);
}
