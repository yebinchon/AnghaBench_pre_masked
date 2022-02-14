
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_hash_table {int table; } ;
typedef int bfd_boolean ;


 int FUNC_0 (int *,struct bfd_hash_entry* (*) (struct bfd_hash_entry*,struct bfd_hash_table*,char const*),unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_1
  (struct archive_hash_table *VAR_0,
   struct bfd_hash_entry *(*VAR_1) (struct bfd_hash_entry *,
          struct bfd_hash_table *,
          const char *),
   unsigned int VAR_2)
{
  return FUNC_0 (&VAR_0->table, VAR_1, VAR_2);
}
