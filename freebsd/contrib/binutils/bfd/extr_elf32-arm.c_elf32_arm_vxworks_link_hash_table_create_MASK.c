
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int vxworks_p; scalar_t__ use_rel; } ;
struct bfd_link_hash_table {int dummy; } ;
typedef int bfd ;


 struct bfd_link_hash_table* FUNC_0 (int *) ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_1 (bfd *VAR_0)
{
  struct bfd_link_hash_table *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1)
    {
      struct elf32_arm_link_hash_table *VAR_2
 = (struct elf32_arm_link_hash_table *) VAR_1;
      VAR_2->use_rel = 0;
      VAR_2->vxworks_p = 1;
    }
  return VAR_1;
}
