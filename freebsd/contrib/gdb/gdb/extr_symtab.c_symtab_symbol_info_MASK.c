
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol_search {TYPE_1__* symtab; int block; int symbol; int * msymbol; struct symbol_search* next; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ domain_enum ;
struct TYPE_2__ {char* filename; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (struct symbol_search*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,TYPE_1__*,int ,int ,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,scalar_t__,int ,char**,struct symbol_search**) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_2, domain_enum VAR_3, int VAR_4)
{
  static char *VAR_5[]
  =
  {"variable", "function", "type", "method"};
  struct symbol_search *VAR_6;
  struct symbol_search *VAR_7;
  struct cleanup *VAR_8;
  char *VAR_9 = ((void*)0);
  int VAR_10 = 1;


  FUNC_5 (VAR_2, VAR_3, 0, (char **) ((void*)0), &VAR_6);
  VAR_8 = FUNC_1 (VAR_6);

  FUNC_4 (VAR_2
     ? "All %ss matching regular expression \"%s\":\n"
     : "All defined %ss:\n",
     VAR_5[(int) (VAR_3 - VAR_1)], VAR_2);

  for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      VAR_0;

      if (VAR_7->msymbol != ((void*)0))
 {
   if (VAR_10)
     {
       FUNC_4 ("\nNon-debugging symbols:\n");
       VAR_10 = 0;
     }
   FUNC_2 (VAR_7->msymbol);
 }
      else
 {
   FUNC_3 (VAR_3,
        VAR_7->symtab,
        VAR_7->symbol,
        VAR_7->block,
        VAR_9);
   VAR_9 = VAR_7->symtab->filename;
 }
    }

  FUNC_0 (VAR_8);
}
