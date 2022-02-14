
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dynobj; } ;
struct ppc_link_hash_table {TYPE_1__ elf; int * stub_bfd; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;
struct TYPE_4__ {int * e_ident; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 struct ppc_link_hash_table* FUNC_1 (struct bfd_link_info*) ;

void
FUNC_2 (bfd *VAR_2, struct bfd_link_info *VAR_3)
{
  struct ppc_link_hash_table *VAR_4;

  FUNC_0 (VAR_2)->e_ident[VAR_0] = VAR_1;




  VAR_4 = FUNC_1 (VAR_3);
  VAR_4->stub_bfd = VAR_2;
  VAR_4->elf.dynobj = VAR_2;
}
