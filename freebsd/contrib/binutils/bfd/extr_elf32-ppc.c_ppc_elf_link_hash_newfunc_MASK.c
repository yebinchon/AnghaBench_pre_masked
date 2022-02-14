
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppc_elf_link_hash_entry {int dummy; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ tls_mask; int * dyn_relocs; int * linker_section_pointer; } ;


 struct bfd_hash_entry* FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 struct bfd_hash_entry* FUNC_1 (struct bfd_hash_table*,int) ;
 TYPE_1__* FUNC_2 (struct bfd_hash_entry*) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_3 (struct bfd_hash_entry *VAR_0,
      struct bfd_hash_table *VAR_1,
      const char *VAR_2)
{


  if (VAR_0 == ((void*)0))
    {
      VAR_0 = FUNC_1 (VAR_1,
     sizeof (struct ppc_elf_link_hash_entry));
      if (VAR_0 == ((void*)0))
 return VAR_0;
    }


  VAR_0 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (VAR_0 != ((void*)0))
    {
      FUNC_2 (VAR_0)->linker_section_pointer = ((void*)0);
      FUNC_2 (VAR_0)->dyn_relocs = ((void*)0);
      FUNC_2 (VAR_0)->tls_mask = 0;
    }

  return VAR_0;
}
