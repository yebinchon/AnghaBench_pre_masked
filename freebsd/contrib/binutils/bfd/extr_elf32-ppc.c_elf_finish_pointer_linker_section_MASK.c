
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int def_regular; } ;
struct ppc_elf_link_hash_entry {TYPE_4__* linker_section_pointer; TYPE_1__ elf; } ;
struct elf_link_hash_entry {int dummy; } ;
struct TYPE_14__ {char* name; TYPE_2__* section; } ;
typedef TYPE_3__ elf_linker_section_t ;
struct TYPE_15__ {int offset; int addend; } ;
typedef TYPE_4__ elf_linker_section_pointers_t ;
typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_16__ {int r_addend; int r_info; } ;
struct TYPE_13__ {int output_offset; scalar_t__ contents; int owner; } ;
typedef TYPE_5__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,int ,TYPE_3__*) ;
 TYPE_4__** FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char*,long,long) ;
 int VAR_0 ;

__attribute__((used)) static bfd_vma
FUNC_6 (bfd *VAR_1,
       elf_linker_section_t *VAR_2,
       struct elf_link_hash_entry *VAR_3,
       bfd_vma VAR_4,
       const Elf_Internal_Rela *VAR_5)
{
  elf_linker_section_pointers_t *VAR_6;

  FUNC_0 (VAR_2 != ((void*)0));

  if (VAR_3 != ((void*)0))
    {

      struct ppc_elf_link_hash_entry *VAR_7;

      VAR_7 = (struct ppc_elf_link_hash_entry *) VAR_3;
      FUNC_0 (VAR_7->elf.def_regular);
      VAR_6 = VAR_7->linker_section_pointer;
    }
  else
    {

      unsigned long VAR_8 = FUNC_1 (VAR_5->r_info);

      FUNC_0 (FUNC_4 (VAR_1) != ((void*)0));
      VAR_6 = FUNC_4 (VAR_1)[VAR_8];
    }

  VAR_6 = FUNC_3 (VAR_6,
       VAR_5->r_addend,
       VAR_2);
  FUNC_0 (VAR_6 != ((void*)0));



  if ((VAR_6->offset & 1) == 0)
    {
      FUNC_2 (VAR_2->section->owner,
    VAR_4 + VAR_6->addend,
    VAR_2->section->contents + VAR_6->offset);
      VAR_6->offset += 1;
    }

  VAR_4 = (VAR_2->section->output_offset
  + VAR_6->offset - 1
  - 0x8000);
  return VAR_4 - VAR_6->addend;
}
