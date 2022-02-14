
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct attribute {int mode; } ;


 int FUNC_0 (struct sysfs_dirent*,struct attribute const*,int,int ) ;

int FUNC_1(struct sysfs_dirent *VAR_0, const struct attribute *VAR_1,
     int VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_1->mode);
}
