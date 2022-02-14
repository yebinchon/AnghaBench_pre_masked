
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symtab_and_line {scalar_t__ section; int pc; TYPE_1__* symtab; int line; } ;
struct symbol {int dummy; } ;
typedef struct symbol minimal_symbol ;
struct blockvector {int dummy; } ;
struct block {int dummy; } ;
struct TYPE_3__ {char* filename; int objfile; } ;
typedef int CORE_ADDR ;


 struct block* FUNC_0 (struct blockvector*,int) ;
 void* FUNC_1 (struct symbol*) ;
 struct symbol* FUNC_2 (struct block*) ;
 struct blockvector* FUNC_3 (int ,int ,int*,TYPE_1__*) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (struct symbol*,int ) ;
 struct symbol* FUNC_7 (int ) ;

void
FUNC_8 (struct symtab_and_line *VAR_0)
{
  CORE_ADDR VAR_1;

  if (VAR_0->pc == 0 && VAR_0->symtab != ((void*)0))
    {
      if (!FUNC_5 (VAR_0->symtab, VAR_0->line, &VAR_1))
 FUNC_4 ("No line %d in file \"%s\".",
        VAR_0->line, VAR_0->symtab->filename);
      VAR_0->pc = VAR_1;
    }

  if (VAR_0->section == 0 && VAR_0->symtab != ((void*)0))
    {
      struct blockvector *VAR_2;
      struct block *VAR_3;
      struct symbol *VAR_4;
      int VAR_5;

      VAR_2 = FUNC_3 (VAR_0->pc, 0, &VAR_5, VAR_0->symtab);
      if (VAR_2 != ((void*)0))
 {
   VAR_3 = FUNC_0 (VAR_2, VAR_5);
   VAR_4 = FUNC_2 (VAR_3);
   if (VAR_4 != ((void*)0))
     {
       FUNC_6 (VAR_4, VAR_0->symtab->objfile);
       VAR_0->section = FUNC_1 (VAR_4);
     }
   else
     {





       struct minimal_symbol *VAR_6;

       VAR_6 = FUNC_7 (VAR_0->pc);
       if (VAR_6)
  VAR_0->section = FUNC_1 (VAR_6);
     }
 }
    }
}
