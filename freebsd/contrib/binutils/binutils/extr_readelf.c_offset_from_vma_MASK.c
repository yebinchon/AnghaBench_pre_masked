
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long bfd_vma ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_5__ {int e_phnum; } ;
struct TYPE_4__ {scalar_t__ p_type; long p_vaddr; long p_align; scalar_t__ p_filesz; long p_offset; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Phdr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,...) ;

__attribute__((used)) static long
FUNC_3 (FILE *VAR_3, bfd_vma VAR_4, bfd_size_type VAR_5)
{
  Elf_Internal_Phdr *VAR_6;

  if (! FUNC_1 (VAR_3))
    {
      FUNC_2 (FUNC_0("Cannot interpret virtual addresses without program headers.\n"));
      return (long) VAR_4;
    }

  for (VAR_6 = VAR_2;
       VAR_6 < VAR_2 + VAR_1.e_phnum;
       ++VAR_6)
    {
      if (VAR_6->p_type != VAR_0)
 continue;

      if (VAR_4 >= (VAR_6->p_vaddr & -VAR_6->p_align)
   && VAR_4 + VAR_5 <= VAR_6->p_vaddr + VAR_6->p_filesz)
 return VAR_4 - VAR_6->p_vaddr + VAR_6->p_offset;
    }

  FUNC_2 (FUNC_0("Virtual address 0x%lx not located in any PT_LOAD segment.\n"),
 (long) VAR_4);
  return (long) VAR_4;
}
