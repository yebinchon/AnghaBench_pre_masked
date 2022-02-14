
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {struct sysfs_dirent* s_parent; } ;


 int FUNC_0 (struct sysfs_dirent*) ;
 int FUNC_1 (struct sysfs_dirent*) ;
 scalar_t__ FUNC_2 (int) ;

struct sysfs_dirent *FUNC_3(struct sysfs_dirent *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->s_parent && FUNC_2(!FUNC_0(VAR_0->s_parent)))
   return ((void*)0);
  if (FUNC_2(!FUNC_0(VAR_0))) {
   FUNC_1(VAR_0->s_parent);
   return ((void*)0);
  }
 }
 return VAR_0;
}
