
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {int index; struct ls_expr* next; } ;


 struct ls_expr* VAR_0 ;

__attribute__((used)) static int
FUNC_0 (void)
{
  struct ls_expr * VAR_1;
  int VAR_2 = 0;

  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
    VAR_1->index = VAR_2++;

  return VAR_2;
}
