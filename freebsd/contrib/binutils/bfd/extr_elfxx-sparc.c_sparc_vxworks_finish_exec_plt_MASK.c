
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct bfd_link_info {int dummy; } ;
struct TYPE_17__ {TYPE_10__* hplt; TYPE_9__* hgot; } ;
struct _bfd_sparc_elf_link_hash_table {TYPE_11__ elf; TYPE_8__* srelplt2; TYPE_7__* splt; } ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_21__ {int value; TYPE_2__* section; } ;
struct TYPE_22__ {TYPE_3__ def; } ;
struct TYPE_23__ {TYPE_4__ u; } ;
struct TYPE_27__ {int indx; TYPE_5__ root; } ;
struct TYPE_26__ {int size; int * contents; } ;
struct TYPE_25__ {scalar_t__ output_offset; TYPE_6__* output_section; scalar_t__ contents; } ;
struct TYPE_24__ {scalar_t__ vma; } ;
struct TYPE_20__ {int output_offset; TYPE_1__* output_section; } ;
struct TYPE_19__ {int vma; } ;
struct TYPE_18__ {int r_addend; void* r_info; scalar_t__ r_offset; } ;
struct TYPE_16__ {int indx; } ;
typedef TYPE_12__ Elf_Internal_Rela ;
typedef int Elf32_External_Rela ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_1 (struct bfd_link_info*) ;
 int FUNC_2 (int *,int *,TYPE_12__*) ;
 int FUNC_3 (int *,TYPE_12__*,int *) ;
 int FUNC_4 (int *,TYPE_12__*,int *) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_4, struct bfd_link_info *VAR_5)
{
  struct _bfd_sparc_elf_link_hash_table *VAR_6;
  Elf_Internal_Rela VAR_7;
  bfd_vma VAR_8;
  bfd_byte *VAR_9;

  VAR_6 = FUNC_1 (VAR_5);


  VAR_8 = (VAR_6->elf.hgot->root.u.def.section->output_section->vma
       + VAR_6->elf.hgot->root.u.def.section->output_offset
       + VAR_6->elf.hgot->root.u.def.value);


  FUNC_5 (VAR_4,
       VAR_3[0] + ((VAR_8 + 8) >> 10),
       VAR_6->splt->contents);
  FUNC_5 (VAR_4,
       VAR_3[1] + ((VAR_8 + 8) & 0x3ff),
       VAR_6->splt->contents + 4);
  FUNC_5 (VAR_4,
       VAR_3[2],
       VAR_6->splt->contents + 8);
  FUNC_5 (VAR_4,
       VAR_3[3],
       VAR_6->splt->contents + 12);
  FUNC_5 (VAR_4,
       VAR_3[4],
       VAR_6->splt->contents + 16);

  VAR_9 = VAR_6->srelplt2->contents;


  VAR_7.r_offset = (VAR_6->splt->output_section->vma
     + VAR_6->splt->output_offset);
  VAR_7.r_info = FUNC_0 (VAR_6->elf.hgot->indx, VAR_1);
  VAR_7.r_addend = 8;
  FUNC_4 (VAR_4, &VAR_7, VAR_9);
  VAR_9 += sizeof (Elf32_External_Rela);


  VAR_7.r_offset += 4;
  VAR_7.r_info = FUNC_0 (VAR_6->elf.hgot->indx, VAR_2);
  FUNC_4 (VAR_4, &VAR_7, VAR_9);
  VAR_9 += sizeof (Elf32_External_Rela);




  while (VAR_9 < VAR_6->srelplt2->contents + VAR_6->srelplt2->size)
    {
      Elf_Internal_Rela VAR_10;


      FUNC_2 (VAR_4, VAR_9, &VAR_10);
      VAR_10.r_info = FUNC_0 (VAR_6->elf.hgot->indx, VAR_1);
      FUNC_3 (VAR_4, &VAR_10, VAR_9);
      VAR_9 += sizeof (Elf32_External_Rela);


      FUNC_2 (VAR_4, VAR_9, &VAR_10);
      VAR_10.r_info = FUNC_0 (VAR_6->elf.hgot->indx, VAR_2);
      FUNC_3 (VAR_4, &VAR_10, VAR_9);
      VAR_9 += sizeof (Elf32_External_Rela);


      FUNC_2 (VAR_4, VAR_9, &VAR_10);
      VAR_10.r_info = FUNC_0 (VAR_6->elf.hplt->indx, VAR_0);
      FUNC_3 (VAR_4, &VAR_10, VAR_9);
      VAR_9 += sizeof (Elf32_External_Rela);
    }
}
