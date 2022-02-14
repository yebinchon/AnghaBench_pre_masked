
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf_reloc_cookie {unsigned long r_sym_shift; unsigned long locsymcount; unsigned long extsymoff; int abfd; TYPE_6__* locsyms; struct elf_link_hash_entry** sym_hashes; TYPE_1__* rel; scalar_t__ bad_symtab; TYPE_1__* relend; TYPE_1__* rels; } ;
struct TYPE_9__ {int * section; } ;
struct TYPE_8__ {scalar_t__ link; } ;
struct TYPE_10__ {TYPE_3__ def; TYPE_2__ i; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {TYPE_5__ root; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int asection ;
struct TYPE_12__ {scalar_t__ st_shndx; int st_info; } ;
struct TYPE_7__ {scalar_t__ r_offset; unsigned long r_info; } ;
typedef TYPE_6__ Elf_Internal_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

bfd_boolean
FUNC_3 (bfd_vma VAR_10, void *VAR_11)
{
  struct elf_reloc_cookie *VAR_12 = VAR_11;

  if (VAR_12->bad_symtab)
    VAR_12->rel = VAR_12->rels;

  for (; VAR_12->rel < VAR_12->relend; VAR_12->rel++)
    {
      unsigned long VAR_13;

      if (! VAR_12->bad_symtab)
 if (VAR_12->rel->r_offset > VAR_10)
   return VAR_0;
      if (VAR_12->rel->r_offset != VAR_10)
 continue;

      VAR_13 = VAR_12->rel->r_info >> VAR_12->r_sym_shift;
      if (VAR_13 == VAR_3)
 return VAR_5;

      if (VAR_13 >= VAR_12->locsymcount
   || FUNC_0 (VAR_12->locsyms[VAR_13].st_info) != VAR_4)
 {
   struct elf_link_hash_entry *VAR_14;

   VAR_14 = VAR_12->sym_hashes[VAR_13 - VAR_12->extsymoff];

   while (VAR_14->root.type == VAR_8
   || VAR_14->root.type == VAR_9)
     VAR_14 = (struct elf_link_hash_entry *) VAR_14->root.u.i.link;

   if ((VAR_14->root.type == VAR_6
        || VAR_14->root.type == VAR_7)
       && FUNC_2 (VAR_14->root.u.def.section))
     return VAR_5;
   else
     return VAR_0;
 }
      else
 {



   asection *VAR_15;
   Elf_Internal_Sym *VAR_16;


   VAR_16 = &VAR_12->locsyms[VAR_13];
   if (VAR_16->st_shndx < VAR_2 || VAR_16->st_shndx > VAR_1)
     {
       VAR_15 = FUNC_1 (VAR_12->abfd, VAR_16->st_shndx);
       if (VAR_15 != ((void*)0) && FUNC_2 (VAR_15))
  return VAR_5;
     }
 }
      return VAR_0;
    }
  return VAR_0;
}
