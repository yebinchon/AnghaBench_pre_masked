
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {struct sysfs_dirent* sd; } ;
struct attribute_group {scalar_t__ name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sysfs_dirent*,struct kobject*,struct attribute_group const*,int) ;
 int FUNC_2 (struct kobject*,scalar_t__,struct sysfs_dirent**) ;
 int FUNC_3 (struct sysfs_dirent*) ;
 int FUNC_4 (struct sysfs_dirent*) ;
 int FUNC_5 (struct sysfs_dirent*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct kobject *VAR_1, int VAR_2,
     const struct attribute_group *VAR_3)
{
 struct sysfs_dirent *VAR_4;
 int VAR_5;

 FUNC_0(!VAR_1 || (!VAR_2 && !VAR_1->sd));


 if (FUNC_6(VAR_2 && !VAR_1->sd))
  return -VAR_0;

 if (VAR_3->name) {
  VAR_5 = FUNC_2(VAR_1, VAR_3->name, &VAR_4);
  if (VAR_5)
   return VAR_5;
 } else
  VAR_4 = VAR_1->sd;
 FUNC_3(VAR_4);
 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_3, VAR_2);
 if (VAR_5) {
  if (VAR_3->name)
   FUNC_5(VAR_4);
 }
 FUNC_4(VAR_4);
 return VAR_5;
}
