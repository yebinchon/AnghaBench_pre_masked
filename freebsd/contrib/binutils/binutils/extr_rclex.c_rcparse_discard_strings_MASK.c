
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_string {struct alloc_string* next; struct alloc_string* s; } ;


 int FUNC_0 (struct alloc_string*) ;
 struct alloc_string* VAR_0 ;

void
FUNC_1 (void)
{
  struct alloc_string *VAR_1;

  VAR_1 = VAR_0;
  while (VAR_1 != ((void*)0))
    {
      struct alloc_string *VAR_2;

      FUNC_0 (VAR_1->s);
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
      VAR_1 = VAR_2;
    }

  VAR_0 = ((void*)0);
}
