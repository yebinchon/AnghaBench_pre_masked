
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
struct _bfd_sparc_elf_link_hash_entry {int tls_type; int * dyn_relocs; } ;


 int VAR_0 ;
 struct bfd_hash_entry* FUNC_0 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;
 struct bfd_hash_entry* FUNC_1 (struct bfd_hash_table*,int) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_1,
     struct bfd_hash_table *VAR_2, const char *VAR_3)
{


  if (VAR_1 == ((void*)0))
    {
      VAR_1 = FUNC_1 (VAR_2,
     sizeof (struct _bfd_sparc_elf_link_hash_entry));
      if (VAR_1 == ((void*)0))
 return VAR_1;
    }


  VAR_1 = FUNC_0 (VAR_1, VAR_2, VAR_3);
  if (VAR_1 != ((void*)0))
    {
      struct _bfd_sparc_elf_link_hash_entry *VAR_4;

      VAR_4 = (struct _bfd_sparc_elf_link_hash_entry *) VAR_1;
      VAR_4->dyn_relocs = ((void*)0);
      VAR_4->tls_type = VAR_0;
    }

  return VAR_1;
}
