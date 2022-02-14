
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pr_stack {struct pr_stack* next; int * method; int visibility; int type; } ;
struct pr_handle {struct pr_stack* stack; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pr_stack*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct pr_handle *VAR_3, const char *VAR_4)
{
  struct pr_stack *VAR_5;

  if (VAR_4 == ((void*)0))
    return VAR_1;

  VAR_5 = (struct pr_stack *) FUNC_1 (sizeof *VAR_5);
  FUNC_0 (VAR_5, 0, sizeof *VAR_5);

  VAR_5->type = FUNC_2 (VAR_4);
  VAR_5->visibility = VAR_0;
  VAR_5->method = ((void*)0);
  VAR_5->next = VAR_3->stack;
  VAR_3->stack = VAR_5;

  return VAR_2;
}
