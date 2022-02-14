
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_link_hash_table {int multi_toc_needed; scalar_t__ toc_curr; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ppc_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

void
FUNC_2 (bfd *VAR_1, struct bfd_link_info *VAR_2)
{
  struct ppc_link_hash_table *VAR_3 = FUNC_1 (VAR_2);

  VAR_3->multi_toc_needed = VAR_3->toc_curr != FUNC_0 (VAR_1);



  VAR_3->toc_curr = VAR_0;
}
