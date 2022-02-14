
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_fault {int dummy; } ;
struct vm_area_struct {struct file* vm_file; } ;
struct sysfs_dirent {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; struct bin_buffer* private_data; } ;
struct bin_buffer {TYPE_3__* vm_ops; } ;
struct TYPE_6__ {int (* page_mkwrite ) (struct vm_area_struct*,struct vm_fault*) ;} ;
struct TYPE_4__ {struct sysfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct vm_area_struct*,struct vm_fault*) ;
 int FUNC_2 (struct sysfs_dirent*) ;
 int FUNC_3 (struct sysfs_dirent*) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_1, struct vm_fault *VAR_2)
{
 struct file *VAR_3 = VAR_1->vm_file;
 struct bin_buffer *VAR_4 = VAR_3->private_data;
 struct sysfs_dirent *VAR_5 = VAR_3->f_path.dentry->d_fsdata;
 int VAR_6;

 if (!VAR_4->vm_ops)
  return VAR_0;

 if (!VAR_4->vm_ops->page_mkwrite) {
  FUNC_0(VAR_3);
  return 0;
 }

 if (!FUNC_2(VAR_5))
  return VAR_0;

 VAR_6 = VAR_4->vm_ops->page_mkwrite(VAR_1, VAR_2);

 FUNC_3(VAR_5);
 return VAR_6;
}
