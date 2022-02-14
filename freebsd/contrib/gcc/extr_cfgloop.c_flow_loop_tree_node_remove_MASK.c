
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {int depth; int * pred; struct loop* next; struct loop* inner; struct loop* outer; } ;


 int FUNC_0 (int *) ;

void
FUNC_1 (struct loop *VAR_0)
{
  struct loop *VAR_1, *VAR_2;

  VAR_2 = VAR_0->outer;
  VAR_0->outer = ((void*)0);


  if (VAR_2->inner == VAR_0)
    VAR_2->inner = VAR_0->next;
  else
    {
      for (VAR_1 = VAR_2->inner; VAR_1->next != VAR_0; VAR_1 = VAR_1->next);
      VAR_1->next = VAR_0->next;
    }

  VAR_0->depth = -1;
  FUNC_0 (VAR_0->pred);
  VAR_0->pred = ((void*)0);
}
