
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; int suspend_count; int reload_context; int h; struct TYPE_5__* next; } ;
typedef TYPE_1__ thread_info ;
struct TYPE_6__ {scalar_t__ dwThreadId; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 TYPE_4__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static thread_info *
FUNC_1 (DWORD VAR_2, int VAR_3)
{
  thread_info *VAR_4;

  for (VAR_4 = &VAR_1; (VAR_4 = VAR_4->next) != ((void*)0);)
    if (VAR_4->id == VAR_2)
      {
 if (!VAR_4->suspend_count && VAR_3)
   {
     if (VAR_3 > 0 && VAR_2 != VAR_0.dwThreadId)
       VAR_4->suspend_count = FUNC_0 (VAR_4->h) + 1;
     else if (VAR_3 < 0)
       VAR_4->suspend_count = -1;
     VAR_4->reload_context = 1;
   }
 return VAR_4;
      }

  return ((void*)0);
}
