
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct ppc_link_hash_table {int dummy; } ;
struct ppc_link_hash_entry {struct ppc_dyn_relocs* dyn_relocs; } ;
struct ppc_dyn_relocs {struct ppc_dyn_relocs* next; TYPE_8__* sec; } ;
struct TYPE_25__ {int refcount; } ;
struct plt_entry {TYPE_7__ plt; int addend; struct plt_entry* next; } ;
struct TYPE_23__ {int refcount; } ;
struct got_entry {char tls_type; TYPE_5__ got; int * owner; int addend; struct got_entry* next; } ;
struct TYPE_24__ {struct plt_entry* plist; } ;
struct TYPE_22__ {struct got_entry* glist; } ;
struct TYPE_19__ {scalar_t__ link; } ;
struct TYPE_20__ {TYPE_1__ i; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_6__ plt; TYPE_4__ got; TYPE_3__ root; } ;
struct bfd_link_info {int dummy; } ;
typedef enum elf_ppc64_reloc_type { ____Placeholder_elf_ppc64_reloc_type } elf_ppc64_reloc_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_26__ {int flags; int reloc_count; } ;
typedef TYPE_8__ asection ;
struct TYPE_27__ {unsigned long sh_info; } ;
struct TYPE_18__ {int * local_dynrel; } ;
struct TYPE_17__ {TYPE_9__ symtab_hdr; } ;
struct TYPE_16__ {int r_addend; int r_info; } ;
typedef TYPE_9__ Elf_Internal_Shdr ;
typedef TYPE_10__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct got_entry** FUNC_3 (int *) ;
 TYPE_14__* FUNC_4 (TYPE_8__*) ;
 struct elf_link_hash_entry** FUNC_5 (int *) ;
 TYPE_13__* FUNC_6 (int *) ;
 struct ppc_link_hash_table* FUNC_7 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_9, struct bfd_link_info *VAR_10,
    asection *VAR_11, const Elf_Internal_Rela *VAR_12)
{
  struct ppc_link_hash_table *VAR_13;
  Elf_Internal_Shdr *VAR_14;
  struct elf_link_hash_entry **VAR_15;
  struct got_entry **VAR_16;
  const Elf_Internal_Rela *VAR_17, *VAR_18;

  if ((VAR_11->flags & VAR_0) == 0)
    return VAR_6;

  FUNC_4 (VAR_11)->local_dynrel = ((void*)0);

  VAR_13 = FUNC_7 (VAR_10);
  VAR_14 = &FUNC_6 (VAR_9)->symtab_hdr;
  VAR_15 = FUNC_5 (VAR_9);
  VAR_16 = FUNC_3 (VAR_9);

  VAR_18 = VAR_12 + VAR_11->reloc_count;
  for (VAR_17 = VAR_12; VAR_17 < VAR_18; VAR_17++)
    {
      unsigned long VAR_19;
      enum elf_ppc64_reloc_type VAR_20;
      struct elf_link_hash_entry *VAR_21 = ((void*)0);
      char VAR_22 = 0;

      VAR_19 = FUNC_0 (VAR_17->r_info);
      VAR_20 = FUNC_1 (VAR_17->r_info);
      if (VAR_19 >= VAR_14->sh_info)
 {
   struct ppc_link_hash_entry *VAR_23;
   struct ppc_dyn_relocs **VAR_24;
   struct ppc_dyn_relocs *VAR_25;

   VAR_21 = VAR_15[VAR_19 - VAR_14->sh_info];
   while (VAR_21->root.type == VAR_7
   || VAR_21->root.type == VAR_8)
     VAR_21 = (struct elf_link_hash_entry *) VAR_21->root.u.i.link;
   VAR_23 = (struct ppc_link_hash_entry *) VAR_21;

   for (VAR_24 = &VAR_23->dyn_relocs; (VAR_25 = *VAR_24) != ((void*)0); VAR_24 = &VAR_25->next)
     if (VAR_25->sec == VAR_11)
       {

  *VAR_24 = VAR_25->next;
  break;
       }
 }

      switch (VAR_20)
 {
 case 144:
 case 141:
 case 142:
 case 143:
   VAR_22 = VAR_4 | VAR_3;
   goto dogot;

 case 148:
 case 145:
 case 146:
 case 147:
   VAR_22 = VAR_4 | VAR_2;
   goto dogot;

 case 140:
 case 137:
 case 138:
 case 139:
   VAR_22 = VAR_4 | VAR_5;
   goto dogot;

 case 152:
 case 149:
 case 150:
 case 151:
   VAR_22 = VAR_4 | VAR_1;
   goto dogot;

 case 158:
 case 157:
 case 156:
 case 155:
 case 154:
 case 153:
 dogot:
   {
     struct got_entry *VAR_26;

     if (VAR_21 != ((void*)0))
       VAR_26 = VAR_21->got.glist;
     else
       VAR_26 = VAR_16[VAR_19];

     for (; VAR_26 != ((void*)0); VAR_26 = VAR_26->next)
       if (VAR_26->addend == VAR_17->r_addend
    && VAR_26->owner == VAR_9
    && VAR_26->tls_type == VAR_22)
  break;
     if (VAR_26 == ((void*)0))
       FUNC_2 ();
     if (VAR_26->got.refcount > 0)
       VAR_26->got.refcount -= 1;
   }
   break;

 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
   if (VAR_21 != ((void*)0))
     {
       struct plt_entry *VAR_27;

       for (VAR_27 = VAR_21->plt.plist; VAR_27 != ((void*)0); VAR_27 = VAR_27->next)
  if (VAR_27->addend == VAR_17->r_addend)
    break;
       if (VAR_27 != ((void*)0) && VAR_27->plt.refcount > 0)
  VAR_27->plt.refcount -= 1;
     }
   break;

 default:
   break;
 }
    }
  return VAR_6;
}
