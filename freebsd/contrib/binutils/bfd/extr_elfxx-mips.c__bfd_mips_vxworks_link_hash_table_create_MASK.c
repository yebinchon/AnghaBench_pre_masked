
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_elf_link_hash_table {int is_vxworks; } ;
struct bfd_link_hash_table {int dummy; } ;
typedef int bfd ;


 struct bfd_link_hash_table* FUNC_0 (int *) ;

struct bfd_link_hash_table *
FUNC_1 (bfd *VAR_0)
{
  struct bfd_link_hash_table *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1)
    {
      struct mips_elf_link_hash_table *VAR_2;

      VAR_2 = (struct mips_elf_link_hash_table *) VAR_1;
      VAR_2->is_vxworks = 1;
    }
  return VAR_1;
}
