
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int (* to_find_new_threads ) () ;} ;


 struct target_ops* FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct target_ops *VAR_2;

 if (VAR_1 != ((void*)0))
  return;

 VAR_2 = FUNC_0(&VAR_0);
 if (VAR_2->to_find_new_threads != ((void*)0))
  VAR_2->to_find_new_threads();
}
