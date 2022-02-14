
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strtab_hash_entry {int * next; scalar_t__ index; } ;
struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_size_type ;


 struct strtab_hash_entry* FUNC_0 (struct bfd_hash_table*,int) ;
 scalar_t__ FUNC_1 (struct bfd_hash_entry*,struct bfd_hash_table*,char const*) ;

__attribute__((used)) static struct bfd_hash_entry *
FUNC_2 (struct bfd_hash_entry *VAR_0,
       struct bfd_hash_table *VAR_1,
       const char *VAR_2)
{
  struct strtab_hash_entry *VAR_3 = (struct strtab_hash_entry *) VAR_0;



  if (VAR_3 == ((void*)0))
    VAR_3 = FUNC_0 (VAR_1, sizeof (* VAR_3));
  if (VAR_3 == ((void*)0))
    return ((void*)0);


  VAR_3 = (struct strtab_hash_entry *)
  FUNC_1 ((struct bfd_hash_entry *) VAR_3, VAR_1, VAR_2);

  if (VAR_3)
    {

      VAR_3->index = (bfd_size_type) -1;
      VAR_3->next = ((void*)0);
    }

  return (struct bfd_hash_entry *) VAR_3;
}
