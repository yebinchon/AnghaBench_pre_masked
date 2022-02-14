
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* index; struct elf_strtab_hash_entry* suffix; } ;
struct elf_strtab_hash_entry {int len; TYPE_1__ u; scalar_t__ refcount; } ;
struct elf_strtab_hash {int size; struct elf_strtab_hash_entry** array; void* sec_size; } ;
typedef void* bfd_size_type ;


 struct elf_strtab_hash_entry** FUNC_0 (void*) ;
 int FUNC_1 (struct elf_strtab_hash_entry**) ;
 scalar_t__ FUNC_2 (struct elf_strtab_hash_entry*,struct elf_strtab_hash_entry*) ;
 int FUNC_3 (struct elf_strtab_hash_entry**,void*,int,int ) ;
 int VAR_0 ;

void
FUNC_4 (struct elf_strtab_hash *VAR_1)
{
  struct elf_strtab_hash_entry **VAR_2, **VAR_3, *VAR_4;
  bfd_size_type VAR_5, VAR_6;





  size_t VAR_7;


  VAR_6 = VAR_1->size * sizeof (struct elf_strtab_hash_entry *);
  VAR_2 = FUNC_0 (VAR_6);
  if (VAR_2 == ((void*)0))
    goto alloc_failure;

  for (VAR_7 = 1, VAR_3 = VAR_2; VAR_7 < VAR_1->size; ++VAR_7)
    {
      VAR_4 = VAR_1->array[VAR_7];
      if (VAR_4->refcount)
 {
   *VAR_3++ = VAR_4;

   VAR_4->len -= 1;
 }
      else
 VAR_4->len = 0;
    }

  VAR_5 = VAR_3 - VAR_2;
  if (VAR_5 != 0)
    {
      FUNC_3 (VAR_2, VAR_5, sizeof (struct elf_strtab_hash_entry *), VAR_0);
      VAR_4 = *--VAR_3;
      VAR_4->len += 1;
      while (--VAR_3 >= VAR_2)
 {
   struct elf_strtab_hash_entry *VAR_8 = *VAR_3;

   VAR_8->len += 1;
   if (FUNC_2 (VAR_4, VAR_8))
     {
       VAR_8->u.suffix = VAR_4;
       VAR_8->len = -VAR_8->len;
     }
   else
     VAR_4 = VAR_8;
 }
    }

alloc_failure:
  if (VAR_2)
    FUNC_1 (VAR_2);


  VAR_5 = 1;
  for (VAR_7 = 1; VAR_7 < VAR_1->size; ++VAR_7)
    {
      VAR_4 = VAR_1->array[VAR_7];
      if (VAR_4->refcount && VAR_4->len > 0)
 {
   VAR_4->u.index = VAR_5;
   VAR_5 += VAR_4->len;
 }
    }

  VAR_1->sec_size = VAR_5;


  for (VAR_7 = 1; VAR_7 < VAR_1->size; ++VAR_7)
    {
      VAR_4 = VAR_1->array[VAR_7];
      if (VAR_4->refcount && VAR_4->len < 0)
 VAR_4->u.index = VAR_4->u.suffix->u.index + (VAR_4->u.suffix->len + VAR_4->len);
    }
}
