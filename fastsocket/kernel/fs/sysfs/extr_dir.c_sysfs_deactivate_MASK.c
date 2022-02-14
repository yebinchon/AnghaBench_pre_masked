
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* completion; } ;
struct sysfs_dirent {int s_flags; int s_active; TYPE_1__ u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sysfs_dirent *VAR_3)
{
 FUNC_1(VAR_2);
 int VAR_4;

 FUNC_0(!(VAR_3->s_flags & VAR_1));
 VAR_3->u.completion = (void *)&VAR_2;




 VAR_4 = FUNC_2(VAR_0, &VAR_3->s_active);

 if (VAR_4 != VAR_0)
  FUNC_3(&VAR_2);
}
