
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct pending {int nsyms; struct pending* next; struct symbol** symbol; } ;


 char* FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

struct symbol *
FUNC_2 (struct pending *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3;
  char *VAR_4;

  while (VAR_0 != ((void*)0))
    {
      for (VAR_3 = VAR_0->nsyms; --VAR_3 >= 0;)
 {
   VAR_4 = FUNC_0 (VAR_0->symbol[VAR_3]);
   if (*VAR_4 == *VAR_1 && FUNC_1 (VAR_4, VAR_1, VAR_2) == 0 &&
       VAR_4[VAR_2] == '\0')
     {
       return (VAR_0->symbol[VAR_3]);
     }
 }
      VAR_0 = VAR_0->next;
    }
  return (((void*)0));
}
