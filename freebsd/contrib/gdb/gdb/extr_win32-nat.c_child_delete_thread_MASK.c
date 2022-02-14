
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; int h; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6 (DWORD VAR_2)
{
  thread_info *VAR_3;

  if (VAR_0)
    FUNC_3 ("[Deleting %s]\n", FUNC_4 (FUNC_2 (VAR_2)));
  FUNC_1 (FUNC_2 (VAR_2));

  for (VAR_3 = &VAR_1;
       VAR_3->next != ((void*)0) && VAR_3->next->id != VAR_2;
       VAR_3 = VAR_3->next)
    continue;

  if (VAR_3->next != ((void*)0))
    {
      thread_info *VAR_4 = VAR_3->next;
      VAR_3->next = VAR_4->next;
      FUNC_0 (VAR_4->h);
      FUNC_5 (VAR_4);
    }
}
