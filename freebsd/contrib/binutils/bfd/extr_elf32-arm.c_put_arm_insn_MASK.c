
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf32_arm_link_hash_table {scalar_t__ byteswap_code; } ;
typedef int bfd_vma ;
typedef int bfd ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void
FUNC_3 (struct elf32_arm_link_hash_table *VAR_0,
      bfd * VAR_1, bfd_vma VAR_2, void * VAR_3)
{
    if (VAR_0->byteswap_code != FUNC_0 (VAR_1))
      FUNC_2 (VAR_2, VAR_3);
    else
      FUNC_1 (VAR_2, VAR_3);
}
