
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {struct lwp_info* next; int signalled; int stopped; } ;


 struct lwp_info* VAR_0 ;
 int FUNC_0 (struct lwp_info*,int *) ;
 int FUNC_1 (struct lwp_info*,int *) ;
 int FUNC_2 (struct lwp_info*,int *) ;
 int FUNC_3 (struct lwp_info*,int *) ;

__attribute__((used)) static int
FUNC_4 (struct lwp_info *VAR_1, void *VAR_2)
{
  struct lwp_info *VAR_3;

  if (!VAR_1->stopped && !VAR_1->signalled)
    {
      FUNC_2 (VAR_1, ((void*)0));
      FUNC_3 (VAR_1, ((void*)0));

      for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
 if (VAR_1 == VAR_3)
   {
     FUNC_0 (VAR_1, ((void*)0));
     FUNC_1 (VAR_1, ((void*)0));
   }
    }
  return 0;
}
