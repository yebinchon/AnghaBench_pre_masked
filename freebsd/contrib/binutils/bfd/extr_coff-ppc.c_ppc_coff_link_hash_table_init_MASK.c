
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_coff_link_hash_table {int root; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int *,int *,struct bfd_hash_entry* (*) (struct bfd_hash_entry*,struct bfd_hash_table*,char const*),unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct ppc_coff_link_hash_table *VAR_0,
          bfd *VAR_1,
          struct bfd_hash_entry *(*VAR_2) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
          unsigned int VAR_3)
{
  return FUNC_0 (&VAR_0->root, VAR_1, VAR_2, VAR_3);
}
