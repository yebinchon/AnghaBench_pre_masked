
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_29__ ;
typedef struct TYPE_40__ TYPE_28__ ;
typedef struct TYPE_39__ TYPE_22__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


struct bfd_link_info {scalar_t__ relax_trip; int keep_memory; scalar_t__ relocatable; } ;
struct alpha_relax_info {TYPE_10__* contents; scalar_t__ changed_relocs; scalar_t__ changed_contents; struct alpha_elf_got_entry* gotent; TYPE_22__* tsec; int * gotobj; struct alpha_elf_got_entry** first_gotent; int other; struct alpha_elf_link_hash_entry* h; struct bfd_link_info* link_info; scalar_t__ gp; TYPE_10__* relend; TYPE_10__* relocs; TYPE_11__* symtab_hdr; TYPE_9__* sec; int * abfd; } ;
struct TYPE_43__ {scalar_t__ value; TYPE_22__* section; } ;
struct TYPE_42__ {scalar_t__ link; } ;
struct TYPE_44__ {TYPE_3__ def; TYPE_2__ i; } ;
struct TYPE_45__ {scalar_t__ type; TYPE_4__ u; } ;
struct TYPE_46__ {int other; TYPE_5__ root; int def_regular; } ;
struct alpha_elf_link_hash_entry {struct alpha_elf_got_entry* got_entries; TYPE_6__ root; } ;
struct alpha_elf_got_entry {unsigned long reloc_type; scalar_t__ addend; int * gotobj; struct alpha_elf_got_entry* next; } ;
typedef int info ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_49__ {int flags; scalar_t__ reloc_count; scalar_t__ output_offset; TYPE_1__* output_section; } ;
typedef TYPE_9__ asection ;
struct TYPE_48__ {TYPE_10__* contents; } ;
struct TYPE_47__ {scalar_t__ vma; } ;
struct TYPE_41__ {scalar_t__ relax_trip; } ;
struct TYPE_40__ {TYPE_9__* got; int * gotobj; struct alpha_elf_got_entry** local_got_entries; } ;
struct TYPE_39__ {scalar_t__ output_offset; TYPE_7__* output_section; } ;
struct TYPE_38__ {scalar_t__ vma; } ;
struct TYPE_37__ {scalar_t__ dynamic_sections_created; } ;
struct TYPE_36__ {TYPE_10__* relocs; TYPE_8__ this_hdr; } ;
struct TYPE_34__ {unsigned long sh_info; unsigned char* contents; } ;
struct TYPE_35__ {TYPE_11__ symtab_hdr; } ;
struct TYPE_33__ {scalar_t__ st_value; scalar_t__ st_shndx; scalar_t__ r_addend; int r_info; int st_other; } ;
typedef int PTR ;
typedef TYPE_10__ Elf_Internal_Sym ;
typedef TYPE_11__ Elf_Internal_Shdr ;
typedef TYPE_10__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int VAR_0 ;





 unsigned long VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_10__* FUNC_3 (int *,TYPE_9__*,int ,TYPE_10__*,int ) ;
 int FUNC_4 () ;
 TYPE_29__* FUNC_5 (struct bfd_link_info*) ;
 struct alpha_elf_link_hash_entry** FUNC_6 (int *) ;
 TYPE_28__* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct bfd_link_info*) ;
 void* VAR_9 ;
 TYPE_22__* VAR_10 ;
 TYPE_10__* FUNC_9 (int *,TYPE_11__*,unsigned long,int ,int *,int *,int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (int *,TYPE_9__*,TYPE_10__**) ;
 TYPE_22__* FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (struct alpha_relax_info*,scalar_t__,TYPE_10__*,unsigned long) ;
 int FUNC_13 (struct alpha_relax_info*,scalar_t__,TYPE_10__*,int) ;
 int FUNC_14 (struct alpha_relax_info*,scalar_t__,TYPE_10__*) ;
 int FUNC_15 (struct bfd_link_info*) ;
 int FUNC_16 (struct bfd_link_info*) ;
 int FUNC_17 (struct bfd_link_info*) ;
 TYPE_17__* FUNC_18 (struct bfd_link_info*) ;
 TYPE_15__* FUNC_19 (TYPE_9__*) ;
 TYPE_14__* FUNC_20 (int *) ;
 int FUNC_21 (TYPE_10__*) ;
 int FUNC_22 (struct alpha_relax_info*,int ,int) ;

__attribute__((used)) static bfd_boolean
FUNC_23 (bfd *VAR_15, asection *VAR_16,
      struct bfd_link_info *VAR_17, bfd_boolean *VAR_18)
{
  Elf_Internal_Shdr *VAR_19;
  Elf_Internal_Rela *VAR_20;
  Elf_Internal_Rela *VAR_21, *VAR_22;
  Elf_Internal_Sym *VAR_23 = ((void*)0);
  struct alpha_elf_got_entry **VAR_24;
  struct alpha_relax_info VAR_25;


  *VAR_18 = VAR_0;

  if (VAR_17->relocatable
      || ((VAR_16->flags & (VAR_3 | VAR_4 | VAR_2))
   != (VAR_3 | VAR_4 | VAR_2))
      || VAR_16->reloc_count == 0)
    return VAR_8;


  if (FUNC_5(VAR_17)->relax_trip != VAR_17->relax_trip)
    {
      FUNC_5(VAR_17)->relax_trip = VAR_17->relax_trip;



      if (!FUNC_15 (VAR_17))
 FUNC_4 ();
      if (FUNC_18 (VAR_17)->dynamic_sections_created)
 {
   FUNC_16 (VAR_17);
   FUNC_17 (VAR_17);
 }
    }

  VAR_19 = &FUNC_20 (VAR_15)->symtab_hdr;
  VAR_24 = FUNC_7(VAR_15)->local_got_entries;


  VAR_20 = (FUNC_3
       (VAR_15, VAR_16, (PTR) ((void*)0), (Elf_Internal_Rela *) ((void*)0),
        VAR_17->keep_memory));
  if (VAR_20 == ((void*)0))
    return VAR_0;

  FUNC_22(&VAR_25, 0, sizeof (VAR_25));
  VAR_25.abfd = VAR_15;
  VAR_25.sec = VAR_16;
  VAR_25.link_info = VAR_17;
  VAR_25.symtab_hdr = VAR_19;
  VAR_25.relocs = VAR_20;
  VAR_25.relend = VAR_22 = VAR_20 + VAR_16->reloc_count;



  VAR_25.gotobj = FUNC_7 (VAR_15)->gotobj;
  if (VAR_25.gotobj)
    {
      asection *VAR_26 = FUNC_7 (VAR_25.gotobj)->got;
      VAR_25.gp = (VAR_26->output_section->vma
   + VAR_26->output_offset
   + 0x8000);
    }


  if (FUNC_19 (VAR_16)->this_hdr.contents != ((void*)0))
    VAR_25.contents = FUNC_19 (VAR_16)->this_hdr.contents;
  else
    {
      if (!FUNC_10 (VAR_15, VAR_16, &VAR_25.contents))
 goto error_return;
    }

  for (VAR_21 = VAR_20; VAR_21 < VAR_22; VAR_21++)
    {
      bfd_vma VAR_27;
      struct alpha_elf_got_entry *VAR_28;
      unsigned long VAR_29 = FUNC_2 (VAR_21->r_info);
      unsigned long VAR_30 = FUNC_1 (VAR_21->r_info);


      switch (VAR_29)
 {
 case 130:
 case 132:
 case 131:
 case 134:
 case 133:
 case 129:
   break;

 case 128:


   VAR_30 = 0;
   break;

 default:
   continue;
 }


      if (VAR_30 < VAR_19->sh_info)
 {

   Elf_Internal_Sym *VAR_31;


   if (VAR_23 == ((void*)0))
     {
       VAR_23 = (Elf_Internal_Sym *) VAR_19->contents;
       if (VAR_23 == ((void*)0))
  VAR_23 = FUNC_9 (VAR_15, VAR_19,
      VAR_19->sh_info, 0,
      ((void*)0), ((void*)0), ((void*)0));
       if (VAR_23 == ((void*)0))
  goto error_return;
     }

   VAR_31 = VAR_23 + VAR_30;



   if (VAR_29 == 128)
     {
       VAR_25.tsec = VAR_9;
       VAR_27 = FUNC_8 (VAR_25.link_info);
     }
   else
     {
       VAR_27 = VAR_31->st_value;
       if (VAR_31->st_shndx == VAR_7)
         continue;
       else if (VAR_31->st_shndx == VAR_5)
         VAR_25.tsec = VAR_9;
       else if (VAR_31->st_shndx == VAR_6)
         VAR_25.tsec = VAR_10;
       else
         VAR_25.tsec = FUNC_11 (VAR_15, VAR_31->st_shndx);
     }

   VAR_25.h = ((void*)0);
   VAR_25.other = VAR_31->st_other;
   if (VAR_24)
     VAR_25.first_gotent = &VAR_24[VAR_30];
   else
     {
       VAR_25.first_gotent = &VAR_25.gotent;
       VAR_25.gotent = ((void*)0);
     }
 }
      else
 {
   unsigned long VAR_32;
   struct alpha_elf_link_hash_entry *VAR_33;

   VAR_32 = VAR_30 - VAR_19->sh_info;
   VAR_33 = FUNC_6 (VAR_15)[VAR_32];
   FUNC_0 (VAR_33 != ((void*)0));

   while (VAR_33->root.root.type == VAR_11
   || VAR_33->root.root.type == VAR_14)
     VAR_33 = (struct alpha_elf_link_hash_entry *)VAR_33->root.root.u.i.link;


   if (VAR_33->root.root.type == VAR_12)
     continue;



   if (VAR_33->root.root.type == VAR_13)
     {
       VAR_25.tsec = VAR_9;
       VAR_27 = 0;
     }
   else if (!VAR_33->root.def_regular)
     {


       if (VAR_29 != 129)
  continue;
       VAR_25.tsec = VAR_9;
       VAR_27 = 0;
     }
   else
     {
       VAR_25.tsec = VAR_33->root.root.u.def.section;
       VAR_27 = VAR_33->root.root.u.def.value;
     }

   VAR_25.h = VAR_33;
   VAR_25.other = VAR_33->root.other;
   VAR_25.first_gotent = &VAR_33->got_entries;
 }


      for (VAR_28 = *VAR_25.first_gotent; VAR_28 ; VAR_28 = VAR_28->next)
 if (VAR_28->gotobj == VAR_25.gotobj
     && VAR_28->reloc_type == VAR_29
     && VAR_28->addend == VAR_21->r_addend)
   break;
      VAR_25.gotent = VAR_28;

      VAR_27 += VAR_25.tsec->output_section->vma + VAR_25.tsec->output_offset;
      VAR_27 += VAR_21->r_addend;

      switch (VAR_29)
 {
 case 130:
   FUNC_0(VAR_25.gotent != ((void*)0));




   if (VAR_21+1 < VAR_22
       && FUNC_2 (VAR_21[1].r_info) == VAR_1)
     {
       if (!FUNC_14 (&VAR_25, VAR_27, VAR_21))
  goto error_return;
     }
   else
     {
       if (!FUNC_12 (&VAR_25, VAR_27, VAR_21, VAR_29))
  goto error_return;
     }
   break;

 case 134:
 case 133:
   FUNC_0(VAR_25.gotent != ((void*)0));
   if (!FUNC_12 (&VAR_25, VAR_27, VAR_21, VAR_29))
     goto error_return;
   break;

 case 129:
 case 128:
   FUNC_0(VAR_25.gotent != ((void*)0));
   if (!FUNC_13 (&VAR_25, VAR_27, VAR_21,
            VAR_29 == 129))
     goto error_return;
   break;
 }
    }

  if (VAR_23 != ((void*)0)
      && VAR_19->contents != (unsigned char *) VAR_23)
    {
      if (!VAR_17->keep_memory)
 FUNC_21 (VAR_23);
      else
 {

   VAR_19->contents = (unsigned char *) VAR_23;
 }
    }

  if (VAR_25.contents != ((void*)0)
      && FUNC_19 (VAR_16)->this_hdr.contents != VAR_25.contents)
    {
      if (!VAR_25.changed_contents && !VAR_17->keep_memory)
 FUNC_21 (VAR_25.contents);
      else
 {

   FUNC_19 (VAR_16)->this_hdr.contents = VAR_25.contents;
 }
    }

  if (FUNC_19 (VAR_16)->relocs != VAR_20)
    {
      if (!VAR_25.changed_relocs)
 FUNC_21 (VAR_20);
      else
 FUNC_19 (VAR_16)->relocs = VAR_20;
    }

  *VAR_18 = VAR_25.changed_contents || VAR_25.changed_relocs;

  return VAR_8;

 error_return:
  if (VAR_23 != ((void*)0)
      && VAR_19->contents != (unsigned char *) VAR_23)
    FUNC_21 (VAR_23);
  if (VAR_25.contents != ((void*)0)
      && FUNC_19 (VAR_16)->this_hdr.contents != VAR_25.contents)
    FUNC_21 (VAR_25.contents);
  if (VAR_20 != ((void*)0)
      && FUNC_19 (VAR_16)->relocs != VAR_20)
    FUNC_21 (VAR_20);
  return VAR_0;
}
