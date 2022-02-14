
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_8__ {int sign_extend_vma; } ;
struct TYPE_7__ {int p_align; int p_memsz; int p_filesz; int p_paddr; int p_vaddr; int p_offset; int p_flags; int p_type; } ;
struct TYPE_6__ {void* p_align; void* p_memsz; void* p_filesz; void* p_paddr; void* p_vaddr; void* p_offset; void* p_flags; void* p_type; } ;
typedef TYPE_1__ Elf_Internal_Phdr ;
typedef TYPE_2__ Elf_External_Phdr ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 TYPE_3__* FUNC_3 (int *) ;

void
FUNC_4 (bfd *VAR_0,
    const Elf_External_Phdr *VAR_1,
    Elf_Internal_Phdr *VAR_2)
{
  int VAR_3 = FUNC_3 (VAR_0)->sign_extend_vma;

  VAR_2->p_type = FUNC_0 (VAR_0, VAR_1->p_type);
  VAR_2->p_flags = FUNC_0 (VAR_0, VAR_1->p_flags);
  VAR_2->p_offset = FUNC_2 (VAR_0, VAR_1->p_offset);
  if (VAR_3)
    {
      VAR_2->p_vaddr = FUNC_1 (VAR_0, VAR_1->p_vaddr);
      VAR_2->p_paddr = FUNC_1 (VAR_0, VAR_1->p_paddr);
    }
  else
    {
      VAR_2->p_vaddr = FUNC_2 (VAR_0, VAR_1->p_vaddr);
      VAR_2->p_paddr = FUNC_2 (VAR_0, VAR_1->p_paddr);
    }
  VAR_2->p_filesz = FUNC_2 (VAR_0, VAR_1->p_filesz);
  VAR_2->p_memsz = FUNC_2 (VAR_0, VAR_1->p_memsz);
  VAR_2->p_align = FUNC_2 (VAR_0, VAR_1->p_align);
}
