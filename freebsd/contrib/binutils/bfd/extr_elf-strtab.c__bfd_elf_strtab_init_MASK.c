
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_strtab_hasn_entry {int dummy; } ;
struct elf_strtab_hash_entry {int dummy; } ;
struct elf_strtab_hash {int size; int alloced; int ** array; scalar_t__ sec_size; int table; } ;
typedef int bfd_size_type ;


 int FUNC_0 (int *,int ,int) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct elf_strtab_hash*) ;

struct elf_strtab_hash *
FUNC_3 (void)
{
  struct elf_strtab_hash *VAR_1;
  bfd_size_type VAR_2 = sizeof (struct elf_strtab_hash);

  VAR_1 = FUNC_1 (VAR_2);
  if (VAR_1 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_1->table, VAR_0,
       sizeof (struct elf_strtab_hash_entry)))
    {
      FUNC_2 (VAR_1);
      return ((void*)0);
    }

  VAR_1->sec_size = 0;
  VAR_1->size = 1;
  VAR_1->alloced = 64;
  VAR_2 = sizeof (struct elf_strtab_hasn_entry *);
  VAR_1->array = FUNC_1 (VAR_1->alloced * VAR_2);
  if (VAR_1->array == ((void*)0))
    {
      FUNC_2 (VAR_1);
      return ((void*)0);
    }

  VAR_1->array[0] = ((void*)0);

  return VAR_1;
}
