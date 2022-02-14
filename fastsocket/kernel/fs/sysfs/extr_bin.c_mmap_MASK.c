
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_ops; struct file* vm_file; } ;
struct TYPE_8__ {struct bin_attribute* bin_attr; } ;
struct sysfs_dirent {TYPE_5__* s_parent; TYPE_3__ s_bin_attr; } ;
struct kobject {int dummy; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; struct bin_buffer* private_data; } ;
struct bin_buffer {int mmapped; scalar_t__ vm_ops; int mutex; } ;
struct bin_attribute {int (* mmap ) (struct file*,struct kobject*,struct bin_attribute*,struct vm_area_struct*) ;} ;
struct TYPE_9__ {struct kobject* kobj; } ;
struct TYPE_10__ {TYPE_4__ s_dir; } ;
struct TYPE_6__ {struct sysfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct kobject*,struct bin_attribute*,struct vm_area_struct*) ;
 int FUNC_3 (struct sysfs_dirent*) ;
 int FUNC_4 (struct sysfs_dirent*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 struct bin_buffer *VAR_5 = VAR_3->private_data;
 struct sysfs_dirent *VAR_6 = VAR_3->f_path.dentry->d_fsdata;
 struct bin_attribute *VAR_7 = VAR_6->s_bin_attr.bin_attr;
 struct kobject *VAR_8 = VAR_6->s_parent->s_dir.kobj;
 int VAR_9;

 FUNC_0(&VAR_5->mutex);


 VAR_9 = -VAR_1;
 if (!FUNC_3(VAR_6))
  goto out_unlock;

 VAR_9 = -VAR_0;
 if (!VAR_7->mmap)
  goto out_put;

 VAR_9 = VAR_7->mmap(VAR_3, VAR_8, VAR_7, VAR_4);
 if (VAR_9)
  goto out_put;






 if (VAR_4->vm_file != VAR_3)
  goto out_put;

 VAR_9 = -VAR_0;
 if (VAR_5->mmapped && VAR_5->vm_ops != VAR_4->vm_ops)
  goto out_put;

 VAR_9 = 0;
 VAR_5->mmapped = 1;
 VAR_5->vm_ops = VAR_4->vm_ops;
 VAR_4->vm_ops = &VAR_2;
out_put:
 FUNC_4(VAR_6);
out_unlock:
 FUNC_1(&VAR_5->mutex);

 return VAR_9;
}
