
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct ppc_link_hash_table {int elf; } ;
struct TYPE_30__ {TYPE_10__* section; int value; } ;
struct TYPE_31__ {TYPE_1__ def; } ;
struct TYPE_32__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_33__ {TYPE_3__ root; } ;
struct ppc_link_hash_entry {TYPE_4__ elf; struct ppc_link_hash_entry* oh; scalar_t__ is_func_descriptor; } ;
struct TYPE_36__ {TYPE_6__* p; } ;
struct TYPE_34__ {TYPE_10__* section; } ;
struct TYPE_37__ {TYPE_7__ c; TYPE_5__ def; } ;
struct TYPE_38__ {TYPE_8__ u; int type; } ;
struct elf_link_hash_entry {TYPE_9__ root; } ;
struct bfd_sym_chain {int name; struct bfd_sym_chain* next; } ;
struct bfd_link_info {struct bfd_sym_chain* gc_sym_list; } ;
typedef enum elf_ppc64_reloc_type { ____Placeholder_elf_ppc64_reloc_type } elf_ppc64_reloc_type ;
typedef scalar_t__ bfd_vma ;
struct TYPE_27__ {int gc_mark; int owner; } ;
typedef TYPE_10__ asection ;
struct TYPE_35__ {TYPE_10__* section; } ;
struct TYPE_29__ {int r_addend; int r_info; } ;
struct TYPE_28__ {int st_value; int st_shndx; } ;
typedef TYPE_11__ Elf_Internal_Sym ;
typedef TYPE_12__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int FUNC_1 (struct bfd_link_info*,TYPE_10__*,TYPE_10__* (*) (TYPE_10__*,struct bfd_link_info*,TYPE_12__*,struct elf_link_hash_entry*,TYPE_11__*)) ;



 TYPE_10__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 TYPE_10__** FUNC_4 (TYPE_10__*) ;
 scalar_t__ FUNC_5 (TYPE_10__*,int ,TYPE_10__**,int *) ;
 struct ppc_link_hash_table* FUNC_6 (struct bfd_link_info*) ;

__attribute__((used)) static asection *
FUNC_7 (asection *VAR_1,
   struct bfd_link_info *VAR_2,
   Elf_Internal_Rela *VAR_3,
   struct elf_link_hash_entry *VAR_4,
   Elf_Internal_Sym *VAR_5)
{
  asection *VAR_6;


  if (VAR_2->gc_sym_list != ((void*)0))
    {
      struct ppc_link_hash_table *VAR_7 = FUNC_6 (VAR_2);
      struct bfd_sym_chain *VAR_8 = VAR_2->gc_sym_list;

      VAR_2->gc_sym_list = ((void*)0);
      for (; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
 {
   struct ppc_link_hash_entry *VAR_9;

   VAR_9 = (struct ppc_link_hash_entry *)
     FUNC_3 (&VAR_7->elf, VAR_8->name, VAR_0, VAR_0, VAR_0);
   if (VAR_9 == ((void*)0))
     continue;
   if (VAR_9->elf.root.type != 129
       && VAR_9->elf.root.type != 128)
     continue;

   if (VAR_9->is_func_descriptor
       && (VAR_9->oh->elf.root.type == 129
    || VAR_9->oh->elf.root.type == 128))
     VAR_6 = VAR_9->oh->elf.root.u.def.section;
   else if (FUNC_4 (VAR_9->elf.root.u.def.section) != ((void*)0)
     && FUNC_5 (VAR_9->elf.root.u.def.section,
           VAR_9->elf.root.u.def.value,
           &VAR_6, ((void*)0)) != (bfd_vma) -1)
     ;
   else
     continue;

   if (!VAR_6->gc_mark)
     FUNC_1 (VAR_2, VAR_6, FUNC_7);

   VAR_6 = VAR_9->elf.root.u.def.section;
   if (!VAR_6->gc_mark)
     FUNC_1 (VAR_2, VAR_6, FUNC_7);
 }
    }



  VAR_6 = ((void*)0);
  if (FUNC_4 (VAR_1) != ((void*)0))
    return VAR_6;

  if (VAR_4 != ((void*)0))
    {
      enum elf_ppc64_reloc_type VAR_10;
      struct ppc_link_hash_entry *VAR_11;

      VAR_10 = FUNC_0 (VAR_3->r_info);
      switch (VAR_10)
 {
 case 131:
 case 132:
   break;

 default:
   switch (VAR_4->root.type)
     {
     case 129:
     case 128:
       VAR_11 = (struct ppc_link_hash_entry *) VAR_4;
       if (VAR_11->oh != ((void*)0)
    && VAR_11->oh->is_func_descriptor
    && (VAR_11->oh->elf.root.type == 129
        || VAR_11->oh->elf.root.type == 128))
  VAR_11 = VAR_11->oh;



       if (VAR_11->is_func_descriptor
    && (VAR_11->oh->elf.root.type == 129
        || VAR_11->oh->elf.root.type == 128))
  {

    if (!VAR_11->elf.root.u.def.section->gc_mark)
      FUNC_1 (VAR_2, VAR_11->elf.root.u.def.section,
          FUNC_7);

    VAR_6 = VAR_11->oh->elf.root.u.def.section;
  }
       else if (FUNC_4 (VAR_11->elf.root.u.def.section) != ((void*)0)
         && FUNC_5 (VAR_11->elf.root.u.def.section,
        VAR_11->elf.root.u.def.value,
        &VAR_6, ((void*)0)) != (bfd_vma) -1)
  {
    if (!VAR_11->elf.root.u.def.section->gc_mark)
      FUNC_1 (VAR_2, VAR_11->elf.root.u.def.section,
          FUNC_7);
  }
       else
  VAR_6 = VAR_4->root.u.def.section;
       break;

     case 130:
       VAR_6 = VAR_4->root.u.c.p->section;
       break;

     default:
       break;
     }
 }
    }
  else
    {
      asection **VAR_12;

      VAR_6 = FUNC_2 (VAR_1->owner, VAR_5->st_shndx);
      VAR_12 = FUNC_4 (VAR_6);
      if (VAR_12 != ((void*)0))
 {
   if (!VAR_6->gc_mark)
     FUNC_1 (VAR_2, VAR_6, FUNC_7);

   VAR_6 = VAR_12[(VAR_5->st_value + VAR_3->r_addend) / 8];
 }
    }

  return VAR_6;
}
