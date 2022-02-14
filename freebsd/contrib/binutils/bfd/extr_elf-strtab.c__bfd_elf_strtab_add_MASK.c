
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t index; } ;
struct elf_strtab_hash_entry {scalar_t__ len; TYPE_1__ u; int refcount; } ;
struct elf_strtab_hash {scalar_t__ sec_size; int size; int alloced; struct elf_strtab_hash_entry** array; int table; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int ) ;
 struct elf_strtab_hash_entry** FUNC_2 (struct elf_strtab_hash_entry**,int) ;
 scalar_t__ FUNC_3 (char const*) ;

bfd_size_type
FUNC_4 (struct elf_strtab_hash *VAR_1,
       const char *VAR_2,
       bfd_boolean VAR_3)
{
  register struct elf_strtab_hash_entry *VAR_4;



  if (*VAR_2 == '\0')
    return 0;

  FUNC_0 (VAR_1->sec_size == 0);
  VAR_4 = (struct elf_strtab_hash_entry *)
   FUNC_1 (&VAR_1->table, VAR_2, VAR_0, VAR_3);

  if (VAR_4 == ((void*)0))
    return (bfd_size_type) -1;

  VAR_4->refcount++;
  if (VAR_4->len == 0)
    {
      VAR_4->len = FUNC_3 (VAR_2) + 1;

      FUNC_0 (VAR_4->len > 0);
      if (VAR_1->size == VAR_1->alloced)
 {
   bfd_size_type VAR_5 = sizeof (struct elf_strtab_hash_entry *);
   VAR_1->alloced *= 2;
   VAR_1->array = FUNC_2 (VAR_1->array, VAR_1->alloced * VAR_5);
   if (VAR_1->array == ((void*)0))
     return (bfd_size_type) -1;
 }

      VAR_4->u.index = VAR_1->size++;
      VAR_1->array[VAR_4->u.index] = VAR_4;
    }
  return VAR_4->u.index;
}
