
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {struct sysfs_dirent* sd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sysfs_dirent* FUNC_2 (struct sysfs_dirent*,char const*) ;
 int VAR_0 ;
 int FUNC_3 (struct sysfs_dirent*) ;

void FUNC_4(struct kobject *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct sysfs_dirent *VAR_4 = VAR_1->sd;

 FUNC_0(&VAR_0);

 if (VAR_4 && VAR_2)
  VAR_4 = FUNC_2(VAR_4, VAR_2);
 if (VAR_4 && VAR_3)
  VAR_4 = FUNC_2(VAR_4, VAR_3);
 if (VAR_4)
  FUNC_3(VAR_4);

 FUNC_1(&VAR_0);
}
