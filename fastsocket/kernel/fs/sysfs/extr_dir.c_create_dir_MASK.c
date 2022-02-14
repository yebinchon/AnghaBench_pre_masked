
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {struct kobject* kobj; } ;
struct sysfs_dirent {TYPE_1__ s_dir; } ;
struct sysfs_addrm_cxt {int dummy; } ;
struct kobject {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 int FUNC_1 (struct sysfs_addrm_cxt*) ;
 int FUNC_2 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_3 (char const*,int,int ) ;
 int FUNC_4 (struct sysfs_dirent*) ;

__attribute__((used)) static int FUNC_5(struct kobject *VAR_6, struct sysfs_dirent *VAR_7,
        const char *VAR_8, struct sysfs_dirent **VAR_9)
{
 umode_t VAR_10 = VAR_2| VAR_4 | VAR_3 | VAR_5;
 struct sysfs_addrm_cxt VAR_11;
 struct sysfs_dirent *VAR_12;
 int VAR_13;


 VAR_12 = FUNC_3(VAR_8, VAR_10, VAR_1);
 if (!VAR_12)
  return -VAR_0;
 VAR_12->s_dir.kobj = VAR_6;


 FUNC_2(&VAR_11, VAR_7);
 VAR_13 = FUNC_0(&VAR_11, VAR_12);
 FUNC_1(&VAR_11);

 if (VAR_13 == 0)
  *VAR_9 = VAR_12;
 else
  FUNC_4(VAR_12);

 return VAR_13;
}
