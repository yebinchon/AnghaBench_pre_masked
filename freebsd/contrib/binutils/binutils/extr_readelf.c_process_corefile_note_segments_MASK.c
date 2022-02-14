
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_5__ {unsigned int e_phnum; } ;
struct TYPE_4__ {scalar_t__ p_type; scalar_t__ p_filesz; scalar_t__ p_offset; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Phdr ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_2 (FILE *VAR_3)
{
  Elf_Internal_Phdr *VAR_4;
  unsigned int VAR_5;
  int VAR_6 = 1;

  if (! FUNC_0 (VAR_3))
      return 0;

  for (VAR_5 = 0, VAR_4 = VAR_2;
       VAR_5 < VAR_1.e_phnum;
       VAR_5++, VAR_4++)
    {
      if (VAR_4->p_type == VAR_0)
 VAR_6 &= FUNC_1 (VAR_3,
           (bfd_vma) VAR_4->p_offset,
           (bfd_vma) VAR_4->p_filesz);
    }

  return VAR_6;
}
