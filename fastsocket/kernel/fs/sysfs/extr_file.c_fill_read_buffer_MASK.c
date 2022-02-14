
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sysfs_ops {void* (* show ) (struct kobject*,int ,char*) ;} ;
struct TYPE_8__ {int attr; TYPE_3__* open; } ;
struct sysfs_dirent {TYPE_4__ s_attr; TYPE_2__* s_parent; } ;
struct sysfs_buffer {char* page; void* count; scalar_t__ needs_read_fill; int event; struct sysfs_ops* ops; } ;
struct kobject {int dummy; } ;
struct dentry {struct sysfs_dirent* d_fsdata; } ;
typedef void* ssize_t ;
struct TYPE_7__ {int event; } ;
struct TYPE_5__ {struct kobject* kobj; } ;
struct TYPE_6__ {TYPE_1__ s_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned long) ;
 void* FUNC_3 (struct kobject*,int ,char*) ;
 int FUNC_4 (struct sysfs_dirent*) ;
 int FUNC_5 (struct sysfs_dirent*) ;

__attribute__((used)) static int FUNC_6(struct dentry * VAR_4, struct sysfs_buffer * VAR_5)
{
 struct sysfs_dirent *VAR_6 = VAR_4->d_fsdata;
 struct kobject *VAR_7 = VAR_6->s_parent->s_dir.kobj;
 const struct sysfs_ops * VAR_8 = VAR_5->ops;
 int VAR_9 = 0;
 ssize_t VAR_10;

 if (!VAR_5->page)
  VAR_5->page = (char *) FUNC_1(VAR_2);
 if (!VAR_5->page)
  return -VAR_1;


 if (!FUNC_4(VAR_6))
  return -VAR_0;

 VAR_5->event = FUNC_0(&VAR_6->s_attr.open->event);
 VAR_10 = VAR_8->show(VAR_7, VAR_6->s_attr.attr, VAR_5->page);

 FUNC_5(VAR_6);





 if (VAR_10 >= (ssize_t)VAR_3) {
  FUNC_2("fill_read_buffer: %s returned bad count\n",
   (unsigned long)VAR_8->show);

  VAR_10 = VAR_3 - 1;
 }
 if (VAR_10 >= 0) {
  VAR_5->needs_read_fill = 0;
  VAR_5->count = VAR_10;
 } else {
  VAR_9 = VAR_10;
 }
 return VAR_9;
}
