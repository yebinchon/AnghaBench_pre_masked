
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_2__ {struct bfd_link_hash_table root; } ;
struct score_elf_link_hash_table {TYPE_1__ root; } ;
struct score_elf_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (TYPE_1__*,int *,int ,int) ;
 struct score_elf_link_hash_table* FUNC_1 (int) ;
 int FUNC_2 (struct score_elf_link_hash_table*) ;
 int VAR_0 ;

__attribute__((used)) static struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_1)
{
  struct score_elf_link_hash_table *VAR_2;
  bfd_size_type VAR_3 = sizeof (struct score_elf_link_hash_table);

  VAR_2 = FUNC_1 (VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_2->root, VAR_1, VAR_0,
          sizeof (struct score_elf_link_hash_entry)))
    {
      FUNC_2 (VAR_2);
      return ((void*)0);
    }

  return &VAR_2->root.root;
}
