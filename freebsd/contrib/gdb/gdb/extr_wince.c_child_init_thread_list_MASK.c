
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; struct TYPE_4__* next; } ;
typedef TYPE_1__ thread_info ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  thread_info *VAR_1 = &VAR_0;

  FUNC_0 (("gdb: child_init_thread_list\n"));
  FUNC_2 ();
  while (VAR_1->next != ((void*)0))
    {
      thread_info *VAR_2 = VAR_1->next;
      VAR_1->next = VAR_2->next;
      (void) FUNC_1 (VAR_2->h);
      FUNC_3 (VAR_2);
    }
}
