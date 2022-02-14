
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_elf_link_hash_table {int is_vxworks; int plt_initial_entry_size; void* plt_slot_size; void* plt_entry_size; int plt_type; } ;
struct bfd_link_hash_table {int dummy; } ;
typedef int bfd ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 struct bfd_link_hash_table* FUNC_0 (int *) ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_1 (bfd *VAR_3)
{
  struct bfd_link_hash_table *VAR_4;

  VAR_4 = FUNC_0 (VAR_3);
  if (VAR_4)
    {
      struct ppc_elf_link_hash_table *VAR_5
        = (struct ppc_elf_link_hash_table *)VAR_4;
      VAR_5->is_vxworks = 1;
      VAR_5->plt_type = VAR_0;
      VAR_5->plt_entry_size = VAR_1;
      VAR_5->plt_slot_size = VAR_1;
      VAR_5->plt_initial_entry_size = VAR_2;
    }
  return VAR_4;
}
