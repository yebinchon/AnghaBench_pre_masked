
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_link_hash_table {TYPE_1__* tls_sec; scalar_t__ tls_size; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_2__ {scalar_t__ vma; } ;


 struct elf_link_hash_table* FUNC_0 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_vma
FUNC_1 (struct bfd_link_info *VAR_0, bfd_vma VAR_1)
{
  struct elf_link_hash_table *VAR_2 = FUNC_0 (VAR_0);


  if (VAR_2->tls_sec == ((void*)0))
    return 0;
  return VAR_1 - VAR_2->tls_size - VAR_2->tls_sec->vma;
}
