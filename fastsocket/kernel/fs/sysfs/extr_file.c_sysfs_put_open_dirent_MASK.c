
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysfs_open_dirent {int refcnt; } ;
struct TYPE_2__ {struct sysfs_open_dirent* open; } ;
struct sysfs_dirent {TYPE_1__ s_attr; } ;
struct sysfs_buffer {int list; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sysfs_open_dirent*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct sysfs_dirent *VAR_1,
      struct sysfs_buffer *VAR_2)
{
 struct sysfs_open_dirent *VAR_3 = VAR_1->s_attr.open;
 unsigned long VAR_4;

 FUNC_3(&VAR_0, VAR_4);

 FUNC_2(&VAR_2->list);
 if (FUNC_0(&VAR_3->refcnt))
  VAR_1->s_attr.open = ((void*)0);
 else
  VAR_3 = ((void*)0);

 FUNC_4(&VAR_0, VAR_4);

 FUNC_1(VAR_3);
}
