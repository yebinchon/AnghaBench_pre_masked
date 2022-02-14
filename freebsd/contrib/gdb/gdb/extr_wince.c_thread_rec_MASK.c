
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ContextFlags; } ;
struct TYPE_6__ {scalar_t__ id; int suspend_count; TYPE_5__ context; int h; struct TYPE_6__* next; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static thread_info *
FUNC_2 (DWORD VAR_3, int VAR_4)
{
  thread_info *VAR_5;

  for (VAR_5 = &VAR_2; (VAR_5 = VAR_5->next) != ((void*)0);)
    if (VAR_5->id == VAR_3)
      {
 if (!VAR_5->suspend_count && VAR_4)
   {
     if (VAR_4 > 0 && VAR_5 != VAR_1)
       VAR_5->suspend_count = FUNC_1 (VAR_5->h) + 1;
     else if (VAR_4 < 0)
       VAR_5->suspend_count = -1;

     VAR_5->context.ContextFlags = VAR_0;
     FUNC_0 (VAR_5->h, &VAR_5->context);
   }
 return VAR_5;
      }

  return ((void*)0);
}
