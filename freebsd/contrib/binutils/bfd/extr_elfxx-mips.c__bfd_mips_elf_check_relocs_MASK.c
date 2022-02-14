
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_75__ TYPE_9__ ;
typedef struct TYPE_74__ TYPE_8__ ;
typedef struct TYPE_73__ TYPE_7__ ;
typedef struct TYPE_72__ TYPE_6__ ;
typedef struct TYPE_71__ TYPE_5__ ;
typedef struct TYPE_70__ TYPE_4__ ;
typedef struct TYPE_69__ TYPE_3__ ;
typedef struct TYPE_68__ TYPE_37__ ;
typedef struct TYPE_67__ TYPE_35__ ;
typedef struct TYPE_66__ TYPE_32__ ;
typedef struct TYPE_65__ TYPE_2__ ;
typedef struct TYPE_64__ TYPE_1__ ;
typedef struct TYPE_63__ TYPE_17__ ;
typedef struct TYPE_62__ TYPE_13__ ;
typedef struct TYPE_61__ TYPE_12__ ;
typedef struct TYPE_60__ TYPE_11__ ;
typedef struct TYPE_59__ TYPE_10__ ;


struct mips_got_info {int dummy; } ;
struct mips_elf_link_hash_table {int compact_rel_size; scalar_t__ is_vxworks; void* mips16_stubs_seen; } ;
struct TYPE_72__ {scalar_t__ link; } ;
struct TYPE_73__ {TYPE_6__ i; } ;
struct TYPE_74__ {scalar_t__ type; TYPE_7__ u; } ;
struct TYPE_75__ {int forced_local; int def_regular; TYPE_8__ root; } ;
struct mips_elf_link_hash_entry {unsigned char tls_type; void* need_fn_stub; void* no_fn_stub; void* is_branch_target; void* readonly_reloc; int possibly_dynamic_relocs; TYPE_9__ root; void* is_relocation_target; TYPE_11__* call_stub; TYPE_11__* call_fp_stub; TYPE_11__* fn_stub; } ;
struct TYPE_69__ {scalar_t__ link; } ;
struct TYPE_70__ {TYPE_3__ i; } ;
struct TYPE_71__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {int needs_plt; int type; TYPE_5__ root; } ;
struct elf_backend_data {TYPE_2__* s; } ;
struct bfd_link_info {int flags; int shared; int symbolic; int keep_memory; scalar_t__ relocatable; } ;
typedef unsigned long bfd_size_type ;
typedef void* bfd_boolean ;
struct TYPE_59__ {TYPE_11__* sections; } ;
typedef TYPE_10__ bfd ;
struct TYPE_60__ {int flags; scalar_t__ reloc_count; struct TYPE_60__* next; } ;
typedef TYPE_11__ asection ;
struct TYPE_68__ {TYPE_10__* dynobj; } ;
struct TYPE_67__ {TYPE_13__* relocs; } ;
struct TYPE_61__ {size_t sh_info; } ;
struct TYPE_66__ {TYPE_11__** local_call_stubs; TYPE_11__** local_stubs; TYPE_12__ symtab_hdr; } ;
struct TYPE_65__ {int int_rels_per_ext_rel; } ;
struct TYPE_64__ {struct mips_got_info* got_info; } ;
struct TYPE_63__ {TYPE_1__ u; } ;
struct TYPE_62__ {scalar_t__ r_offset; int r_addend; int r_info; } ;
typedef TYPE_12__ Elf_Internal_Shdr ;
typedef TYPE_13__ Elf_Internal_Rela ;
typedef int Elf32_External_crinfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_3 (TYPE_10__*,int ) ;
 unsigned int FUNC_4 (TYPE_10__*,int ) ;
 void* VAR_2 ;
 scalar_t__ FUNC_5 (char const*) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_11__*) ;
 size_t FUNC_7 (TYPE_12__*) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (TYPE_10__*) ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_9 (char*) ;
 TYPE_13__* FUNC_10 (TYPE_10__*,TYPE_11__*,int *,int *,int ) ;
 int FUNC_11 (int ,TYPE_10__*,unsigned long) ;
 int FUNC_12 (TYPE_10__*,TYPE_11__*,struct elf_link_hash_entry*,scalar_t__) ;
 int FUNC_13 (TYPE_10__*,TYPE_11__*,struct elf_link_hash_entry*,scalar_t__) ;
 int VAR_13 ;
 char* FUNC_14 (TYPE_10__*,TYPE_11__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_15 (int ) ;
 TYPE_11__** FUNC_16 (TYPE_10__*,unsigned long) ;
 scalar_t__ FUNC_17 (TYPE_10__*) ;
 TYPE_37__* FUNC_18 (struct bfd_link_info*) ;
 TYPE_35__* FUNC_19 (TYPE_11__*) ;
 struct elf_link_hash_entry** FUNC_20 (TYPE_10__*) ;
 TYPE_32__* FUNC_21 (TYPE_10__*) ;
 int FUNC_22 (TYPE_13__*) ;
 struct elf_backend_data* FUNC_23 (TYPE_10__*) ;
 scalar_t__ FUNC_24 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ FUNC_25 (TYPE_10__*,TYPE_11__*) ;
 int FUNC_26 (TYPE_10__*,struct bfd_link_info*,int) ;
 int FUNC_27 (TYPE_10__*,struct bfd_link_info*,void*) ;
 struct mips_got_info* FUNC_28 (TYPE_10__*,TYPE_11__**) ;
 TYPE_11__* FUNC_29 (TYPE_10__*,void*) ;
 struct mips_elf_link_hash_table* FUNC_30 (struct bfd_link_info*) ;
 int FUNC_31 (struct elf_link_hash_entry*,TYPE_10__*,struct bfd_link_info*,struct mips_got_info*,unsigned char) ;
 int FUNC_32 (TYPE_10__*,unsigned long,int ,struct mips_got_info*,unsigned char) ;
 TYPE_11__* FUNC_33 (struct bfd_link_info*,void*) ;
 TYPE_17__* FUNC_34 (TYPE_11__*) ;
 int FUNC_35 (int ,TYPE_10__*,...) ;
 int FUNC_36 (int ,TYPE_10__*,unsigned long) ;
 int FUNC_37 (int ,TYPE_10__*,unsigned long) ;

bfd_boolean
FUNC_38 (bfd *VAR_16, struct bfd_link_info *VAR_17,
       asection *VAR_18, const Elf_Internal_Rela *VAR_19)
{
  const char *VAR_20;
  bfd *VAR_21;
  Elf_Internal_Shdr *VAR_22;
  struct elf_link_hash_entry **VAR_23;
  struct mips_got_info *VAR_24;
  size_t VAR_25;
  const Elf_Internal_Rela *VAR_26;
  const Elf_Internal_Rela *VAR_27;
  asection *VAR_28;
  asection *VAR_29;
  const struct elf_backend_data *VAR_30;
  struct mips_elf_link_hash_table *VAR_31;

  if (VAR_17->relocatable)
    return VAR_12;

  VAR_31 = FUNC_30 (VAR_17);
  VAR_21 = FUNC_18 (VAR_17)->dynobj;
  VAR_22 = &FUNC_21 (VAR_16)->symtab_hdr;
  VAR_23 = FUNC_20 (VAR_16);
  VAR_25 = (FUNC_17 (VAR_16)) ? 0 : VAR_22->sh_info;



  VAR_20 = FUNC_14 (VAR_16, VAR_18);
  if (FUNC_5 (VAR_20))
    {
      unsigned long VAR_32;




      VAR_32 = FUNC_3 (VAR_16, VAR_19->r_info);

      if (VAR_32 < VAR_25
   || VAR_23[VAR_32 - VAR_25] == ((void*)0))
 {
   asection *VAR_33;




   for (VAR_33 = VAR_16->sections; VAR_33 != ((void*)0); VAR_33 = VAR_33->next)
     {
       Elf_Internal_Rela *VAR_34;
       const Elf_Internal_Rela *VAR_35, *VAR_36;


       if ((VAR_33->flags & VAR_10) == 0
    || VAR_33->reloc_count == 0
    || FUNC_25 (VAR_16, VAR_33))
  continue;

       VAR_34
  = FUNC_10 (VAR_16, VAR_33, ((void*)0), ((void*)0),
          VAR_17->keep_memory);
       if (VAR_34 == ((void*)0))
  return VAR_2;

       VAR_36 = VAR_34 + VAR_33->reloc_count;
       for (VAR_35 = VAR_34; VAR_35 < VAR_36; VAR_35++)
  if (FUNC_3 (VAR_16, VAR_35->r_info) == VAR_32
      && FUNC_4 (VAR_16, VAR_35->r_info) != VAR_6)
    break;

       if (FUNC_19 (VAR_33)->relocs != VAR_34)
  FUNC_22 (VAR_34);

       if (VAR_35 < VAR_36)
  break;
     }

   if (VAR_33 == ((void*)0))
     {





       VAR_18->flags |= VAR_8;
       return VAR_12;
     }



   if (FUNC_21 (VAR_16)->local_stubs == ((void*)0))
     {
       unsigned long VAR_37;
       asection **VAR_38;
       bfd_size_type VAR_39;

       if (FUNC_17 (VAR_16))
  VAR_37 = FUNC_7 (VAR_22);
       else
  VAR_37 = VAR_22->sh_info;
       VAR_39 = VAR_37 * sizeof (asection *);
       VAR_38 = FUNC_16 (VAR_16, VAR_39);
       if (VAR_38 == ((void*)0))
  return VAR_2;
       FUNC_21 (VAR_16)->local_stubs = VAR_38;
     }

   VAR_18->flags |= VAR_9;
   FUNC_21 (VAR_16)->local_stubs[VAR_32] = VAR_18;





 }
      else
 {
   struct mips_elf_link_hash_entry *VAR_40;

   VAR_40 = ((struct mips_elf_link_hash_entry *)
        VAR_23[VAR_32 - VAR_25]);

   while (VAR_40->root.root.type == VAR_14
   || VAR_40->root.root.type == VAR_15)
     VAR_40 = (struct mips_elf_link_hash_entry *) VAR_40->root.root.u.i.link;
   if (VAR_40->fn_stub != ((void*)0))
     {
       VAR_18->flags |= VAR_8;
       return VAR_12;
     }

   VAR_18->flags |= VAR_9;
   VAR_40->fn_stub = VAR_18;
   FUNC_30 (VAR_17)->mips16_stubs_seen = VAR_12;
 }
    }
  else if (FUNC_2 (VAR_20) || FUNC_1 (VAR_20))
    {
      unsigned long VAR_41;
      struct mips_elf_link_hash_entry *VAR_42;
      asection **VAR_43;




      VAR_41 = FUNC_3 (VAR_16, VAR_19->r_info);

      if (VAR_41 < VAR_25
   || VAR_23[VAR_41 - VAR_25] == ((void*)0))
 {
   asection *VAR_44;




   for (VAR_44 = VAR_16->sections; VAR_44 != ((void*)0); VAR_44 = VAR_44->next)
     {
       Elf_Internal_Rela *VAR_45;
       const Elf_Internal_Rela *VAR_46, *VAR_47;


       if ((VAR_44->flags & VAR_10) == 0
    || VAR_44->reloc_count == 0
    || FUNC_25 (VAR_16, VAR_44))
  continue;

       VAR_45
  = FUNC_10 (VAR_16, VAR_44, ((void*)0), ((void*)0),
          VAR_17->keep_memory);
       if (VAR_45 == ((void*)0))
  return VAR_2;

       VAR_47 = VAR_45 + VAR_44->reloc_count;
       for (VAR_46 = VAR_45; VAR_46 < VAR_47; VAR_46++)
  if (FUNC_3 (VAR_16, VAR_46->r_info) == VAR_41
      && FUNC_4 (VAR_16, VAR_46->r_info) == VAR_6)
      break;

       if (FUNC_19 (VAR_44)->relocs != VAR_45)
  FUNC_22 (VAR_45);

       if (VAR_46 < VAR_47)
  break;
     }

   if (VAR_44 == ((void*)0))
     {





       VAR_18->flags |= VAR_8;
       return VAR_12;
     }



   if (FUNC_21 (VAR_16)->local_call_stubs == ((void*)0))
     {
       unsigned long VAR_48;
       asection **VAR_49;
       bfd_size_type VAR_50;

       if (FUNC_17 (VAR_16))
  VAR_48 = FUNC_7 (VAR_22);
       else
  VAR_48 = VAR_22->sh_info;
       VAR_50 = VAR_48 * sizeof (asection *);
       VAR_49 = FUNC_16 (VAR_16, VAR_50);
       if (VAR_49 == ((void*)0))
  return VAR_2;
       FUNC_21 (VAR_16)->local_call_stubs = VAR_49;
     }

   VAR_18->flags |= VAR_9;
   FUNC_21 (VAR_16)->local_call_stubs[VAR_41] = VAR_18;





 }
      else
 {
   VAR_42 = ((struct mips_elf_link_hash_entry *)
        VAR_23[VAR_41 - VAR_25]);



   if (FUNC_1 (VAR_20))
     VAR_43 = &VAR_42->call_fp_stub;
   else
     VAR_43 = &VAR_42->call_stub;






   if (*VAR_43 != ((void*)0))
     {
       VAR_18->flags |= VAR_8;
       return VAR_12;
     }

   VAR_18->flags |= VAR_9;
   *VAR_43 = VAR_18;
   FUNC_30 (VAR_17)->mips16_stubs_seen = VAR_12;
 }
    }

  if (VAR_21 == ((void*)0))
    {
      VAR_28 = ((void*)0);
      VAR_24 = ((void*)0);
    }
  else
    {
      VAR_28 = FUNC_29 (VAR_21, VAR_2);
      if (VAR_28 == ((void*)0))
 VAR_24 = ((void*)0);
      else
 {
   FUNC_0 (FUNC_34 (VAR_28) != ((void*)0));
   VAR_24 = FUNC_34 (VAR_28)->u.got_info;
   FUNC_0 (VAR_24 != ((void*)0));
 }
    }

  VAR_29 = ((void*)0);
  VAR_30 = FUNC_23 (VAR_16);
  VAR_27 = VAR_19 + VAR_18->reloc_count * VAR_30->s->int_rels_per_ext_rel;
  for (VAR_26 = VAR_19; VAR_26 < VAR_27; ++VAR_26)
    {
      unsigned long VAR_51;
      unsigned int VAR_52;
      struct elf_link_hash_entry *VAR_53;

      VAR_51 = FUNC_3 (VAR_16, VAR_26->r_info);
      VAR_52 = FUNC_4 (VAR_16, VAR_26->r_info);

      if (VAR_51 < VAR_25)
 VAR_53 = ((void*)0);
      else if (VAR_51 >= VAR_25 + FUNC_7 (VAR_22))
 {
   FUNC_11)
     (FUNC_9("%B: Malformed reloc detected for section %s"),
      VAR_16, VAR_20);
   FUNC_15 (VAR_13);
   return VAR_2;
 }
      else
 {
   VAR_53 = VAR_23[VAR_51 - VAR_25];


   if (VAR_53 != ((void*)0))
     {
       while (VAR_53->root.type == VAR_14)
  VAR_53 = (struct elf_link_hash_entry *) VAR_53->root.u.i.link;
     }
 }


      if (VAR_21 == ((void*)0) || VAR_28 == ((void*)0))
 {
   switch (VAR_52)
     {
     case 142:
     case 147:
     case 146:
     case 145:
     case 140:
     case 139:
     case 137:
     case 138:
     case 141:
     case 129:
     case 130:
     case 128:
       if (VAR_21 == ((void*)0))
  FUNC_18 (VAR_17)->dynobj = VAR_21 = VAR_16;
       if (! FUNC_27 (VAR_21, VAR_17, VAR_2))
  return VAR_2;
       VAR_24 = FUNC_28 (VAR_21, &VAR_28);
       if (VAR_31->is_vxworks && !VAR_17->shared)
  {
    FUNC_11)
      (FUNC_9("%B: GOT reloc at 0x%lx not expected in executables"),
       VAR_16, (unsigned long) VAR_26->r_offset);
    FUNC_15 (VAR_13);
    return VAR_2;
  }
       break;

     case 149:
     case 131:
     case 148:



       if (VAR_21 == ((void*)0)
    && (VAR_17->shared || (VAR_53 != ((void*)0) && !VAR_31->is_vxworks))
    && (VAR_18->flags & VAR_7) != 0)
  FUNC_18 (VAR_17)->dynobj = VAR_21 = VAR_16;
       break;

     default:
       break;
     }
 }

      if (VAR_53)
 {
   ((struct mips_elf_link_hash_entry *) VAR_53)->is_relocation_target = VAR_12;




   if (FUNC_24 (VAR_17, VAR_53))
     {
       if (VAR_29 == ((void*)0))
  {
    VAR_29 = FUNC_33 (VAR_17, VAR_12);
    if (VAR_29 == ((void*)0))
      return VAR_2;
  }
       FUNC_26 (VAR_21, VAR_17, 1);
       if (FUNC_6 (VAR_18))


  VAR_17->flags |= VAR_1;
     }
 }
      else if (VAR_52 == 145
        || VAR_52 == 139
        || VAR_52 == 141
        || (VAR_52 == 142 && VAR_31->is_vxworks))
 {
   if (! FUNC_32 (VAR_16, VAR_51,
        VAR_26->r_addend, VAR_24, 0))
     return VAR_2;
 }

      switch (VAR_52)
 {
 case 147:
   if (VAR_53 == ((void*)0))
     {
       FUNC_11)
  (FUNC_9("%B: CALL16 reloc at 0x%lx not against global symbol"),
   VAR_16, (unsigned long) VAR_26->r_offset);
       FUNC_15 (VAR_13);
       return VAR_2;
     }


 case 146:
 case 145:
   if (VAR_53 != ((void*)0))
     {



       if (!VAR_31->is_vxworks
    && !FUNC_31 (VAR_53, VAR_16, VAR_17, VAR_24, 0))
  return VAR_2;




       VAR_53->needs_plt = 1;
       VAR_53->type = VAR_11;
     }
   break;

 case 137:


   if (VAR_53 == ((void*)0))
     break;
   else
     {
       struct mips_elf_link_hash_entry *VAR_54 =
  (struct mips_elf_link_hash_entry *) VAR_53;

       while (VAR_54->root.root.type == VAR_14
       || VAR_54->root.root.type == VAR_15)
  VAR_54 = (struct mips_elf_link_hash_entry *)
    VAR_54->root.root.u.i.link;

       if (VAR_54->root.def_regular
    && ! (VAR_17->shared && ! VAR_17->symbolic
   && ! VAR_54->root.forced_local))
  break;
     }


 case 142:
 case 140:
 case 139:
 case 141:
   if (VAR_53 && ! FUNC_31 (VAR_53, VAR_16, VAR_17, VAR_24, 0))
     return VAR_2;
   break;

 case 129:
   if (VAR_17->shared)
     VAR_17->flags |= VAR_0;


 case 128:
   if (VAR_52 == 128)
     {
       VAR_51 = 0;
       VAR_53 = ((void*)0);
     }


 case 130:


   {
     unsigned char VAR_55 = (VAR_52 == 130
      ? VAR_3
      : VAR_52 == 128
      ? VAR_5
      : VAR_4);
     if (VAR_53 != ((void*)0))
       {
  struct mips_elf_link_hash_entry *VAR_56 =
    (struct mips_elf_link_hash_entry *) VAR_53;
  VAR_56->tls_type |= VAR_55;

  if (VAR_53 && ! FUNC_31 (VAR_53, VAR_16, VAR_17, VAR_24, VAR_55))
    return VAR_2;
       }
     else
       {
  FUNC_0 (VAR_55 == VAR_5 || VAR_51 != 0);

  if (! FUNC_32 (VAR_16, VAR_51,
       VAR_26->r_addend, VAR_24, VAR_55))
    return VAR_2;
       }
   }
   break;

 case 149:
 case 131:
 case 148:



   if ((VAR_17->shared || (VAR_53 != ((void*)0) && !VAR_31->is_vxworks))
       && (VAR_18->flags & VAR_7) != 0)
     {
       if (VAR_29 == ((void*)0))
  {
    VAR_29 = FUNC_33 (VAR_17, VAR_12);
    if (VAR_29 == ((void*)0))
      return VAR_2;
  }
       if (VAR_17->shared)
  {



    FUNC_26 (VAR_21, VAR_17, 1);
    if (FUNC_6 (VAR_18))


      VAR_17->flags |= VAR_1;
  }
       else
  {
    struct mips_elf_link_hash_entry *VAR_57;



    VAR_57 = (struct mips_elf_link_hash_entry *) VAR_53;
    ++VAR_57->possibly_dynamic_relocs;
    if (FUNC_6 (VAR_18))


      VAR_57->readonly_reloc = VAR_12;
  }







       if (VAR_53 != ((void*)0) && !VAR_31->is_vxworks)
  {
    if (VAR_21 == ((void*)0))
      FUNC_18 (VAR_17)->dynobj = VAR_21 = VAR_16;
    if (! FUNC_27 (VAR_21, VAR_17, VAR_12))
      return VAR_2;
    VAR_24 = FUNC_28 (VAR_21, &VAR_28);
    if (! FUNC_31 (VAR_53, VAR_16, VAR_17, VAR_24, 0))
      return VAR_2;
  }
     }

   if (FUNC_8 (VAR_16))
     FUNC_30 (VAR_17)->compact_rel_size +=
       sizeof (Elf32_External_crinfo);
   break;

 case 132:
   if (VAR_53)
     ((struct mips_elf_link_hash_entry *) VAR_53)->is_branch_target = VAR_12;
   break;

 case 150:
   if (VAR_53)
     ((struct mips_elf_link_hash_entry *) VAR_53)->is_branch_target = VAR_12;


 case 136:
 case 133:
 case 135:
   if (FUNC_8 (VAR_16))
     FUNC_30 (VAR_17)->compact_rel_size +=
       sizeof (Elf32_External_crinfo);
   break;



 case 143:
   if (!FUNC_13 (VAR_16, VAR_18, VAR_53, VAR_26->r_offset))
     return VAR_2;
   break;



 case 144:
   if (!FUNC_12 (VAR_16, VAR_18, VAR_53, VAR_26->r_offset))
     return VAR_2;
   break;

 default:
   break;
 }





      if (!VAR_31->is_vxworks && VAR_53 != ((void*)0))
 switch (VAR_52)
   {
   default:
     ((struct mips_elf_link_hash_entry *) VAR_53)->no_fn_stub = VAR_12;
     break;
   case 147:
   case 146:
   case 145:
   case 134:
     break;
   }




      if (VAR_53 != ((void*)0)
   && VAR_52 != VAR_6
   && !FUNC_25 (VAR_16, VAR_18))
 {
   struct mips_elf_link_hash_entry *VAR_58;

   VAR_58 = (struct mips_elf_link_hash_entry *) VAR_53;
   VAR_58->need_fn_stub = VAR_12;
 }
    }

  return VAR_12;
}
