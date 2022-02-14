
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_link_hash_table {int root; int stab_info; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int *,int *,struct bfd_hash_entry* (*) (struct bfd_hash_entry*,struct bfd_hash_table*,char const*),unsigned int) ;
 int FUNC_1 (int *,int ,int) ;

bfd_boolean
FUNC_2 (struct coff_link_hash_table *VAR_0,
    bfd *VAR_1,
    struct bfd_hash_entry *(*VAR_2) (struct bfd_hash_entry *,
           struct bfd_hash_table *,
           const char *),
    unsigned int VAR_3)
{
  FUNC_1 (&VAR_0->stab_info, 0, sizeof (VAR_0->stab_info));
  return FUNC_0 (&VAR_0->root, VAR_1, VAR_2, VAR_3);
}
