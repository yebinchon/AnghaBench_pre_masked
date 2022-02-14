
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_elf_stack_info {int num_fun; struct function_info* fun; } ;
struct function_info {scalar_t__ lo; scalar_t__ hi; } ;
struct bfd_link_info {TYPE_1__* callbacks; } ;
struct _spu_elf_section_data {struct spu_elf_stack_info* stack_info; } ;
typedef scalar_t__ bfd_vma ;
typedef int asection ;
struct TYPE_2__ {int (* einfo ) (int ,int *,scalar_t__) ;} ;


 int FUNC_0 (char*) ;
 struct _spu_elf_section_data* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,scalar_t__) ;

__attribute__((used)) static struct function_info *
FUNC_3 (asection *VAR_0, bfd_vma VAR_1, struct bfd_link_info *VAR_2)
{
  struct _spu_elf_section_data *VAR_3 = FUNC_1 (VAR_0);
  struct spu_elf_stack_info *VAR_4 = VAR_3->stack_info;
  int VAR_5, VAR_6, VAR_7;

  VAR_5 = 0;
  VAR_6 = VAR_4->num_fun;
  while (VAR_5 < VAR_6)
    {
      VAR_7 = (VAR_5 + VAR_6) / 2;
      if (VAR_1 < VAR_4->fun[VAR_7].lo)
 VAR_6 = VAR_7;
      else if (VAR_1 >= VAR_4->fun[VAR_7].hi)
 VAR_5 = VAR_7 + 1;
      else
 return &VAR_4->fun[VAR_7];
    }
  VAR_2->callbacks->einfo (FUNC_0("%A:0x%v not found in function table\n"),
     VAR_0, VAR_1);
  return ((void*)0);
}
