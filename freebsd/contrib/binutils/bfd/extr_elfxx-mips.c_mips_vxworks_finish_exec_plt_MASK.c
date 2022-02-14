
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
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_16__ {TYPE_10__* hgot; TYPE_9__* hplt; } ;
struct mips_elf_link_hash_table {TYPE_11__ root; TYPE_8__* srelplt2; TYPE_7__* splt; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_26__ {int indx; } ;
struct TYPE_25__ {int size; int * contents; } ;
struct TYPE_24__ {int output_offset; int * contents; TYPE_6__* output_section; } ;
struct TYPE_23__ {int vma; } ;
struct TYPE_20__ {int value; TYPE_2__* section; } ;
struct TYPE_21__ {TYPE_3__ def; } ;
struct TYPE_22__ {TYPE_4__ u; } ;
struct TYPE_19__ {int output_offset; TYPE_1__* output_section; } ;
struct TYPE_18__ {int vma; } ;
struct TYPE_17__ {int r_offset; void* r_info; scalar_t__ r_addend; } ;
struct TYPE_15__ {int indx; TYPE_5__ root; } ;
typedef TYPE_12__ Elf_Internal_Rela ;
typedef int Elf32_External_Rela ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,TYPE_12__*) ;
 int FUNC_2 (int *,TYPE_12__*,int *) ;
 int FUNC_3 (int *,int const,int *) ;
 struct mips_elf_link_hash_table* FUNC_4 (struct bfd_link_info*) ;
 int* VAR_3 ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_4, struct bfd_link_info *VAR_5)
{
  Elf_Internal_Rela VAR_6;
  bfd_byte *VAR_7;
  bfd_vma VAR_8, VAR_9, VAR_10, VAR_11;
  static const bfd_vma *VAR_12;
  struct mips_elf_link_hash_table *VAR_13;

  VAR_13 = FUNC_4 (VAR_5);
  VAR_12 = VAR_3;


  VAR_8 = (VAR_13->root.hgot->root.u.def.section->output_section->vma
        + VAR_13->root.hgot->root.u.def.section->output_offset
        + VAR_13->root.hgot->root.u.def.value);

  VAR_9 = ((VAR_8 + 0x8000) >> 16) & 0xffff;
  VAR_10 = VAR_8 & 0xffff;


  VAR_11 = VAR_13->splt->output_section->vma + VAR_13->splt->output_offset;


  VAR_7 = VAR_13->splt->contents;
  FUNC_3 (VAR_4, VAR_12[0] | VAR_9, VAR_7);
  FUNC_3 (VAR_4, VAR_12[1] | VAR_10, VAR_7 + 4);
  FUNC_3 (VAR_4, VAR_12[2], VAR_7 + 8);
  FUNC_3 (VAR_4, VAR_12[3], VAR_7 + 12);
  FUNC_3 (VAR_4, VAR_12[4], VAR_7 + 16);
  FUNC_3 (VAR_4, VAR_12[5], VAR_7 + 20);


  VAR_7 = VAR_13->srelplt2->contents;
  VAR_6.r_offset = VAR_11;
  VAR_6.r_info = FUNC_0 (VAR_13->root.hgot->indx, VAR_1);
  VAR_6.r_addend = 0;
  FUNC_2 (VAR_4, &VAR_6, VAR_7);
  VAR_7 += sizeof (Elf32_External_Rela);



  VAR_6.r_offset += 4;
  VAR_6.r_info = FUNC_0 (VAR_13->root.hgot->indx, VAR_2);
  FUNC_2 (VAR_4, &VAR_6, VAR_7);
  VAR_7 += sizeof (Elf32_External_Rela);




  while (VAR_7 < VAR_13->srelplt2->contents + VAR_13->srelplt2->size)
    {
      Elf_Internal_Rela VAR_14;

      FUNC_1 (VAR_4, VAR_7, &VAR_14);
      VAR_14.r_info = FUNC_0 (VAR_13->root.hplt->indx, VAR_0);
      FUNC_2 (VAR_4, &VAR_14, VAR_7);
      VAR_7 += sizeof (Elf32_External_Rela);

      FUNC_1 (VAR_4, VAR_7, &VAR_14);
      VAR_14.r_info = FUNC_0 (VAR_13->root.hgot->indx, VAR_1);
      FUNC_2 (VAR_4, &VAR_14, VAR_7);
      VAR_7 += sizeof (Elf32_External_Rela);

      FUNC_1 (VAR_4, VAR_7, &VAR_14);
      VAR_14.r_info = FUNC_0 (VAR_13->root.hgot->indx, VAR_2);
      FUNC_2 (VAR_4, &VAR_14, VAR_7);
      VAR_7 += sizeof (Elf32_External_Rela);
    }
}
