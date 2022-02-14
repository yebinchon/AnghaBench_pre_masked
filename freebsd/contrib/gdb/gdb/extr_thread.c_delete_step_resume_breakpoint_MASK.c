
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct breakpoint* step_resume_breakpoint; struct thread_info* next; } ;
struct breakpoint {int dummy; } ;


 int FUNC_0 (struct breakpoint*) ;
 struct thread_info* VAR_0 ;

void
FUNC_1 (void *VAR_1)
{
  struct breakpoint **VAR_2 = (struct breakpoint **) VAR_1;
  struct thread_info *VAR_3;

  if (*VAR_2 != ((void*)0))
    {
      FUNC_0 (*VAR_2);
      for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
 if (VAR_3->step_resume_breakpoint == *VAR_2)
   VAR_3->step_resume_breakpoint = ((void*)0);

      *VAR_2 = ((void*)0);
    }
}
