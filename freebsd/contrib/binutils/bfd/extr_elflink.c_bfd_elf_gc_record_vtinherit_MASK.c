
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


struct TYPE_10__ {scalar_t__ value; int * section; } ;
struct TYPE_11__ {TYPE_3__ def; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {TYPE_7__* vtable; TYPE_5__ root; } ;
struct elf_backend_data {TYPE_1__* s; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_14__ {struct elf_link_hash_entry* parent; } ;
struct TYPE_9__ {int sh_size; scalar_t__ sh_info; } ;
struct TYPE_13__ {TYPE_2__ symtab_hdr; } ;
struct TYPE_8__ {int sizeof_sym; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 struct elf_link_hash_entry** FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (int *) ;
 struct elf_backend_data* FUNC_6 (int *) ;
 int FUNC_7 (char*,int *,int *,unsigned long) ;

bfd_boolean
FUNC_8 (bfd *VAR_5,
        asection *VAR_6,
        struct elf_link_hash_entry *VAR_7,
        bfd_vma VAR_8)
{
  struct elf_link_hash_entry **VAR_9, **VAR_10;
  struct elf_link_hash_entry **VAR_11, *VAR_12;
  bfd_size_type VAR_13;
  const struct elf_backend_data *VAR_14 = FUNC_6 (VAR_5);




  VAR_13 = FUNC_5 (VAR_5)->symtab_hdr.sh_size / VAR_14->s->sizeof_sym;
  if (!FUNC_3 (VAR_5))
    VAR_13 -= FUNC_5 (VAR_5)->symtab_hdr.sh_info;

  VAR_9 = FUNC_4 (VAR_5);
  VAR_10 = VAR_9 + VAR_13;



  for (VAR_11 = VAR_9; VAR_11 != VAR_10; ++VAR_11)
    {
      if ((VAR_12 = *VAR_11) != ((void*)0)
   && (VAR_12->root.type == VAR_3
       || VAR_12->root.type == VAR_4)
   && VAR_12->root.u.def.section == VAR_6
   && VAR_12->root.u.def.value == VAR_8)
 goto win;
    }

  FUNC_0) ("%B: %A+%lu: No symbol found for INHERIT",
    VAR_5, VAR_6, (unsigned long) VAR_8);
  FUNC_1 (VAR_2);
  return VAR_0;

 win:
  if (!VAR_12->vtable)
    {
      VAR_12->vtable = FUNC_2 (VAR_5, sizeof (*VAR_12->vtable));
      if (!VAR_12->vtable)
 return VAR_0;
    }
  if (!VAR_7)
    {





      VAR_12->vtable->parent = (struct elf_link_hash_entry *) -1;
    }
  else
    VAR_12->vtable->parent = VAR_7;

  return VAR_1;
}
