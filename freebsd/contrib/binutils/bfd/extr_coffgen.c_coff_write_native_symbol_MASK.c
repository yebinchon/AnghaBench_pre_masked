
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_20__ {unsigned int x_lnnoptr; } ;
struct TYPE_21__ {TYPE_3__ x_fcn; } ;
struct TYPE_22__ {TYPE_4__ x_fcnary; } ;
union internal_auxent {TYPE_5__ x_sym; } ;
struct TYPE_18__ {scalar_t__ n_numaux; } ;
struct TYPE_19__ {union internal_auxent auxent; TYPE_1__ syment; } ;
struct TYPE_25__ {TYPE_2__ u; } ;
typedef TYPE_8__ combined_entry_type ;
struct TYPE_16__ {TYPE_7__* section; } ;
struct TYPE_26__ {TYPE_11__ symbol; int done_lineno; TYPE_10__* lineno; TYPE_8__* native; } ;
typedef TYPE_9__ coff_symbol_type ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_23__ {int offset; } ;
struct TYPE_15__ {scalar_t__ line_number; TYPE_6__ u; } ;
typedef TYPE_10__ alent ;
struct TYPE_24__ {TYPE_14__* output_section; scalar_t__ output_offset; int * owner; } ;
struct TYPE_17__ {unsigned int moving_line_filepos; scalar_t__ vma; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (int *,TYPE_11__*,TYPE_8__*,int *,int *,int **,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_1,
     coff_symbol_type *VAR_2,
     bfd_vma *VAR_3,
     bfd_size_type *VAR_4,
     asection **VAR_5,
     bfd_size_type *VAR_6)
{
  combined_entry_type *VAR_7 = VAR_2->native;
  alent *VAR_8 = VAR_2->lineno;




  if (VAR_8 && !VAR_2->done_lineno && VAR_2->symbol.section->owner != ((void*)0))
    {
      unsigned int VAR_9 = 0;

      VAR_8[VAR_9].u.offset = *VAR_3;
      if (VAR_7->u.syment.n_numaux)
 {
   union internal_auxent *VAR_10 = &((VAR_7 + 1)->u.auxent);

   VAR_10->x_sym.x_fcnary.x_fcn.x_lnnoptr =
     VAR_2->symbol.section->output_section->moving_line_filepos;
 }


      VAR_9++;
      while (VAR_8[VAR_9].line_number != 0)
 {
   VAR_8[VAR_9].u.offset +=
     (VAR_2->symbol.section->output_section->vma
      + VAR_2->symbol.section->output_offset);
   VAR_9++;
 }
      VAR_2->done_lineno = VAR_0;

      if (! FUNC_1 (VAR_2->symbol.section->output_section))
 VAR_2->symbol.section->output_section->moving_line_filepos +=
   VAR_9 * FUNC_0 (VAR_1);
    }

  return FUNC_2 (VAR_1, &(VAR_2->symbol), VAR_7, VAR_3,
       VAR_4, VAR_5,
       VAR_6);
}
