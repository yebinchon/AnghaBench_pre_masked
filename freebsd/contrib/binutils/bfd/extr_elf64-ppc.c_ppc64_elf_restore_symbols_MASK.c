
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_link_hash_table {int elf; } ;
struct bfd_link_info {int dummy; } ;


 int FUNC_0 (int *,int ,struct bfd_link_info*) ;
 struct ppc_link_hash_table* FUNC_1 (struct bfd_link_info*) ;
 int VAR_0 ;

void
FUNC_2 (struct bfd_link_info *VAR_1)
{
  struct ppc_link_hash_table *VAR_2 = FUNC_1 (VAR_1);
  FUNC_0 (&VAR_2->elf, VAR_0, VAR_1);
}
