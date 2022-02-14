
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_elf_stack_info {int max_fun; } ;
struct function_info {int dummy; } ;
struct _spu_elf_section_data {struct spu_elf_stack_info* stack_info; } ;
typedef int bfd_size_type ;
typedef int asection ;


 struct spu_elf_stack_info* FUNC_0 (int) ;
 struct _spu_elf_section_data* FUNC_1 (int *) ;

__attribute__((used)) static struct spu_elf_stack_info *
FUNC_2 (asection *VAR_0, int VAR_1)
{
  struct _spu_elf_section_data *VAR_2 = FUNC_1 (VAR_0);
  bfd_size_type VAR_3;

  VAR_3 = sizeof (struct spu_elf_stack_info);
  VAR_3 += (VAR_1 - 1) * sizeof (struct function_info);
  VAR_2->stack_info = FUNC_0 (VAR_3);
  if (VAR_2->stack_info != ((void*)0))
    VAR_2->stack_info->max_fun = VAR_1;
  return VAR_2->stack_info;
}
