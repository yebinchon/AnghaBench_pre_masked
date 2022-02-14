
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* string; } ;
struct strtab_hash_entry {scalar_t__ index; struct strtab_hash_entry* next; TYPE_1__ root; } ;
struct bfd_strtab_hash {scalar_t__ size; struct strtab_hash_entry* last; struct strtab_hash_entry* first; scalar_t__ xcoff; int table; } ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (char const*) ;
 struct strtab_hash_entry* FUNC_2 (struct bfd_strtab_hash*,char const*,int ,scalar_t__) ;

bfd_size_type
FUNC_3 (struct bfd_strtab_hash *VAR_1,
      const char *VAR_2,
      bfd_boolean VAR_3,
      bfd_boolean VAR_4)
{
  struct strtab_hash_entry *VAR_5;

  if (VAR_3)
    {
      VAR_5 = FUNC_2 (VAR_1, VAR_2, VAR_0, VAR_4);
      if (VAR_5 == ((void*)0))
 return (bfd_size_type) -1;
    }
  else
    {
      VAR_5 = FUNC_0 (&VAR_1->table, sizeof (* VAR_5));
      if (VAR_5 == ((void*)0))
 return (bfd_size_type) -1;
      if (! VAR_4)
 VAR_5->root.string = VAR_2;
      else
 {
   char *VAR_6;

   VAR_6 = FUNC_0 (&VAR_1->table, FUNC_1 (VAR_2) + 1);
   if (VAR_6 == ((void*)0))
     return (bfd_size_type) -1;
   VAR_5->root.string = VAR_6;
 }
      VAR_5->index = (bfd_size_type) -1;
      VAR_5->next = ((void*)0);
    }

  if (VAR_5->index == (bfd_size_type) -1)
    {
      VAR_5->index = VAR_1->size;
      VAR_1->size += FUNC_1 (VAR_2) + 1;
      if (VAR_1->xcoff)
 {
   VAR_5->index += 2;
   VAR_1->size += 2;
 }
      if (VAR_1->first == ((void*)0))
 VAR_1->first = VAR_5;
      else
 VAR_1->last->next = VAR_5;
      VAR_1->last = VAR_5;
    }

  return VAR_5->index;
}
