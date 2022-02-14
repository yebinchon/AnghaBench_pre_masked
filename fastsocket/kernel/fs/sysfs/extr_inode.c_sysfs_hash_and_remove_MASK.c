
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct sysfs_addrm_cxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sysfs_addrm_cxt*) ;
 int FUNC_1 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_2 (struct sysfs_dirent*,char const*) ;
 int FUNC_3 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;

int FUNC_4(struct sysfs_dirent *VAR_1, const char *VAR_2)
{
 struct sysfs_addrm_cxt VAR_3;
 struct sysfs_dirent *VAR_4;

 if (!VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_3, VAR_1);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  FUNC_3(&VAR_3, VAR_4);

 FUNC_0(&VAR_3);

 if (VAR_4)
  return 0;
 else
  return -VAR_0;
}
