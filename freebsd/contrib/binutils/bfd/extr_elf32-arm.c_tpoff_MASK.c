
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_link_hash_table {TYPE_1__* tls_sec; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_2__ {scalar_t__ vma; int alignment_power; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 struct elf_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_vma
FUNC_2 (struct bfd_link_info *VAR_1, bfd_vma VAR_2)
{
  struct elf_link_hash_table *VAR_3 = FUNC_1 (VAR_1);
  bfd_vma VAR_4;


  if (VAR_3->tls_sec == ((void*)0))
    return 0;
  VAR_4 = FUNC_0 ((bfd_vma) VAR_0, VAR_3->tls_sec->alignment_power);
  return VAR_2 - VAR_3->tls_sec->vma + VAR_4;
}
