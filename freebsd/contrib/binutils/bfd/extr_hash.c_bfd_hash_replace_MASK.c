
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_hash_table {unsigned int size; struct bfd_hash_entry** table; } ;
struct bfd_hash_entry {unsigned int hash; struct bfd_hash_entry* next; } ;


 int FUNC_0 () ;

void
FUNC_1 (struct bfd_hash_table *VAR_0,
    struct bfd_hash_entry *VAR_1,
    struct bfd_hash_entry *VAR_2)
{
  unsigned int VAR_3;
  struct bfd_hash_entry **VAR_4;

  VAR_3 = VAR_1->hash % VAR_0->size;
  for (VAR_4 = &VAR_0->table[VAR_3];
       (*VAR_4) != ((void*)0);
       VAR_4 = &(*VAR_4)->next)
    {
      if (*VAR_4 == VAR_1)
 {
   *VAR_4 = VAR_2;
   return;
 }
    }

  FUNC_0 ();
}
