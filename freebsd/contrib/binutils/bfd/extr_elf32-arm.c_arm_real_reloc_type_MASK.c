
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {int target2_reloc; int target1_is_rel; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int
FUNC_0 (struct elf32_arm_link_hash_table * VAR_2,
       int VAR_3)
{
  switch (VAR_3)
    {
    case 129:
      if (VAR_2->target1_is_rel)
 return VAR_1;
      else
 return VAR_0;

    case 128:
      return VAR_2->target2_reloc;

    default:
      return VAR_3;
    }
}
