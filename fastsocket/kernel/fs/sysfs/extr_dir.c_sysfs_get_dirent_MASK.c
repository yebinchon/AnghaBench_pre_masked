
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sysfs_dirent* FUNC_2 (struct sysfs_dirent*,unsigned char const*) ;
 int FUNC_3 (struct sysfs_dirent*) ;
 int VAR_0 ;

struct sysfs_dirent *FUNC_4(struct sysfs_dirent *VAR_1,
          const unsigned char *VAR_2)
{
 struct sysfs_dirent *VAR_3;

 FUNC_0(&VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_3);
 FUNC_1(&VAR_0);

 return VAR_3;
}
