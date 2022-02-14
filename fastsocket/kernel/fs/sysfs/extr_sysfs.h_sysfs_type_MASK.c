
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {unsigned int s_flags; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct sysfs_dirent *VAR_1)
{
 return VAR_1->s_flags & VAR_0;
}
