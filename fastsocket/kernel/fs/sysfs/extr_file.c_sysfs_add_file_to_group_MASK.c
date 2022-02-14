
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {int sd; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysfs_dirent*,struct attribute const*,int ) ;
 struct sysfs_dirent* FUNC_1 (int ) ;
 struct sysfs_dirent* FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct sysfs_dirent*) ;

int FUNC_4(struct kobject *VAR_2,
  const struct attribute *VAR_3, const char *VAR_4)
{
 struct sysfs_dirent *VAR_5;
 int VAR_6;

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_2->sd, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_2->sd);

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_1);
 FUNC_3(VAR_5);

 return VAR_6;
}
