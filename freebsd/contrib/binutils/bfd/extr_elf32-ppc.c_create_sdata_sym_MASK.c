
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ppc_elf_link_hash_table {int elf; } ;
struct TYPE_6__ {TYPE_3__* sym; int sym_name; } ;
typedef TYPE_2__ elf_linker_section_t ;
typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_7__ {int ref_regular; scalar_t__ non_elf; TYPE_1__ root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct ppc_elf_link_hash_table *VAR_3,
    elf_linker_section_t *VAR_4)
{
  VAR_4->sym = FUNC_0 (&VAR_3->elf, VAR_4->sym_name,
         VAR_1, VAR_0, VAR_1);
  if (VAR_4->sym == ((void*)0))
    return VAR_0;
  if (VAR_4->sym->root.type == VAR_2)
    VAR_4->sym->non_elf = 0;
  VAR_4->sym->ref_regular = 1;
  return VAR_1;
}
