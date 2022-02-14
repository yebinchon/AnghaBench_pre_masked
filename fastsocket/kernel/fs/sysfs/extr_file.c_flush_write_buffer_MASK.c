
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysfs_ops {int (* store ) (struct kobject*,int ,int ,size_t) ;} ;
struct TYPE_6__ {int attr; } ;
struct sysfs_dirent {TYPE_3__ s_attr; TYPE_2__* s_parent; } ;
struct sysfs_buffer {int page; struct sysfs_ops* ops; } ;
struct kobject {int dummy; } ;
struct dentry {struct sysfs_dirent* d_fsdata; } ;
struct TYPE_4__ {struct kobject* kobj; } ;
struct TYPE_5__ {TYPE_1__ s_dir; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*,int ,int ,size_t) ;
 int FUNC_1 (struct sysfs_dirent*) ;
 int FUNC_2 (struct sysfs_dirent*) ;

__attribute__((used)) static int
FUNC_3(struct dentry * VAR_1, struct sysfs_buffer * VAR_2, size_t VAR_3)
{
 struct sysfs_dirent *VAR_4 = VAR_1->d_fsdata;
 struct kobject *VAR_5 = VAR_4->s_parent->s_dir.kobj;
 const struct sysfs_ops * VAR_6 = VAR_2->ops;
 int VAR_7;


 if (!FUNC_1(VAR_4))
  return -VAR_0;

 VAR_7 = VAR_6->store(VAR_5, VAR_4->s_attr.attr, VAR_2->page, VAR_3);

 FUNC_2(VAR_4);

 return VAR_7;
}
