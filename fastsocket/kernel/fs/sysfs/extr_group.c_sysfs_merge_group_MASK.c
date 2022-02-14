
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {int sd; } ;
struct attribute_group {struct attribute** attrs; int name; } ;
struct attribute {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysfs_dirent*,struct attribute* const,int ) ;
 struct sysfs_dirent* FUNC_1 (int ) ;
 struct sysfs_dirent* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sysfs_dirent*,int ) ;
 int FUNC_4 (struct sysfs_dirent*) ;

int FUNC_5(struct kobject *VAR_2,
         const struct attribute_group *VAR_3)
{
 struct sysfs_dirent *VAR_4;
 int VAR_5 = 0;
 struct attribute *const *VAR_6;
 int VAR_7;

 if (VAR_3)
  VAR_4 = FUNC_2(VAR_2->sd, VAR_3->name);
 else
  VAR_4 = FUNC_1(VAR_2->sd);
 if (!VAR_4)
  return -VAR_0;

 for ((VAR_7 = 0, VAR_6 = VAR_3->attrs); *VAR_6 && !VAR_5; (++VAR_7, ++VAR_6))
  VAR_5 = FUNC_0(VAR_4, *VAR_6, VAR_1);
 if (VAR_5) {
  while (--VAR_7 >= 0)
   FUNC_3(VAR_4, (*--VAR_6)->name);
 }
 FUNC_4(VAR_4);

 return VAR_5;
}
