
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysfs_open_dirent {int event; int poll; } ;
struct TYPE_6__ {struct sysfs_open_dirent* open; } ;
struct sysfs_dirent {TYPE_3__ s_attr; } ;
struct sysfs_buffer {scalar_t__ event; int needs_read_fill; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; struct sysfs_buffer* private_data; } ;
typedef int poll_table ;
struct TYPE_4__ {struct sysfs_dirent* d_fsdata; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct sysfs_dirent*) ;
 int FUNC_3 (struct sysfs_dirent*) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct sysfs_buffer * VAR_5 = VAR_3->private_data;
 struct sysfs_dirent *VAR_6 = VAR_3->f_path.dentry->d_fsdata;
 struct sysfs_open_dirent *VAR_7 = VAR_6->s_attr.open;


 if (!FUNC_2(VAR_6))
  goto trigger;

 FUNC_1(VAR_3, &VAR_7->poll, VAR_4);

 FUNC_3(VAR_6);

 if (VAR_5->event != FUNC_0(&VAR_7->event))
  goto trigger;

 return VAR_0;

 trigger:
 VAR_5->needs_read_fill = 1;
 return VAR_0|VAR_1|VAR_2;
}
