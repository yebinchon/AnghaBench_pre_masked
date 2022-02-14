
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_5__ {unsigned long e_shnum; } ;
struct TYPE_4__ {scalar_t__ sh_type; scalar_t__ sh_size; scalar_t__ sh_offset; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_1 (FILE *VAR_3)
{
  Elf_Internal_Shdr *VAR_4;
  unsigned long VAR_5;
  int VAR_6 = 1;

  for (VAR_5 = 0, VAR_4 = VAR_2;
       VAR_5 < VAR_1.e_shnum;
       VAR_5++, VAR_4++)
    if (VAR_4->sh_type == VAR_0)
      VAR_6 &= FUNC_0 (VAR_3,
         (bfd_vma) VAR_4->sh_offset,
         (bfd_vma) VAR_4->sh_size);

  return VAR_6;
}
