
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {void* attr; } ;
struct sysfs_dirent {TYPE_1__ s_attr; } ;
struct sysfs_addrm_cxt {int dummy; } ;
struct attribute {int name; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 int FUNC_1 (struct sysfs_addrm_cxt*) ;
 int FUNC_2 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct sysfs_dirent*) ;

int FUNC_5(struct sysfs_dirent *VAR_3,
   const struct attribute *VAR_4, int VAR_5, mode_t VAR_6)
{
 umode_t VAR_7 = (VAR_6 & VAR_1) | VAR_2;
 struct sysfs_addrm_cxt VAR_8;
 struct sysfs_dirent *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_4->name, VAR_7, VAR_5);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->s_attr.attr = (void *)VAR_4;

 FUNC_2(&VAR_8, VAR_3);
 VAR_10 = FUNC_0(&VAR_8, VAR_9);
 FUNC_1(&VAR_8);

 if (VAR_10)
  FUNC_4(VAR_9);

 return VAR_10;
}
