
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct elf_link_hash_entry {int pointer_equality_needed; int def_regular; TYPE_1__ plt; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct elf_link_hash_entry*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct elf_link_hash_entry *VAR_1)
{
  if (VAR_1->plt.offset != (bfd_vma) -1
      && !VAR_1->def_regular
      && !VAR_1->pointer_equality_needed)
    return VAR_0;

  return FUNC_0 (VAR_1);
}
