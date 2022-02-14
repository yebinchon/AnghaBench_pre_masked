
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vma; } ;
typedef TYPE_1__ elf32_arm_section_map ;



__attribute__((used)) static int
FUNC_0 (const void * VAR_0, const void * VAR_1)
{
  return ((const elf32_arm_section_map *) VAR_0)->vma
  > ((const elf32_arm_section_map *) VAR_1)->vma;
}
