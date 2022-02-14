
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion; } ;
struct sysfs_dirent {TYPE_1__ u; int s_active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sysfs_dirent *VAR_1)
{
 int VAR_2;

 if (FUNC_3(!VAR_1))
  return;

 VAR_2 = FUNC_0(&VAR_1->s_active);
 if (FUNC_2(VAR_2 != VAR_0))
  return;




 FUNC_1(VAR_1->u.completion);
}
