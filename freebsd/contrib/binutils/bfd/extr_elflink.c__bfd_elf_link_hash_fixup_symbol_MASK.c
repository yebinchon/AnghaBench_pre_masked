
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct elf_link_hash_entry {int dynindx; TYPE_1__ root; } ;
struct bfd_link_info {scalar_t__ pie; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_1 ;

bfd_boolean
FUNC_1 (struct bfd_link_info *VAR_2,
     struct elf_link_hash_entry *VAR_3)
{
  if (VAR_2->pie
      && VAR_3->dynindx == -1
      && VAR_3->root.type == VAR_1)
    return FUNC_0 (VAR_2, VAR_3);

  return VAR_0;
}
