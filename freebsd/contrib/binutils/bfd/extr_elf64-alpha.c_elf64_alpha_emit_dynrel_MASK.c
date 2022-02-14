
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int outrel ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_10__ {int reloc_count; int size; int * contents; scalar_t__ output_offset; TYPE_1__* output_section; } ;
typedef TYPE_2__ asection ;
struct TYPE_11__ {int r_addend; scalar_t__ r_offset; int r_info; } ;
struct TYPE_9__ {scalar_t__ vma; } ;
typedef TYPE_3__ Elf_Internal_Rela ;
typedef int Elf64_External_Rela ;


 int FUNC_0 (int) ;
 int FUNC_1 (long,long) ;
 int FUNC_2 (int *,struct bfd_link_info*,TYPE_2__*,int) ;
 int FUNC_3 (int *,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_0, struct bfd_link_info *VAR_1,
    asection *VAR_2, asection *VAR_3, bfd_vma VAR_4,
    long VAR_5, long VAR_6, bfd_vma VAR_7)
{
  Elf_Internal_Rela VAR_8;
  bfd_byte *VAR_9;

  FUNC_0 (VAR_3 != ((void*)0));

  VAR_8.r_info = FUNC_1 (VAR_5, VAR_6);
  VAR_8.r_addend = VAR_7;

  VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_4);
  if ((VAR_4 | 1) != (bfd_vma) -1)
    VAR_8.r_offset = VAR_2->output_section->vma + VAR_2->output_offset + VAR_4;
  else
    FUNC_4 (&VAR_8, 0, sizeof (VAR_8));

  VAR_9 = VAR_3->contents;
  VAR_9 += VAR_3->reloc_count++ * sizeof (Elf64_External_Rela);
  FUNC_3 (VAR_0, &VAR_8, VAR_9);
  FUNC_0 (sizeof (Elf64_External_Rela) * VAR_3->reloc_count <= VAR_3->size);
}
