
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sysfs_dirent* target_sd; } ;
struct sysfs_dirent {TYPE_1__ s_symlink; } ;
struct sysfs_addrm_cxt {int dummy; } ;
struct kobject {struct sysfs_dirent* sd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 int FUNC_5 (struct sysfs_addrm_cxt*) ;
 int FUNC_6 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;
 int VAR_6 ;
 struct sysfs_dirent* FUNC_7 (struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_8 (char const*,int,int ) ;
 int FUNC_9 (struct sysfs_dirent*) ;
 struct sysfs_dirent VAR_7 ;

__attribute__((used)) static int FUNC_10(struct kobject *VAR_8, struct kobject *VAR_9,
    const char *VAR_10, int VAR_11)
{
 struct sysfs_dirent *VAR_12 = ((void*)0);
 struct sysfs_dirent *VAR_13 = ((void*)0);
 struct sysfs_dirent *VAR_14 = ((void*)0);
 struct sysfs_addrm_cxt VAR_15;
 int VAR_16;

 FUNC_0(!VAR_10);

 if (!VAR_8)
  VAR_12 = &VAR_7;
 else
  VAR_12 = VAR_8->sd;

 VAR_16 = -VAR_0;
 if (!VAR_12)
  goto out_put;




 FUNC_2(&VAR_6);
 if (VAR_9->sd)
  VAR_13 = FUNC_7(VAR_9->sd);
 FUNC_3(&VAR_6);

 VAR_16 = -VAR_1;
 if (!VAR_13)
  goto out_put;

 VAR_16 = -VAR_2;
 VAR_14 = FUNC_8(VAR_10, VAR_4|VAR_5, VAR_3);
 if (!VAR_14)
  goto out_put;

 VAR_14->s_symlink.target_sd = VAR_13;
 VAR_13 = ((void*)0);

 FUNC_6(&VAR_15, VAR_12);
 if (VAR_11)
  VAR_16 = FUNC_4(&VAR_15, VAR_14);
 else
  VAR_16 = FUNC_1(&VAR_15, VAR_14);
 FUNC_5(&VAR_15);

 if (VAR_16)
  goto out_put;

 return 0;

 out_put:
 FUNC_9(VAR_13);
 FUNC_9(VAR_14);
 return VAR_16;
}
