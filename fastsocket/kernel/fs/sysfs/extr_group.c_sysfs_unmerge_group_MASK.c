
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {int sd; } ;
struct attribute_group {struct attribute** attrs; int name; } ;
struct attribute {int name; } ;


 struct sysfs_dirent* FUNC_0 (int ) ;
 struct sysfs_dirent* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sysfs_dirent*,int ) ;
 int FUNC_3 (struct sysfs_dirent*) ;

void FUNC_4(struct kobject *VAR_0,
         const struct attribute_group *VAR_1)
{
 struct sysfs_dirent *VAR_2;
 struct attribute *const *VAR_3;

 if (VAR_1)
  VAR_2 = FUNC_1(VAR_0->sd, VAR_1->name);
 else
  VAR_2 = FUNC_0(VAR_0->sd);
 if (VAR_2) {
  for (VAR_3 = VAR_1->attrs; *VAR_3; ++VAR_3)
   FUNC_2(VAR_2, (*VAR_3)->name);
  FUNC_3(VAR_2);
 }
}
