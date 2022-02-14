
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {int free_code; TYPE_1__* objfile; struct symtab* debugformat; struct symtab* fullname; struct symtab* line_charpos; int (* free_func ) (struct symtab*) ;} ;
struct blockvector {int free_code; TYPE_1__* objfile; struct blockvector* debugformat; struct blockvector* fullname; struct blockvector* line_charpos; int (* free_func ) (struct symtab*) ;} ;
struct TYPE_2__ {int md; } ;


 struct symtab* FUNC_0 (struct symtab*) ;
 int FUNC_1 (struct symtab*,int) ;
 int FUNC_2 (struct symtab*) ;
 struct symtab* FUNC_3 (struct symtab*) ;



 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct symtab*) ;
 int FUNC_6 (int ,struct symtab*) ;

void
FUNC_7 (struct symtab *VAR_0)
{
  int VAR_1, VAR_2;
  struct blockvector *VAR_3;

  switch (VAR_0->free_code)
    {
    case 128:



      break;

    case 130:



      VAR_3 = FUNC_0 (VAR_0);
      VAR_2 = FUNC_2 (VAR_3);
      for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
 FUNC_4 (VAR_0->objfile, FUNC_1 (VAR_3, VAR_1));

      FUNC_6 (VAR_0->objfile->md, VAR_3);


    case 129:



      if (FUNC_3 (VAR_0))
 FUNC_6 (VAR_0->objfile->md, FUNC_3 (VAR_0));
      break;
    }


  if (VAR_0->free_func != ((void*)0))
    VAR_0->free_func (VAR_0);


  if (VAR_0->line_charpos != ((void*)0))
    FUNC_6 (VAR_0->objfile->md, VAR_0->line_charpos);
  if (VAR_0->fullname != ((void*)0))
    FUNC_6 (VAR_0->objfile->md, VAR_0->fullname);
  if (VAR_0->debugformat != ((void*)0))
    FUNC_6 (VAR_0->objfile->md, VAR_0->debugformat);
  FUNC_6 (VAR_0->objfile->md, VAR_0);
}
