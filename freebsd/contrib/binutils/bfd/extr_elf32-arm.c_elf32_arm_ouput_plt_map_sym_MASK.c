
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf32_arm_link_hash_table {int dummy; } ;
struct TYPE_8__ {TYPE_5__* sec; int finfo; int (* func ) (int ,char const*,TYPE_3__*,TYPE_5__*,int *) ;int sec_shndx; int info; } ;
typedef TYPE_2__ output_arch_syminfo ;
typedef enum map_symbol_type { ____Placeholder_map_symbol_type } map_symbol_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_10__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_9__ {int st_shndx; int st_info; scalar_t__ st_other; scalar_t__ st_size; scalar_t__ st_value; } ;
struct TYPE_7__ {scalar_t__ vma; } ;
typedef TYPE_3__ Elf_Internal_Sym ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct elf32_arm_link_hash_table* FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,TYPE_3__*,TYPE_5__*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (output_arch_syminfo *VAR_4,
        enum map_symbol_type VAR_5,
        bfd_vma VAR_6)
{
  static const char *VAR_7[3] = {"$a", "$t", "$d"};
  struct elf32_arm_link_hash_table *VAR_8;
  Elf_Internal_Sym VAR_9;

  VAR_8 = FUNC_1 (VAR_4->info);
  VAR_9.st_value = VAR_4->sec->output_section->vma
   + VAR_4->sec->output_offset
   + VAR_6;
  VAR_9.st_size = 0;
  VAR_9.st_other = 0;
  VAR_9.st_info = FUNC_0 (VAR_1, VAR_2);
  VAR_9.st_shndx = VAR_4->sec_shndx;
  if (!VAR_4->func (VAR_4->finfo, VAR_7[VAR_5], &VAR_9, VAR_4->sec, ((void*)0)))
    return VAR_0;
  return VAR_3;
}
