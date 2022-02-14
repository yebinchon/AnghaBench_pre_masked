
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_link_hash_entry {int forced_local; int dynindx; int dynstr_index; scalar_t__ needs_plt; int plt; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {int dynstr; int init_plt_offset; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct bfd_link_info*) ;

void
FUNC_2 (struct bfd_link_info *VAR_0,
    struct elf_link_hash_entry *VAR_1,
    bfd_boolean VAR_2)
{
  VAR_1->plt = FUNC_1 (VAR_0)->init_plt_offset;
  VAR_1->needs_plt = 0;
  if (VAR_2)
    {
      VAR_1->forced_local = 1;
      if (VAR_1->dynindx != -1)
 {
   VAR_1->dynindx = -1;
   FUNC_0 (FUNC_1 (VAR_0)->dynstr,
      VAR_1->dynstr_index);
 }
    }
}
