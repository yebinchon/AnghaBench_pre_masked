
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * section; } ;
struct TYPE_12__ {scalar_t__ link; } ;
struct TYPE_14__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_17__ {unsigned long sh_info; unsigned char* contents; size_t sh_size; size_t sh_entsize; } ;
struct TYPE_18__ {TYPE_6__ symtab_hdr; } ;
struct TYPE_16__ {scalar_t__ st_shndx; } ;
typedef TYPE_5__ Elf_Internal_Sym ;
typedef TYPE_6__ Elf_Internal_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (int *,TYPE_6__*,size_t,int ,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_1 (int *,scalar_t__) ;
 struct elf_link_hash_entry** FUNC_2 (int *) ;
 TYPE_9__* FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct elf_link_hash_entry **VAR_9,
    Elf_Internal_Sym **VAR_10,
    asection **VAR_11,
    Elf_Internal_Sym **VAR_12,
    unsigned long VAR_13,
    bfd *VAR_14)
{
  Elf_Internal_Shdr *VAR_15 = &FUNC_3 (VAR_14)->symtab_hdr;

  if (VAR_13 >= VAR_15->sh_info)
    {
      struct elf_link_hash_entry **VAR_16 = FUNC_2 (VAR_14);
      struct elf_link_hash_entry *VAR_17;

      VAR_17 = VAR_16[VAR_13 - VAR_15->sh_info];
      while (VAR_17->root.type == VAR_7
      || VAR_17->root.type == VAR_8)
 VAR_17 = (struct elf_link_hash_entry *) VAR_17->root.u.i.link;

      if (VAR_9 != ((void*)0))
 *VAR_9 = VAR_17;

      if (VAR_10 != ((void*)0))
 *VAR_10 = ((void*)0);

      if (VAR_11 != ((void*)0))
 {
   asection *VAR_18 = ((void*)0);
   if (VAR_17->root.type == VAR_5
       || VAR_17->root.type == VAR_6)
     VAR_18 = VAR_17->root.u.def.section;
   *VAR_11 = VAR_18;
 }
    }
  else
    {
      Elf_Internal_Sym *VAR_19;
      Elf_Internal_Sym *VAR_20 = *VAR_12;

      if (VAR_20 == ((void*)0))
 {
   VAR_20 = (Elf_Internal_Sym *) VAR_15->contents;
   if (VAR_20 == ((void*)0))
     {
       size_t VAR_21 = VAR_15->sh_info;




       if ((unsigned char **) VAR_12 == &VAR_15->contents)
  VAR_21 = VAR_15->sh_size / VAR_15->sh_entsize;
       VAR_20 = FUNC_0 (VAR_14, VAR_15, VAR_21, 0,
           ((void*)0), ((void*)0), ((void*)0));
     }
   if (VAR_20 == ((void*)0))
     return VAR_0;
   *VAR_12 = VAR_20;
 }
      VAR_19 = VAR_20 + VAR_13;

      if (VAR_9 != ((void*)0))
 *VAR_9 = ((void*)0);

      if (VAR_10 != ((void*)0))
 *VAR_10 = VAR_19;

      if (VAR_11 != ((void*)0))
 {
   asection *VAR_22 = ((void*)0);
   if ((VAR_19->st_shndx != VAR_3
        && VAR_19->st_shndx < VAR_2)
       || VAR_19->st_shndx > VAR_1)
     VAR_22 = FUNC_1 (VAR_14, VAR_19->st_shndx);
   *VAR_11 = VAR_22;
 }
    }

  return VAR_4;
}
