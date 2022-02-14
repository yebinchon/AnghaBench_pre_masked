
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_39__ {scalar_t__ string; } ;
struct TYPE_37__ {scalar_t__ link; } ;
struct TYPE_38__ {TYPE_4__ i; } ;
struct TYPE_40__ {scalar_t__ type; TYPE_6__ root; TYPE_5__ u; } ;
struct elf_link_hash_entry {scalar_t__ type; TYPE_7__ root; } ;
struct elf_final_link_info {TYPE_10__* internal_syms; TYPE_1__* info; } ;
struct elf_backend_data {TYPE_3__* s; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_41__ {char* filename; TYPE_9__* sections; } ;
typedef TYPE_8__ bfd ;
struct TYPE_42__ {int flags; unsigned long reloc_count; int output_offset; char* name; TYPE_2__* output_section; int linker_mark; struct TYPE_42__* next; } ;
typedef TYPE_9__ asection ;
struct TYPE_36__ {int arch_size; } ;
struct TYPE_35__ {int vma; } ;
struct TYPE_34__ {TYPE_12__* relocs; } ;
struct TYPE_33__ {scalar_t__ relocatable; } ;
struct TYPE_30__ {int sh_link; } ;
struct TYPE_32__ {TYPE_11__ symtab_hdr; } ;
struct TYPE_31__ {int r_offset; int r_info; } ;
struct TYPE_29__ {int st_info; int st_name; } ;
typedef TYPE_10__ Elf_Internal_Sym ;
typedef TYPE_11__ Elf_Internal_Shdr ;
typedef TYPE_12__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_12__* FUNC_2 (TYPE_8__*,TYPE_9__*,int *,TYPE_12__*,int) ;
 char* FUNC_3 (TYPE_8__*,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 TYPE_21__* FUNC_5 (TYPE_9__*) ;
 struct elf_link_hash_entry** FUNC_6 (TYPE_8__*) ;
 TYPE_18__* FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (int*,char*,char**,TYPE_8__*,struct elf_final_link_info*,int,int,size_t,int) ;
 int FUNC_9 (TYPE_12__*) ;
 struct elf_backend_data* FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (TYPE_8__*,struct elf_final_link_info*,int,int) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (bfd * VAR_8,
         struct elf_final_link_info * VAR_9,
         size_t VAR_10)
{
  const struct elf_backend_data * VAR_11;
  Elf_Internal_Shdr * VAR_12;
  struct elf_link_hash_entry ** VAR_13;
  asection * VAR_14;
  bfd_boolean VAR_15 = VAR_5;





  if (VAR_9->info->relocatable)
    return VAR_5;

  VAR_12 = & FUNC_7 (VAR_8)->symtab_hdr;
  VAR_13 = FUNC_6 (VAR_8);
  VAR_11 = FUNC_10 (VAR_8);

  for (VAR_14 = VAR_8->sections; VAR_14; VAR_14 = VAR_14->next)
    {
      Elf_Internal_Rela * VAR_16;
      unsigned long VAR_17;


      if (! VAR_14->linker_mark)
 continue;


      if ((VAR_14->flags & VAR_1) == 0)
 continue;

      if (VAR_14->reloc_count == 0)
 continue;


      VAR_16
 = FUNC_2 (VAR_8, VAR_14, ((void*)0),
         (Elf_Internal_Rela *) ((void*)0),
         VAR_0);
      if (VAR_16 == ((void*)0))
 continue;

      for (VAR_17 = VAR_14->reloc_count; VAR_17--;)
 {
   Elf_Internal_Rela * VAR_18;
   char * VAR_19;
   bfd_vma VAR_20;
   Elf_Internal_Sym * VAR_21;
   bfd_vma VAR_22;
   bfd_vma VAR_23;
   bfd_vma VAR_24;
   int VAR_25 = 0;

   VAR_18 = VAR_16 + VAR_17;
   VAR_23 = VAR_14->output_section->vma
     + VAR_14->output_offset;
   VAR_24 = VAR_18->r_offset;

   VAR_20 = FUNC_0 (VAR_18->r_info);
   if (VAR_11->s->arch_size == 64)
     VAR_20 >>= 24;

   if (VAR_20 == VAR_2)
     continue;

   if (VAR_20 < VAR_10)
     {

       VAR_21 = VAR_9->internal_syms + VAR_20;


       if ((FUNC_1 (VAR_21->st_info) != VAR_3) &&
    (FUNC_1 (VAR_21->st_info) != VAR_4))
  continue;

       VAR_19 = FUNC_3
  (VAR_8, VAR_12->sh_link, VAR_21->st_name);

       VAR_25 = (FUNC_1 (VAR_21->st_info) == VAR_4);
     }
   else
     {

       struct elf_link_hash_entry * VAR_26;

       if (FUNC_4 (VAR_8))
  continue;

       VAR_26 = VAR_13 [VAR_20 - VAR_10];
       while ( VAR_26->root.type == VAR_6
       || VAR_26->root.type == VAR_7)
  VAR_26 = (struct elf_link_hash_entry *) VAR_26->root.u.i.link;

       if (VAR_26->type != VAR_3 && VAR_26->type != VAR_4)
  continue;

       VAR_25 = (VAR_26->type == VAR_4);
       VAR_19 = (char *) VAR_26->root.root.string;
     }
   if (FUNC_8 (& VAR_22, VAR_19, & VAR_19, VAR_8,
      VAR_9, VAR_24, VAR_23, VAR_10,
      VAR_25))

     FUNC_12 (VAR_8, VAR_9, VAR_20, VAR_22);

   else
     VAR_22 = VAR_0;
 }

      if (VAR_16 != FUNC_5 (VAR_14)->relocs)
 FUNC_9 (VAR_16);
    }



  return VAR_15;
}
