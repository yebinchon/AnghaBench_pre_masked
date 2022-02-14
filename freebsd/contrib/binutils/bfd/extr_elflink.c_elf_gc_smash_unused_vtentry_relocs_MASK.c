
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ value; TYPE_7__* section; } ;
struct TYPE_11__ {scalar_t__ link; } ;
struct TYPE_13__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {scalar_t__ size; TYPE_6__* vtable; TYPE_4__ root; } ;
struct elf_backend_data {TYPE_5__* s; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_17__ {int reloc_count; int owner; } ;
typedef TYPE_7__ asection ;
struct TYPE_18__ {scalar_t__ r_offset; scalar_t__ r_info; scalar_t__ r_addend; } ;
struct TYPE_16__ {scalar_t__ size; scalar_t__* used; int * parent; } ;
struct TYPE_15__ {unsigned int log_file_align; int int_rels_per_ext_rel; } ;
typedef TYPE_8__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_1 (int ,TYPE_7__*,int *,int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct elf_backend_data* FUNC_2 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct elf_link_hash_entry *VAR_5, void *VAR_6)
{
  asection *VAR_7;
  bfd_vma VAR_8, VAR_9;
  Elf_Internal_Rela *VAR_10, *VAR_11, *VAR_12;
  const struct elf_backend_data *VAR_13;
  unsigned int VAR_14;

  if (VAR_5->root.type == VAR_4)
    VAR_5 = (struct elf_link_hash_entry *) VAR_5->root.u.i.link;



  if (VAR_5->vtable == ((void*)0) || VAR_5->vtable->parent == ((void*)0))
    return VAR_1;

  FUNC_0 (VAR_5->root.type == VAR_2
       || VAR_5->root.type == VAR_3);

  VAR_7 = VAR_5->root.u.def.section;
  VAR_8 = VAR_5->root.u.def.value;
  VAR_9 = VAR_8 + VAR_5->size;

  VAR_10 = FUNC_1 (VAR_7->owner, VAR_7, ((void*)0), ((void*)0), VAR_1);
  if (!VAR_10)
    return *(bfd_boolean *) VAR_6 = VAR_0;
  VAR_13 = FUNC_2 (VAR_7->owner);
  VAR_14 = VAR_13->s->log_file_align;

  VAR_11 = VAR_10 + VAR_7->reloc_count * VAR_13->s->int_rels_per_ext_rel;

  for (VAR_12 = VAR_10; VAR_12 < VAR_11; ++VAR_12)
    if (VAR_12->r_offset >= VAR_8 && VAR_12->r_offset < VAR_9)
      {

 if (VAR_5->vtable->used
     && (VAR_12->r_offset - VAR_8) < VAR_5->vtable->size)
   {
     bfd_vma VAR_15 = (VAR_12->r_offset - VAR_8) >> VAR_14;
     if (VAR_5->vtable->used[VAR_15])
       continue;
   }

 VAR_12->r_offset = VAR_12->r_info = VAR_12->r_addend = 0;
      }

  return VAR_1;
}
