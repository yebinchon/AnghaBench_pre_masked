
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* section; } ;
struct TYPE_13__ {TYPE_2__ symbol; TYPE_6__* lineno; } ;
typedef TYPE_3__ coff_symbol_type ;
struct TYPE_14__ {int ** outsymbols; TYPE_5__* sections; } ;
typedef TYPE_4__ bfd ;
typedef int asymbol ;
struct TYPE_15__ {scalar_t__ lineno_count; struct TYPE_15__* next; } ;
typedef TYPE_5__ asection ;
struct TYPE_16__ {scalar_t__ line_number; } ;
typedef TYPE_6__ alent ;
struct TYPE_11__ {TYPE_5__* output_section; int * owner; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_3__* FUNC_5 (int *) ;

int
FUNC_6 (bfd *VAR_0)
{
  unsigned int VAR_1 = FUNC_3 (VAR_0);
  unsigned int VAR_2;
  int VAR_3 = 0;
  asymbol **VAR_4;
  asection *VAR_5;

  if (VAR_1 == 0)
    {


      for (VAR_5 = VAR_0->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
 VAR_3 += VAR_5->lineno_count;
      return VAR_3;
    }

  for (VAR_5 = VAR_0->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    FUNC_0 (VAR_5->lineno_count == 0);

  for (VAR_4 = VAR_0->outsymbols, VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_4++)
    {
      asymbol *VAR_6 = *VAR_4;

      if (FUNC_2 (FUNC_1 (VAR_6)))
 {
   coff_symbol_type *VAR_7 = FUNC_5 (VAR_6);




   if (VAR_7->lineno != ((void*)0)
       && VAR_7->symbol.section->owner != ((void*)0))
     {


       alent *VAR_8 = VAR_7->lineno;

       do
  {
    asection * VAR_9 = VAR_7->symbol.section->output_section;


    if (! FUNC_4 (VAR_9))
      VAR_9->lineno_count ++;

    ++VAR_3;
    ++VAR_8;
  }
       while (VAR_8->line_number != 0);
     }
 }
    }

  return VAR_3;
}
