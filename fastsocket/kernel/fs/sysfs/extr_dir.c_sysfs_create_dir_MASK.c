
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_dirent {int dummy; } ;
struct kobject {struct sysfs_dirent* sd; TYPE_1__* parent; } ;
struct TYPE_2__ {struct sysfs_dirent* sd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kobject*,struct sysfs_dirent*,int ,struct sysfs_dirent**) ;
 int FUNC_2 (struct kobject*) ;
 struct sysfs_dirent VAR_0 ;

int FUNC_3(struct kobject * VAR_1)
{
 struct sysfs_dirent *VAR_2, *VAR_3;
 int VAR_4 = 0;

 FUNC_0(!VAR_1);

 if (VAR_1->parent)
  VAR_2 = VAR_1->parent->sd;
 else
  VAR_2 = &VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, FUNC_2(VAR_1), &VAR_3);
 if (!VAR_4)
  VAR_1->sd = VAR_3;
 return VAR_4;
}
