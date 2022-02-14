
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol_search {int * msymbol; TYPE_1__* symtab; int block; int * symbol; struct symbol_search* next; } ;
struct cleanup {int dummy; } ;
struct TYPE_2__ {char* filename; } ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct cleanup*) ;
 struct cleanup* FUNC_5 (struct symbol_search*) ;
 int FUNC_6 (int ,TYPE_1__*,int *,int ,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,int ,char**,struct symbol_search**) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_1, int VAR_2)
{
  struct symbol_search *VAR_3;
  struct symbol_search *VAR_4;
  struct cleanup *VAR_5;

  FUNC_8 (VAR_1, VAR_0, 0, (char **) ((void*)0), &VAR_3);
  VAR_5 = FUNC_5 (VAR_3);

  for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_4->msymbol == ((void*)0))
 {
   char *VAR_6 = FUNC_2 (FUNC_11 (VAR_4->symtab->filename)
     + FUNC_11 (FUNC_0 (VAR_4->symbol))
     + 4);
   FUNC_10 (VAR_6, VAR_4->symtab->filename);
   FUNC_9 (VAR_6, ":'");
   FUNC_9 (VAR_6, FUNC_0 (VAR_4->symbol));
   FUNC_9 (VAR_6, "'");
   FUNC_3 (VAR_6, VAR_2);
   FUNC_6 (VAR_0,
        VAR_4->symtab,
        VAR_4->symbol,
        VAR_4->block,
        VAR_4->symtab->filename);
 }
      else
 {
   FUNC_3 (FUNC_0 (VAR_4->msymbol), VAR_2);
   FUNC_7 ("<function, no debug info> %s;\n",
      FUNC_1 (VAR_4->msymbol));
 }
    }

  FUNC_4 (VAR_5);
}
