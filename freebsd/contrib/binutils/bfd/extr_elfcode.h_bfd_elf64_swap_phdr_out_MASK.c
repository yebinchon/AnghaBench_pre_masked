
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int p_align; int p_flags; int p_memsz; int p_filesz; int p_paddr; int p_vaddr; int p_offset; int p_type; } ;
struct TYPE_5__ {int p_align; int p_flags; int p_memsz; int p_filesz; int p_paddr; int p_vaddr; int p_offset; int p_type; } ;
typedef TYPE_1__ Elf_Internal_Phdr ;
typedef TYPE_2__ Elf_External_Phdr ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2 (bfd *VAR_0,
     const Elf_Internal_Phdr *VAR_1,
     Elf_External_Phdr *VAR_2)
{

  FUNC_0 (VAR_0, VAR_1->p_type, VAR_2->p_type);
  FUNC_1 (VAR_0, VAR_1->p_offset, VAR_2->p_offset);
  FUNC_1 (VAR_0, VAR_1->p_vaddr, VAR_2->p_vaddr);
  FUNC_1 (VAR_0, VAR_1->p_paddr, VAR_2->p_paddr);
  FUNC_1 (VAR_0, VAR_1->p_filesz, VAR_2->p_filesz);
  FUNC_1 (VAR_0, VAR_1->p_memsz, VAR_2->p_memsz);
  FUNC_0 (VAR_0, VAR_1->p_flags, VAR_2->p_flags);
  FUNC_1 (VAR_0, VAR_1->p_align, VAR_2->p_align);
}
