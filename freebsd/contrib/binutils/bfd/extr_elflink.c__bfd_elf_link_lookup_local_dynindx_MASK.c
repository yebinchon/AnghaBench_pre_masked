
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_link_local_dynamic_entry {long input_indx; long dynindx; int * input_bfd; struct elf_link_local_dynamic_entry* next; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;
struct TYPE_2__ {struct elf_link_local_dynamic_entry* dynlocal; } ;


 TYPE_1__* FUNC_0 (struct bfd_link_info*) ;

long
FUNC_1 (struct bfd_link_info *VAR_0,
        bfd *VAR_1,
        long VAR_2)
{
  struct elf_link_local_dynamic_entry *VAR_3;

  for (VAR_3 = FUNC_0 (VAR_0)->dynlocal; VAR_3 ; VAR_3 = VAR_3->next)
    if (VAR_3->input_bfd == VAR_1 && VAR_3->input_indx == VAR_2)
      return VAR_3->dynindx;
  return -1;
}
