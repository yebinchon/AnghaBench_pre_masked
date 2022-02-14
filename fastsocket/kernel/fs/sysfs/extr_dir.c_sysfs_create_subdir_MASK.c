
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {int sd; } ;


 int FUNC_0 (struct kobject*,int ,char const*,struct sysfs_dirent**) ;

int FUNC_1(struct kobject *VAR_0, const char *VAR_1,
   struct sysfs_dirent **VAR_2)
{
 return FUNC_0(VAR_0, VAR_0->sd, VAR_1, VAR_2);
}
