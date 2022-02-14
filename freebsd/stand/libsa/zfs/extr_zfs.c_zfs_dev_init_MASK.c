
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_2__ {int (* arch_zfs_probe ) () ;} ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(void)
{
 spa_t *VAR_4;
 spa_t *VAR_5;
 spa_t *VAR_6;

 FUNC_5();
 if (VAR_1.arch_zfs_probe == ((void*)0))
  return (VAR_0);
 VAR_1.arch_zfs_probe();

 VAR_6 = ((void*)0);
 VAR_4 = FUNC_0(&VAR_3);
 while (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  if (FUNC_6(VAR_4)) {
   if (VAR_6 == ((void*)0))
    FUNC_3(&VAR_3, VAR_2);
   else
    FUNC_2(&VAR_3, VAR_6, VAR_2);
  } else
   VAR_6 = VAR_4;
  VAR_4 = VAR_5;
 }
 return (0);
}
