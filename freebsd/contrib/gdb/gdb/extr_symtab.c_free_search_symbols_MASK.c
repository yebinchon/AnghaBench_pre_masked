
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_search {struct symbol_search* next; } ;


 int FUNC_0 (struct symbol_search*) ;

void
FUNC_1 (struct symbol_search *VAR_0)
{
  struct symbol_search *VAR_1;
  struct symbol_search *VAR_2;

  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
}
