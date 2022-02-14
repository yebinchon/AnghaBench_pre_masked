
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int ptid; struct thread_info* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread_info*) ;
 struct thread_info* VAR_0 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct thread_info *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      if (!FUNC_1 (VAR_1))
 FUNC_0 (VAR_1->ptid);
    }
}
