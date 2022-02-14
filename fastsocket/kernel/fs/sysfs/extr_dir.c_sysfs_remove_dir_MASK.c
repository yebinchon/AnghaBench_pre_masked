
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {struct sysfs_dirent* sd; } ;


 int FUNC_0 (struct sysfs_dirent*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct kobject * VAR_1)
{
 struct sysfs_dirent *VAR_2 = VAR_1->sd;

 FUNC_1(&VAR_0);
 VAR_1->sd = ((void*)0);
 FUNC_2(&VAR_0);

 FUNC_0(VAR_2);
}
