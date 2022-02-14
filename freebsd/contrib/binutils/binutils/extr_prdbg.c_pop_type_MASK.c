
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_stack {char* type; struct pr_stack* next; } ;
struct pr_handle {struct pr_stack* stack; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pr_stack*) ;

__attribute__((used)) static char *
FUNC_2 (struct pr_handle *VAR_0)
{
  struct pr_stack *VAR_1;
  char *VAR_2;

  FUNC_0 (VAR_0->stack != ((void*)0));

  VAR_1 = VAR_0->stack;
  VAR_0->stack = VAR_1->next;
  VAR_2 = VAR_1->type;
  FUNC_1 (VAR_1);

  return VAR_2;
}
