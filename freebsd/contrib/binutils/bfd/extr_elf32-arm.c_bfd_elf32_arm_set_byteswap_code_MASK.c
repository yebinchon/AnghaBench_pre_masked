
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int byteswap_code; } ;
struct bfd_link_info {int dummy; } ;


 struct elf32_arm_link_hash_table* FUNC_0 (struct bfd_link_info*) ;

void
FUNC_1 (struct bfd_link_info *VAR_0,
     int VAR_1)
{
  struct elf32_arm_link_hash_table *VAR_2;

  VAR_2 = FUNC_0 (VAR_0);
  VAR_2->byteswap_code = VAR_1;
}
