
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_strtab_hash {scalar_t__ size; scalar_t__ sec_size; } ;
typedef scalar_t__ bfd_size_type ;



bfd_size_type
FUNC_0 (struct elf_strtab_hash *VAR_0)
{
  return VAR_0->sec_size ? VAR_0->sec_size : VAR_0->size;
}
