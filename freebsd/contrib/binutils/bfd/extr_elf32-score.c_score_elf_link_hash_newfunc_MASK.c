
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct score_elf_link_hash_entry {void* forced_local; void* no_fn_stub; void* readonly_reloc; scalar_t__ possibly_dynamic_relocs; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 struct score_elf_link_hash_entry* FUNC_1 (struct bfd_hash_table*,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_1,
        struct bfd_hash_table *VAR_2,
        const char *VAR_3)
{
  struct score_elf_link_hash_entry *VAR_4 = (struct score_elf_link_hash_entry *)VAR_1;


  if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_1 (VAR_2, sizeof (struct score_elf_link_hash_entry));
  if (VAR_4 == ((void*)0))
    return (struct bfd_hash_entry *)VAR_4;


  VAR_4 = ((struct score_elf_link_hash_entry *)
         FUNC_0 ((struct bfd_hash_entry *)VAR_4, VAR_2, VAR_3));

  if (VAR_4 != ((void*)0))
    {
      VAR_4->possibly_dynamic_relocs = 0;
      VAR_4->readonly_reloc = VAR_0;
      VAR_4->no_fn_stub = VAR_0;
      VAR_4->forced_local = VAR_0;
    }

  return (struct bfd_hash_entry *)VAR_4;
}
