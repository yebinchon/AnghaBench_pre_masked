
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_elem {struct queue_elem* next; } ;


 struct queue_elem* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct queue_elem*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct queue_elem *VAR_2;

  FUNC_0 ();
  if (VAR_1)
    return;

  for (VAR_2 = VAR_0; VAR_2 ; VAR_2 = VAR_2->next)
    FUNC_1 (VAR_2);
}
