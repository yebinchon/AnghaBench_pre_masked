
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct set_info {scalar_t__ reloc; scalar_t__ count; struct set_element* elements; struct bfd_link_hash_entry* h; struct set_info* next; } ;
struct set_element {char const* name; struct set_element* next; int value; TYPE_2__* section; } ;
struct TYPE_4__ {int string; } ;
struct bfd_link_hash_entry {TYPE_1__ root; } ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_reloc_code_real_type ;
struct TYPE_5__ {int * owner; } ;
typedef TYPE_2__ asection ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 struct set_info* VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 void* FUNC_4 (int) ;

void
FUNC_5 (struct bfd_link_hash_entry *VAR_1,
        bfd_reloc_code_real_type VAR_2,
        const char *VAR_3,
        asection *VAR_4,
        bfd_vma VAR_5)
{
  struct set_info *VAR_6;
  struct set_element *VAR_7;
  struct set_element **VAR_8;

  for (VAR_6 = VAR_0; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    if (VAR_6->h == VAR_1)
      break;

  if (VAR_6 == ((void*)0))
    {
      VAR_6 = FUNC_4 (sizeof (struct set_info));
      VAR_6->next = VAR_0;
      VAR_0 = VAR_6;
      VAR_6->h = VAR_1;
      VAR_6->reloc = VAR_2;
      VAR_6->count = 0;
      VAR_6->elements = ((void*)0);
    }
  else
    {
      if (VAR_6->reloc != VAR_2)
 {
   FUNC_2 (FUNC_0("%P%X: Different relocs used in set %s\n"),
   VAR_1->root.string);
   return;
 }
      if (VAR_6->elements != ((void*)0)
   && VAR_4->owner != ((void*)0)
   && VAR_6->elements->section->owner != ((void*)0)
   && FUNC_3 (FUNC_1 (VAR_4->owner),
       FUNC_1 (VAR_6->elements->section->owner)) != 0)
 {
   FUNC_2 (FUNC_0("%P%X: Different object file formats composing set %s\n"),
   VAR_1->root.string);
   return;
 }
    }

  VAR_7 = FUNC_4 (sizeof (struct set_element));
  VAR_7->next = ((void*)0);
  VAR_7->name = VAR_3;
  VAR_7->section = VAR_4;
  VAR_7->value = VAR_5;

  for (VAR_8 = &VAR_6->elements; *VAR_8 != ((void*)0); VAR_8 = &(*VAR_8)->next)
    ;
  *VAR_8 = VAR_7;

  ++VAR_6->count;
}
