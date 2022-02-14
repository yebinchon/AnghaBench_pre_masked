
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int buffers; struct bin_attribute* bin_attr; } ;
struct sysfs_dirent {TYPE_3__ s_bin_attr; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_mode; struct bin_buffer* private_data; TYPE_2__ f_path; } ;
struct bin_buffer {int list; struct file* file; int mutex; int buffer; } ;
struct bin_attribute {scalar_t__ mmap; scalar_t__ read; scalar_t__ write; } ;
struct TYPE_4__ {struct sysfs_dirent* d_fsdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct bin_buffer*) ;
 int FUNC_2 (int ,int ) ;
 struct bin_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (struct sysfs_dirent*) ;
 int FUNC_8 (struct sysfs_dirent*) ;

__attribute__((used)) static int FUNC_9(struct inode * VAR_8, struct file * VAR_9)
{
 struct sysfs_dirent *VAR_10 = VAR_9->f_path.dentry->d_fsdata;
 struct bin_attribute *VAR_11 = VAR_10->s_bin_attr.bin_attr;
 struct bin_buffer *VAR_12 = ((void*)0);
 int VAR_13;


 if (!FUNC_7(VAR_10))
  return -VAR_1;

 VAR_13 = -VAR_0;
 if ((VAR_9->f_mode & VAR_4) && !(VAR_11->write || VAR_11->mmap))
  goto err_out;
 if ((VAR_9->f_mode & VAR_3) && !(VAR_11->read || VAR_11->mmap))
  goto err_out;

 VAR_13 = -VAR_2;
 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  goto err_out;

 VAR_12->buffer = FUNC_2(VAR_6, VAR_5);
 if (!VAR_12->buffer)
  goto err_out;

 FUNC_4(&VAR_12->mutex);
 VAR_12->file = VAR_9;
 VAR_9->private_data = VAR_12;

 FUNC_5(&VAR_7);
 FUNC_0(&VAR_12->list, &VAR_10->s_bin_attr.buffers);
 FUNC_6(&VAR_7);


 FUNC_8(VAR_10);
 return 0;

 err_out:
 FUNC_8(VAR_10);
 FUNC_1(VAR_12);
 return VAR_13;
}
