
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute_group {struct attribute** attrs; } ;
struct attribute {int name; } ;


 int FUNC_0 (struct sysfs_dirent*,int ) ;

__attribute__((used)) static void FUNC_1(struct sysfs_dirent *VAR_0, struct kobject *VAR_1,
    const struct attribute_group *VAR_2)
{
 struct attribute *const* VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_2->attrs; *VAR_3; VAR_4++, VAR_3++)
  FUNC_0(VAR_0, (*VAR_3)->name);
}
