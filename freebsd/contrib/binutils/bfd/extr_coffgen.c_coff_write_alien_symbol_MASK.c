
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_18__ {scalar_t__ n_numaux; int n_sclass; scalar_t__ n_type; scalar_t__ n_flags; scalar_t__ n_value; void* n_scnum; } ;
struct TYPE_19__ {TYPE_2__ syment; } ;
struct TYPE_20__ {TYPE_3__ u; } ;
typedef TYPE_4__ combined_entry_type ;
struct TYPE_21__ {int symbol; } ;
typedef TYPE_5__ coff_symbol_type ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_22__ {int flags; char* name; TYPE_12__* section; scalar_t__ value; } ;
typedef TYPE_6__ asymbol ;
typedef int asection ;
struct TYPE_17__ {scalar_t__ vma; void* target_index; } ;
struct TYPE_16__ {scalar_t__ flags; } ;
struct TYPE_15__ {TYPE_1__* output_section; scalar_t__ output_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_14__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_12__*) ;
 scalar_t__ FUNC_2 (TYPE_12__*) ;
 TYPE_5__* FUNC_3 (int *,TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_6__*,TYPE_4__*,int *,int *,int **,int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_10,
    asymbol *VAR_11,
    bfd_vma *VAR_12,
    bfd_size_type *VAR_13,
    asection **VAR_14,
    bfd_size_type *VAR_15)
{
  combined_entry_type *VAR_16;
  combined_entry_type VAR_17;

  VAR_16 = &VAR_17;
  VAR_16->u.syment.n_type = VAR_9;
  VAR_16->u.syment.n_flags = 0;
  if (FUNC_2 (VAR_11->section))
    {
      VAR_16->u.syment.n_scnum = VAR_7;
      VAR_16->u.syment.n_value = VAR_11->value;
    }
  else if (FUNC_1 (VAR_11->section))
    {
      VAR_16->u.syment.n_scnum = VAR_7;
      VAR_16->u.syment.n_value = VAR_11->value;
    }
  else if (VAR_11->flags & VAR_0)
    {




      VAR_11->name = "";
      return VAR_8;
    }
  else
    {
      VAR_16->u.syment.n_scnum =
 VAR_11->section->output_section->target_index;
      VAR_16->u.syment.n_value = (VAR_11->value
      + VAR_11->section->output_offset);
      if (! FUNC_5 (VAR_10))
 VAR_16->u.syment.n_value += VAR_11->section->output_section->vma;



      {
 coff_symbol_type *VAR_18 = FUNC_3 (VAR_10, VAR_11);
 if (VAR_18 != (coff_symbol_type *) ((void*)0))
   VAR_16->u.syment.n_flags = FUNC_0 (&VAR_18->symbol)->flags;
      }
    }

  VAR_16->u.syment.n_type = 0;
  if (VAR_11->flags & VAR_1)
    VAR_16->u.syment.n_sclass = VAR_5;
  else if (VAR_11->flags & VAR_2)
    VAR_16->u.syment.n_sclass = FUNC_5 (VAR_10) ? VAR_4 : VAR_6;
  else
    VAR_16->u.syment.n_sclass = VAR_3;
  VAR_16->u.syment.n_numaux = 0;

  return FUNC_4 (VAR_10, VAR_11, VAR_16, VAR_12, VAR_13,
       VAR_14, VAR_15);
}
