
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
struct expr_symbol_line {char* file; unsigned int line; int * sym; struct expr_symbol_line* next; } ;


 struct expr_symbol_line* VAR_0 ;

int
FUNC_0 (symbolS *VAR_1, char **VAR_2, unsigned int *VAR_3)
{
  register struct expr_symbol_line *VAR_4;

  for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_4->sym == VAR_1)
 {
   *VAR_2 = VAR_4->file;
   *VAR_3 = VAR_4->line;
   return 1;
 }
    }

  return 0;
}
