
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* section; } ;
struct TYPE_8__ {scalar_t__ link; } ;
struct TYPE_11__ {TYPE_3__ def; TYPE_1__ i; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {TYPE_7__* vtable; TYPE_5__ root; } ;
struct elf_backend_data {TYPE_6__* s; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_14__ {unsigned int size; struct elf_link_hash_entry* parent; scalar_t__* used; } ;
struct TYPE_13__ {unsigned int log_file_align; } ;
struct TYPE_9__ {int owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct elf_backend_data* FUNC_0 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct elf_link_hash_entry *VAR_2, void *VAR_3)
{
  if (VAR_2->root.type == VAR_1)
    VAR_2 = (struct elf_link_hash_entry *) VAR_2->root.u.i.link;


  if (VAR_2->vtable == ((void*)0) || VAR_2->vtable->parent == ((void*)0))
    return VAR_0;


  if (VAR_2->vtable->parent == (struct elf_link_hash_entry *) -1)
    return VAR_0;


  if (VAR_2->vtable->used && VAR_2->vtable->used[-1])
    return VAR_0;


  FUNC_1 (VAR_2->vtable->parent, VAR_3);

  if (VAR_2->vtable->used == ((void*)0))
    {


      VAR_2->vtable->used = VAR_2->vtable->parent->vtable->used;
      VAR_2->vtable->size = VAR_2->vtable->parent->vtable->size;
    }
  else
    {
      size_t VAR_4;
      bfd_boolean *VAR_5, *VAR_6;


      VAR_5 = VAR_2->vtable->used;
      VAR_5[-1] = VAR_0;
      VAR_6 = VAR_2->vtable->parent->vtable->used;
      if (VAR_6 != ((void*)0))
 {
   const struct elf_backend_data *VAR_7;
   unsigned int VAR_8;

   VAR_7 = FUNC_0 (VAR_2->root.u.def.section->owner);
   VAR_8 = VAR_7->s->log_file_align;
   VAR_4 = VAR_2->vtable->parent->vtable->size >> VAR_8;
   while (VAR_4--)
     {
       if (*VAR_6)
  *VAR_5 = VAR_0;
       VAR_6++;
       VAR_5++;
     }
 }
    }

  return VAR_0;
}
