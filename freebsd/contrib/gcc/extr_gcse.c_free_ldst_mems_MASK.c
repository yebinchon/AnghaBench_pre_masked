
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {struct ls_expr* next; } ;


 int FUNC_0 (struct ls_expr*) ;
 int FUNC_1 (int *) ;
 struct ls_expr* VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_1)
    FUNC_1 (VAR_1);
  VAR_1 = ((void*)0);

  while (VAR_0)
    {
      struct ls_expr * VAR_2 = VAR_0;

      VAR_0 = VAR_0->next;

      FUNC_0 (VAR_2);
    }

  VAR_0 = ((void*)0);
}
