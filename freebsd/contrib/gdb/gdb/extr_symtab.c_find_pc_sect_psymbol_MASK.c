
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct partial_symtab {scalar_t__ textlow; int globals_offset; int n_global_syms; int statics_offset; int n_static_syms; TYPE_3__* objfile; } ;
struct partial_symbol {int dummy; } ;
typedef int asection ;
struct TYPE_5__ {struct partial_symbol** list; } ;
struct TYPE_4__ {struct partial_symbol** list; } ;
struct TYPE_6__ {TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct partial_symbol*) ;
 scalar_t__ FUNC_1 (struct partial_symbol*) ;
 scalar_t__ FUNC_2 (struct partial_symbol*) ;
 scalar_t__ FUNC_3 (struct partial_symbol*) ;
 scalar_t__ VAR_1 ;
 struct partial_symtab* FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (struct partial_symbol*,TYPE_3__*) ;

struct partial_symbol *
FUNC_6 (struct partial_symtab *VAR_2, CORE_ADDR VAR_3,
        asection *VAR_4)
{
  struct partial_symbol *VAR_5 = ((void*)0), *VAR_6, **VAR_7;
  CORE_ADDR VAR_8;

  if (!VAR_2)
    VAR_2 = FUNC_4 (VAR_3, VAR_4);
  if (!VAR_2)
    return 0;


  VAR_8 = (VAR_2->textlow != 0) ? VAR_2->textlow - 1 : 0;




  for (VAR_7 = VAR_2->objfile->global_psymbols.list + VAR_2->globals_offset;
    (VAR_7 - (VAR_2->objfile->global_psymbols.list + VAR_2->globals_offset)
     < VAR_2->n_global_syms);
       VAR_7++)
    {
      VAR_6 = *VAR_7;
      if (FUNC_2 (VAR_6) == VAR_1
   && FUNC_1 (VAR_6) == VAR_0
   && VAR_3 >= FUNC_3 (VAR_6)
   && (FUNC_3 (VAR_6) > VAR_8
       || (VAR_2->textlow == 0
    && VAR_8 == 0 && FUNC_3 (VAR_6) == 0)))
 {
   if (VAR_4)
     {
       FUNC_5 (VAR_6, VAR_2->objfile);
       if (FUNC_0 (VAR_6) != VAR_4)
  continue;
     }
   VAR_8 = FUNC_3 (VAR_6);
   VAR_5 = VAR_6;
 }
    }

  for (VAR_7 = VAR_2->objfile->static_psymbols.list + VAR_2->statics_offset;
    (VAR_7 - (VAR_2->objfile->static_psymbols.list + VAR_2->statics_offset)
     < VAR_2->n_static_syms);
       VAR_7++)
    {
      VAR_6 = *VAR_7;
      if (FUNC_2 (VAR_6) == VAR_1
   && FUNC_1 (VAR_6) == VAR_0
   && VAR_3 >= FUNC_3 (VAR_6)
   && (FUNC_3 (VAR_6) > VAR_8
       || (VAR_2->textlow == 0
    && VAR_8 == 0 && FUNC_3 (VAR_6) == 0)))
 {
   if (VAR_4)
     {
       FUNC_5 (VAR_6, VAR_2->objfile);
       if (FUNC_0 (VAR_6) != VAR_4)
  continue;
     }
   VAR_8 = FUNC_3 (VAR_6);
   VAR_5 = VAR_6;
 }
    }

  return VAR_5;
}
