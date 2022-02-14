
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct internal_syment {scalar_t__ n_sclass; scalar_t__ n_value; void* n_scnum; } ;
struct TYPE_8__ {int flags; scalar_t__ value; TYPE_5__* section; } ;
struct TYPE_9__ {TYPE_2__ symbol; } ;
typedef TYPE_3__ coff_symbol_type ;
typedef int bfd ;
struct TYPE_10__ {TYPE_1__* output_section; scalar_t__ output_offset; } ;
struct TYPE_7__ {scalar_t__ vma; scalar_t__ lma; void* target_index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_5,
      coff_symbol_type *VAR_6,
      struct internal_syment *VAR_7)
{

  if (FUNC_1 (VAR_6->symbol.section))
    {

      VAR_7->n_scnum = VAR_4;
      VAR_7->n_value = VAR_6->symbol.value;
    }
  else if ((VAR_6->symbol.flags & VAR_0) != 0
    && (VAR_6->symbol.flags & VAR_1) == 0)
    {
      VAR_7->n_value = VAR_6->symbol.value;
    }
  else if (FUNC_2 (VAR_6->symbol.section))
    {
      VAR_7->n_scnum = VAR_4;
      VAR_7->n_value = 0;
    }

  else
    {
      if (VAR_6->symbol.section)
 {
   VAR_7->n_scnum =
     VAR_6->symbol.section->output_section->target_index;

   VAR_7->n_value = (VAR_6->symbol.value
        + VAR_6->symbol.section->output_offset);
   if (! FUNC_3 (VAR_5))
            {
              VAR_7->n_value += (VAR_7->n_sclass == VAR_2)
                ? VAR_6->symbol.section->output_section->lma
                : VAR_6->symbol.section->output_section->vma;
            }
 }
      else
 {
   FUNC_0 (0);

   VAR_7->n_scnum = VAR_3;
   VAR_7->n_value = VAR_6->symbol.value;
 }
    }
}
