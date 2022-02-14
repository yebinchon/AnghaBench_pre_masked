
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
struct TYPE_2__ {int ifd; } ;
struct alpha_elf_link_hash_entry {int * reloc_entries; int * got_entries; scalar_t__ flags; TYPE_1__ esym; } ;
typedef int EXTR ;


 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 scalar_t__ FUNC_1 (struct bfd_hash_table*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_3 (struct bfd_hash_entry *VAR_0,
          struct bfd_hash_table *VAR_1,
          const char *VAR_2)
{
  struct alpha_elf_link_hash_entry *VAR_3 =
    (struct alpha_elf_link_hash_entry *) VAR_0;



  if (VAR_3 == (struct alpha_elf_link_hash_entry *) ((void*)0))
    VAR_3 = ((struct alpha_elf_link_hash_entry *)
    FUNC_1 (VAR_1,
         sizeof (struct alpha_elf_link_hash_entry)));
  if (VAR_3 == (struct alpha_elf_link_hash_entry *) ((void*)0))
    return (struct bfd_hash_entry *) VAR_3;


  VAR_3 = ((struct alpha_elf_link_hash_entry *)
  FUNC_0 ((struct bfd_hash_entry *) VAR_3,
         VAR_1, VAR_2));
  if (VAR_3 != (struct alpha_elf_link_hash_entry *) ((void*)0))
    {

      FUNC_2 (&VAR_3->esym, 0, sizeof (EXTR));


      VAR_3->esym.ifd = -2;
      VAR_3->flags = 0;
      VAR_3->got_entries = ((void*)0);
      VAR_3->reloc_entries = ((void*)0);
    }

  return (struct bfd_hash_entry *) VAR_3;
}
