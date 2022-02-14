
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct breakpoint {scalar_t__ type; int thread; } ;
typedef TYPE_1__* bpstat ;
struct TYPE_3__ {struct breakpoint* breakpoint_at; struct TYPE_3__* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

struct breakpoint *
FUNC_2 (bpstat VAR_2)
{
  int VAR_3;

  if (VAR_2 == ((void*)0))
    FUNC_0 ("Internal error (bpstat_find_step_resume_breakpoint)");

  VAR_3 = FUNC_1 (VAR_1);

  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {
      if ((VAR_2->breakpoint_at != ((void*)0)) &&
   (VAR_2->breakpoint_at->type == VAR_0) &&
   (VAR_2->breakpoint_at->thread == VAR_3 ||
    VAR_2->breakpoint_at->thread == -1))
 return VAR_2->breakpoint_at;
    }

  FUNC_0 ("Internal error (no step_resume breakpoint found)");
}
