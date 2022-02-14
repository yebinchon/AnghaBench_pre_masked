
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sysfs_dirent*) ;

__attribute__((used)) static inline void FUNC_2(struct sysfs_dirent *VAR_0)
{
 if (VAR_0 && FUNC_0(&VAR_0->s_count))
  FUNC_1(VAR_0);
}
