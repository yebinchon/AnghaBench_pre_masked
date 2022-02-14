
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


struct ppc_link_hash_entry {char tls_mask; } ;
struct got_entry {int dummy; } ;
struct TYPE_13__ {int * section; } ;
struct TYPE_12__ {scalar_t__ link; } ;
struct TYPE_14__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_17__ {unsigned long sh_info; scalar_t__ contents; } ;
struct TYPE_18__ {TYPE_6__ symtab_hdr; } ;
struct TYPE_16__ {scalar_t__ st_shndx; } ;
typedef TYPE_5__ Elf_Internal_Sym ;
typedef TYPE_6__ Elf_Internal_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (int *,TYPE_6__*,unsigned long,int ,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_1 (int *,scalar_t__) ;
 struct got_entry** FUNC_2 (int *) ;
 struct elf_link_hash_entry** FUNC_3 (int *) ;
 TYPE_9__* FUNC_4 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct elf_link_hash_entry **VAR_9,
    Elf_Internal_Sym **VAR_10,
    asection **VAR_11,
    char **VAR_12,
    Elf_Internal_Sym **VAR_13,
    unsigned long VAR_14,
    bfd *VAR_15)
{
  Elf_Internal_Shdr *VAR_16 = &FUNC_4 (VAR_15)->symtab_hdr;

  if (VAR_14 >= VAR_16->sh_info)
    {
      struct elf_link_hash_entry **VAR_17 = FUNC_3 (VAR_15);
      struct elf_link_hash_entry *VAR_18;

      VAR_18 = VAR_17[VAR_14 - VAR_16->sh_info];
      while (VAR_18->root.type == VAR_7
      || VAR_18->root.type == VAR_8)
 VAR_18 = (struct elf_link_hash_entry *) VAR_18->root.u.i.link;

      if (VAR_9 != ((void*)0))
 *VAR_9 = VAR_18;

      if (VAR_10 != ((void*)0))
 *VAR_10 = ((void*)0);

      if (VAR_11 != ((void*)0))
 {
   asection *VAR_19 = ((void*)0);
   if (VAR_18->root.type == VAR_5
       || VAR_18->root.type == VAR_6)
     VAR_19 = VAR_18->root.u.def.section;
   *VAR_11 = VAR_19;
 }

      if (VAR_12 != ((void*)0))
 {
   struct ppc_link_hash_entry *VAR_20;

   VAR_20 = (struct ppc_link_hash_entry *) VAR_18;
   *VAR_12 = &VAR_20->tls_mask;
 }
    }
  else
    {
      Elf_Internal_Sym *VAR_21;
      Elf_Internal_Sym *VAR_22 = *VAR_13;

      if (VAR_22 == ((void*)0))
 {
   VAR_22 = (Elf_Internal_Sym *) VAR_16->contents;
   if (VAR_22 == ((void*)0))
     VAR_22 = FUNC_0 (VAR_15, VAR_16,
         VAR_16->sh_info,
         0, ((void*)0), ((void*)0), ((void*)0));
   if (VAR_22 == ((void*)0))
     return VAR_0;
   *VAR_13 = VAR_22;
 }
      VAR_21 = VAR_22 + VAR_14;

      if (VAR_9 != ((void*)0))
 *VAR_9 = ((void*)0);

      if (VAR_10 != ((void*)0))
 *VAR_10 = VAR_21;

      if (VAR_11 != ((void*)0))
 {
   asection *VAR_23 = ((void*)0);
   if ((VAR_21->st_shndx != VAR_3
        && VAR_21->st_shndx < VAR_2)
       || VAR_21->st_shndx > VAR_1)
     VAR_23 = FUNC_1 (VAR_15, VAR_21->st_shndx);
   *VAR_11 = VAR_23;
 }

      if (VAR_12 != ((void*)0))
 {
   struct got_entry **VAR_24;
   char *VAR_25;

   VAR_25 = ((void*)0);
   VAR_24 = FUNC_2 (VAR_15);
   if (VAR_24 != ((void*)0))
     {
       char *VAR_26 = (char *) (VAR_24 + VAR_16->sh_info);
       VAR_25 = &VAR_26[VAR_14];
     }
   *VAR_12 = VAR_25;
 }
    }
  return VAR_4;
}
