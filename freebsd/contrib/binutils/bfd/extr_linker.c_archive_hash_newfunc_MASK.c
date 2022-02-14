
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
struct archive_hash_entry {struct bfd_hash_entry root; int * defs; } ;


 struct archive_hash_entry* FUNC_0 (struct bfd_hash_table*,int) ;
 scalar_t__ FUNC_1 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_0,
        struct bfd_hash_table *VAR_1,
        const char *VAR_2)
{
  struct archive_hash_entry *VAR_3 = (struct archive_hash_entry *) VAR_0;



  if (VAR_3 == ((void*)0))
    VAR_3 = FUNC_0 (VAR_1, sizeof (struct archive_hash_entry));
  if (VAR_3 == ((void*)0))
    return ((void*)0);


  VAR_3 = ((struct archive_hash_entry *)
  FUNC_1 ((struct bfd_hash_entry *) VAR_3, VAR_1, VAR_2));

  if (VAR_3)
    {

      VAR_3->defs = ((void*)0);
    }

  return &VAR_3->root;
}
