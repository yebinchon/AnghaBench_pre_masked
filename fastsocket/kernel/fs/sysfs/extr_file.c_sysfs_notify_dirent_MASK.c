
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_open_dirent {int poll; int event; } ;
struct TYPE_2__ {struct sysfs_open_dirent* open; } ;
struct sysfs_dirent {TYPE_1__ s_attr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sysfs_dirent *VAR_1)
{
 struct sysfs_open_dirent *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);

 VAR_2 = VAR_1->s_attr.open;
 if (VAR_2) {
  FUNC_0(&VAR_2->event);
  FUNC_3(&VAR_2->poll);
 }

 FUNC_2(&VAR_0, VAR_3);
}
