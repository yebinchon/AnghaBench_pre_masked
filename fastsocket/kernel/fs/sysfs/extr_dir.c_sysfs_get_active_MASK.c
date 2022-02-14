
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_active; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sysfs_dirent *FUNC_5(struct sysfs_dirent *VAR_0)
{
 if (FUNC_4(!VAR_0))
  return ((void*)0);

 while (1) {
  int VAR_1, VAR_2;

  VAR_1 = FUNC_1(&VAR_0->s_active);
  if (FUNC_4(VAR_1 < 0))
   return ((void*)0);

  VAR_2 = FUNC_0(&VAR_0->s_active, VAR_1, VAR_1 + 1);
  if (FUNC_3(VAR_2 == VAR_1))
   return VAR_0;
  if (VAR_2 < 0)
   return ((void*)0);

  FUNC_2();
 }
}
