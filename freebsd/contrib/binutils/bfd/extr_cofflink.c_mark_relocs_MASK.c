
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct internal_reloc {size_t r_symndx; } ;
struct coff_final_link_info {int* sym_indices; scalar_t__ internal_relocs; TYPE_2__* section_info; TYPE_1__* info; int external_relocs; } ;
struct TYPE_12__ {TYPE_4__* sections; } ;
typedef TYPE_3__ bfd ;
struct TYPE_13__ {int flags; int reloc_count; TYPE_7__* output_section; struct TYPE_13__* next; } ;
typedef TYPE_4__ asection ;
struct TYPE_14__ {size_t target_index; scalar_t__ reloc_count; } ;
struct TYPE_11__ {scalar_t__ relocs; } ;
struct TYPE_10__ {scalar_t__ relocatable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct internal_reloc* FUNC_0 (TYPE_3__*,TYPE_4__*,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_7__* VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2 (struct coff_final_link_info *VAR_4, bfd *VAR_5)
{
  asection * VAR_6;

  if ((FUNC_1 (VAR_5) & VAR_1) == 0)
    return;

  for (VAR_6 = VAR_5->sections; VAR_6 != (asection *) ((void*)0); VAR_6 = VAR_6->next)
    {
      struct internal_reloc * VAR_7;
      struct internal_reloc * VAR_8;
      struct internal_reloc * VAR_9;

      if ((VAR_6->flags & VAR_2) == 0 || VAR_6->reloc_count < 1)
 continue;

      if (VAR_6->output_section == VAR_3)
 continue;


      VAR_7 = FUNC_0
 (VAR_5, VAR_6, VAR_0,
  VAR_4->external_relocs,
  VAR_4->info->relocatable,
  (VAR_4->info->relocatable
   ? (VAR_4->section_info[ VAR_6->output_section->target_index ].relocs + VAR_6->output_section->reloc_count)
   : VAR_4->internal_relocs)
 );

      if (VAR_7 == ((void*)0))
 continue;

      VAR_8 = VAR_7;
      VAR_9 = VAR_8 + VAR_6->reloc_count;





      for (; VAR_8 < VAR_9; VAR_8++)
 VAR_4->sym_indices[ VAR_8->r_symndx ] = -1;
    }
}
