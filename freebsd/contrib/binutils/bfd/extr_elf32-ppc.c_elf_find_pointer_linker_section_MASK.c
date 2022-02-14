
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int elf_linker_section_t ;
struct TYPE_4__ {scalar_t__ addend; int * lsect; struct TYPE_4__* next; } ;
typedef TYPE_1__ elf_linker_section_pointers_t ;
typedef scalar_t__ bfd_vma ;



__attribute__((used)) static elf_linker_section_pointers_t *
FUNC_0
  (elf_linker_section_pointers_t *VAR_0,
   bfd_vma VAR_1,
   elf_linker_section_t *VAR_2)
{
  for ( ; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    if (VAR_2 == VAR_0->lsect && VAR_1 == VAR_0->addend)
      return VAR_0;

  return ((void*)0);
}
