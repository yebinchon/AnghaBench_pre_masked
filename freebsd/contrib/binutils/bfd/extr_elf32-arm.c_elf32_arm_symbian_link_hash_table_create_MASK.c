
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_relocatable_executable; } ;
struct elf32_arm_link_hash_table {int plt_entry_size; int symbian_p; int use_blx; TYPE_1__ root; scalar_t__ plt_header_size; } ;
struct bfd_link_hash_table {int dummy; } ;
typedef int bfd ;


 int FUNC_0 (int ) ;
 struct bfd_link_hash_table* FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_2 (bfd *VAR_1)
{
  struct bfd_link_hash_table *VAR_2;

  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2)
    {
      struct elf32_arm_link_hash_table *VAR_3
 = (struct elf32_arm_link_hash_table *)VAR_2;

      VAR_3->plt_header_size = 0;

      VAR_3->plt_entry_size = 4 * FUNC_0 (VAR_0);
      VAR_3->symbian_p = 1;

      VAR_3->use_blx = 1;
      VAR_3->root.is_relocatable_executable = 1;
    }
  return VAR_2;
}
