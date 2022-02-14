
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {unsigned int n_sclass; int n_flags; scalar_t__ n_value; void* n_scnum; int n_type; } ;
struct TYPE_18__ {TYPE_2__ syment; } ;
struct TYPE_19__ {TYPE_3__ u; } ;
typedef TYPE_4__ combined_entry_type ;
struct TYPE_20__ {TYPE_4__* native; int symbol; } ;
typedef TYPE_5__ coff_symbol_type ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_21__ {TYPE_10__* section; scalar_t__ value; } ;
typedef TYPE_6__ asymbol ;
struct TYPE_16__ {scalar_t__ vma; void* target_index; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {TYPE_1__* output_section; scalar_t__ output_offset; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_13__* FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int *,int) ;
 TYPE_5__* FUNC_5 (int *,TYPE_6__*) ;
 int FUNC_6 (int *) ;

bfd_boolean
FUNC_7 (bfd * VAR_5,
      asymbol * VAR_6,
      unsigned int VAR_7)
{
  coff_symbol_type * VAR_8;

  VAR_8 = FUNC_5 (VAR_5, VAR_6);
  if (VAR_8 == ((void*)0))
    {
      FUNC_3 (VAR_4);
      return VAR_0;
    }
  else if (VAR_8->native == ((void*)0))
    {





      combined_entry_type * VAR_9;
      bfd_size_type VAR_10 = sizeof (* VAR_9);

      VAR_9 = FUNC_4 (VAR_5, VAR_10);
      if (VAR_9 == ((void*)0))
 return VAR_0;

      VAR_9->u.syment.n_type = VAR_3;
      VAR_9->u.syment.n_sclass = VAR_7;

      if (FUNC_2 (VAR_6->section))
 {
   VAR_9->u.syment.n_scnum = VAR_1;
   VAR_9->u.syment.n_value = VAR_6->value;
 }
      else if (FUNC_1 (VAR_6->section))
 {
   VAR_9->u.syment.n_scnum = VAR_1;
   VAR_9->u.syment.n_value = VAR_6->value;
 }
      else
 {
   VAR_9->u.syment.n_scnum =
     VAR_6->section->output_section->target_index;
   VAR_9->u.syment.n_value = (VAR_6->value
          + VAR_6->section->output_offset);
   if (! FUNC_6 (VAR_5))
     VAR_9->u.syment.n_value += VAR_6->section->output_section->vma;



   VAR_9->u.syment.n_flags = FUNC_0 (& VAR_8->symbol)->flags;
 }

      VAR_8->native = VAR_9;
    }
  else
    VAR_8->native->u.syment.n_sclass = VAR_7;

  return VAR_2;
}
