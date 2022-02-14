
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int e_phnum; int e_phentsize; int e_phoff; } ;
struct TYPE_8__ {int p_align; int p_memsz; int p_filesz; int p_paddr; int p_vaddr; int p_offset; int p_flags; int p_type; } ;
struct TYPE_7__ {void* p_align; void* p_memsz; void* p_filesz; void* p_paddr; void* p_vaddr; void* p_offset; void* p_flags; void* p_type; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Phdr ;
typedef TYPE_2__ Elf64_External_Phdr ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,int *,int ,int ,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_4 (FILE *VAR_1, Elf_Internal_Phdr *VAR_2)
{
  Elf64_External_Phdr *VAR_3;
  Elf64_External_Phdr *VAR_4;
  Elf_Internal_Phdr *VAR_5;
  unsigned int VAR_6;

  VAR_3 = FUNC_3 (((void*)0), VAR_1, VAR_0.e_phoff,
      VAR_0.e_phentsize, VAR_0.e_phnum,
      FUNC_1("program headers"));
  if (!VAR_3)
    return 0;

  for (VAR_6 = 0, VAR_5 = VAR_2, VAR_4 = VAR_3;
       VAR_6 < VAR_0.e_phnum;
       VAR_6++, VAR_5++, VAR_4++)
    {
      VAR_5->p_type = FUNC_0 (VAR_4->p_type);
      VAR_5->p_flags = FUNC_0 (VAR_4->p_flags);
      VAR_5->p_offset = FUNC_0 (VAR_4->p_offset);
      VAR_5->p_vaddr = FUNC_0 (VAR_4->p_vaddr);
      VAR_5->p_paddr = FUNC_0 (VAR_4->p_paddr);
      VAR_5->p_filesz = FUNC_0 (VAR_4->p_filesz);
      VAR_5->p_memsz = FUNC_0 (VAR_4->p_memsz);
      VAR_5->p_align = FUNC_0 (VAR_4->p_align);
    }

  FUNC_2 (VAR_3);

  return 1;
}
