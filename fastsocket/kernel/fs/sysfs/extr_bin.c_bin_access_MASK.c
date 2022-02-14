
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {struct file* vm_file; } ;
struct sysfs_dirent {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; struct bin_buffer* private_data; } ;
struct bin_buffer {TYPE_1__* vm_ops; } ;
struct TYPE_5__ {struct sysfs_dirent* d_fsdata; } ;
struct TYPE_4__ {int (* access ) (struct vm_area_struct*,unsigned long,void*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,void*,int,int) ;
 int FUNC_1 (struct sysfs_dirent*) ;
 int FUNC_2 (struct sysfs_dirent*) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_1, unsigned long VAR_2,
    void *VAR_3, int VAR_4, int VAR_5)
{
 struct file *VAR_6 = VAR_1->vm_file;
 struct bin_buffer *VAR_7 = VAR_6->private_data;
 struct sysfs_dirent *VAR_8 = VAR_6->f_path.dentry->d_fsdata;
 int VAR_9;

 if (!VAR_7->vm_ops || !VAR_7->vm_ops->access)
  return -VAR_0;

 if (!FUNC_1(VAR_8))
  return -VAR_0;

 VAR_9 = VAR_7->vm_ops->access(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_8);
 return VAR_9;
}
