
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_parent; } ;
struct sysfs_addrm_cxt {int dummy; } ;


 int FUNC_0 (struct sysfs_addrm_cxt*) ;
 int FUNC_1 (struct sysfs_addrm_cxt*,int ) ;
 int FUNC_2 (struct sysfs_addrm_cxt*,struct sysfs_dirent*) ;

__attribute__((used)) static void FUNC_3(struct sysfs_dirent *VAR_0)
{
 struct sysfs_addrm_cxt VAR_1;

 FUNC_1(&VAR_1, VAR_0->s_parent);
 FUNC_2(&VAR_1, VAR_0);
 FUNC_0(&VAR_1);
}
