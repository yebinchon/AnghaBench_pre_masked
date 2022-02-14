
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct mips_got_info {unsigned int global_gotno; unsigned int local_gotno; unsigned int assigned_gotno; unsigned int tls_gotno; int got_entries; struct mips_got_info* next; } ;
struct mips_elf_set_global_got_offset_arg {scalar_t__ needed; struct bfd_link_info* info; scalar_t__ needed_relocs; struct mips_got_info* g; int value; } ;
struct mips_elf_link_hash_table {scalar_t__ function_stub_size; scalar_t__ compact_rel_size; TYPE_2__* splt; scalar_t__ is_vxworks; TYPE_2__* sgotplt; int use_rld_obj_head; } ;
struct mips_elf_count_tls_arg {scalar_t__ needed; struct bfd_link_info* info; scalar_t__ needed_relocs; struct mips_got_info* g; int value; } ;
struct bfd_link_info {int flags; scalar_t__ executable; scalar_t__ shared; scalar_t__ combreloc; } ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_20__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_21__ {scalar_t__ size; int flags; int * contents; scalar_t__ reloc_count; struct TYPE_21__* output_section; struct TYPE_21__* next; } ;
typedef TYPE_2__ asection ;
struct TYPE_22__ {scalar_t__ dynamic_sections_created; TYPE_1__* dynobj; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct bfd_link_info*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 char const* FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (struct bfd_link_info*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 char* FUNC_9 (TYPE_1__*) ;
 unsigned int FUNC_10 (struct bfd_link_info*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 TYPE_2__* FUNC_12 (TYPE_1__*,char const*) ;
 char* FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (TYPE_1__*,scalar_t__) ;
 TYPE_5__* FUNC_16 (struct bfd_link_info*) ;
 int FUNC_17 (TYPE_5__*,int ,struct mips_elf_set_global_got_offset_arg*) ;
 int FUNC_18 (int ,int ,struct mips_elf_set_global_got_offset_arg*) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_19 (TYPE_1__*,struct bfd_link_info*,unsigned int) ;
 int VAR_33 ;
 int VAR_34 ;
 struct mips_got_info* FUNC_20 (TYPE_1__*,int *) ;
 struct mips_elf_link_hash_table* FUNC_21 (struct bfd_link_info*) ;
 scalar_t__ FUNC_22 (struct bfd_link_info*,scalar_t__) ;
 int FUNC_23 (struct mips_got_info*) ;
 int VAR_35 ;
 scalar_t__ FUNC_24 (char const*,char*) ;
 scalar_t__ FUNC_25 (scalar_t__) ;

bfd_boolean
FUNC_26 (bfd *VAR_36,
         struct bfd_link_info *VAR_37)
{
  bfd *VAR_38;
  asection *VAR_39, *VAR_40;
  bfd_boolean VAR_41;
  struct mips_elf_link_hash_table *VAR_42;

  VAR_42 = FUNC_21 (VAR_37);
  VAR_38 = FUNC_16 (VAR_37)->dynobj;
  FUNC_0 (VAR_38 != ((void*)0));

  if (FUNC_16 (VAR_37)->dynamic_sections_created)
    {

      if (VAR_37->executable)
 {
   VAR_39 = FUNC_12 (VAR_38, ".interp");
   FUNC_0 (VAR_39 != ((void*)0));
   VAR_39->size
     = FUNC_25 (FUNC_2 (VAR_36)) + 1;
   VAR_39->contents
     = (bfd_byte *) FUNC_2 (VAR_36);
 }
    }




  VAR_41 = VAR_23;
  VAR_40 = ((void*)0);
  for (VAR_39 = VAR_38->sections; VAR_39 != ((void*)0); VAR_39 = VAR_39->next)
    {
      const char *VAR_43;



      VAR_43 = FUNC_13 (VAR_38, VAR_39);

      if ((VAR_39->flags & VAR_27) == 0)
 continue;

      if (FUNC_1 (VAR_43, ".rel"))
 {
   if (VAR_39->size != 0)
     {
       const char *VAR_44;
       asection *VAR_45;







       VAR_44 = FUNC_13 (VAR_36,
           VAR_39->output_section);
       VAR_45 = FUNC_12 (VAR_36, VAR_44 + 4);
       if ((VAR_45 != ((void*)0)
     && (VAR_45->flags & VAR_28) != 0
     && (VAR_45->flags & VAR_24) != 0)
    || FUNC_24 (VAR_44, FUNC_7 (VAR_37)) == 0)
  VAR_41 = VAR_29;



       if (FUNC_24 (VAR_43, FUNC_7 (VAR_37)) != 0)
  VAR_39->reloc_count = 0;







       VAR_37->combreloc = 0;
     }
 }
      else if (VAR_42->is_vxworks && FUNC_24 (VAR_43, ".got") == 0)
 {

   if (VAR_37->shared)
     {

       struct mips_got_info *VAR_46;
       unsigned int VAR_47;

       VAR_46 = FUNC_20 (VAR_38, ((void*)0));
       VAR_47 = (VAR_46->global_gotno
         + VAR_46->local_gotno
         - FUNC_10 (VAR_37));
       FUNC_19 (VAR_38, VAR_37, VAR_47);
     }
 }
      else if (!VAR_42->is_vxworks && FUNC_1 (VAR_43, ".got"))
 {




   struct mips_got_info *VAR_48 = FUNC_20 (VAR_38, ((void*)0));
   struct mips_got_info *VAR_49 = VAR_48;
   struct mips_elf_set_global_got_offset_arg VAR_50;
   unsigned int VAR_51 = 0;

   if (VAR_48->next)
     {
       VAR_50.value = FUNC_5 (VAR_36);
       VAR_50.info = VAR_37;




       FUNC_23 (VAR_48);
       for (VAR_49 = VAR_48->next; VAR_49 && VAR_49->next != VAR_48; VAR_49 = VAR_49->next)
  {
    unsigned int VAR_52;

    FUNC_23 (VAR_49);


    VAR_52 = VAR_49->assigned_gotno;
    VAR_49->assigned_gotno = VAR_49->local_gotno;
    VAR_50.g = VAR_49;
    VAR_50.needed_relocs = 0;
    FUNC_18 (VAR_49->got_entries,
     VAR_35,
     &VAR_50);
    VAR_51 += VAR_50.needed_relocs;
    FUNC_0 (VAR_49->assigned_gotno - VAR_49->local_gotno
         <= VAR_49->global_gotno);

    VAR_49->assigned_gotno = VAR_52;
    if (VAR_37->shared)
      {
        VAR_51 += VAR_49->local_gotno - VAR_49->assigned_gotno;
        FUNC_0 (VAR_49->assigned_gotno == VAR_49->next->local_gotno
      + VAR_49->next->global_gotno
      + VAR_49->next->tls_gotno
      + FUNC_10 (VAR_37));
      }
  }
     }
   else
     {
       struct mips_elf_count_tls_arg VAR_53;
       VAR_53.info = VAR_37;
       VAR_53.needed = 0;

       FUNC_18 (VAR_48->got_entries, VAR_34,
        &VAR_53);
       FUNC_17 (FUNC_16 (VAR_37),
          VAR_33,
          &VAR_53);

       VAR_51 += VAR_53.needed;
     }

   if (VAR_51)
     FUNC_19 (VAR_38, VAR_37,
         VAR_51);
 }
      else if (FUNC_24 (VAR_43, FUNC_9 (VAR_36)) == 0)
 {


   VAR_39->size += VAR_42->function_stub_size;
 }
      else if (! VAR_37->shared
        && ! FUNC_21 (VAR_37)->use_rld_obj_head
        && FUNC_1 (VAR_43, ".rld_map"))
 {


   VAR_39->size += FUNC_8 (VAR_36);
 }
      else if (FUNC_11 (VAR_36)
        && FUNC_1 (VAR_43, ".compact_rel"))
 VAR_39->size += FUNC_21 (VAR_37)->compact_rel_size;
      else if (! FUNC_1 (VAR_43, ".init")
        && VAR_39 != VAR_42->sgotplt
        && VAR_39 != VAR_42->splt)
 {

   continue;
 }

      if (VAR_39->size == 0)
 {
   VAR_39->flags |= VAR_25;
   continue;
 }

      if ((VAR_39->flags & VAR_26) == 0)
 continue;



      if (FUNC_24 (VAR_43, FUNC_7 (VAR_37)) == 0)
 {
   VAR_40 = VAR_39;
   continue;
 }


      VAR_39->contents = FUNC_15 (VAR_38, VAR_39->size);
      if (VAR_39->contents == ((void*)0))
 {
   FUNC_14 (VAR_30);
   return VAR_23;
 }
    }


  if (VAR_40 != ((void*)0))
    {
      VAR_40->contents = FUNC_15 (VAR_38, VAR_40->size);
      if (VAR_40->contents == ((void*)0))
 {
   FUNC_14 (VAR_30);
   return VAR_23;
 }
    }

  if (FUNC_16 (VAR_37)->dynamic_sections_created)
    {
      if (!VAR_37->shared
   && !FUNC_4 (VAR_37, VAR_9, 0))
 return VAR_23;



      if (VAR_37->executable
   && !FUNC_11 (VAR_36)
   && !FUNC_4 (VAR_37, VAR_1, 0))
 return VAR_23;

      if (VAR_41 && (FUNC_11 (VAR_36) || VAR_42->is_vxworks))
 VAR_37->flags |= VAR_0;

      if ((VAR_37->flags & VAR_0) != 0)
 {
   if (! FUNC_4 (VAR_37, VAR_22, 0))
     return VAR_23;





   VAR_37->flags &= ~VAR_0;
 }

      if (! FUNC_4 (VAR_37, VAR_13, 0))
 return VAR_23;

      if (VAR_42->is_vxworks)
 {


   if (FUNC_22 (VAR_37, VAR_23))
     {
       if (! FUNC_4 (VAR_37, VAR_17, 0))
  return VAR_23;

       if (! FUNC_4 (VAR_37, VAR_19, 0))
  return VAR_23;

       if (! FUNC_4 (VAR_37, VAR_18, 0))
  return VAR_23;
     }
   if (VAR_42->splt->size > 0)
     {
       if (! FUNC_4 (VAR_37, VAR_14, 0))
  return VAR_23;

       if (! FUNC_4 (VAR_37, VAR_2, 0))
  return VAR_23;

       if (! FUNC_4 (VAR_37, VAR_15, 0))
  return VAR_23;
     }
 }
      else
 {
   if (FUNC_22 (VAR_37, VAR_23))
     {
       if (! FUNC_4 (VAR_37, VAR_16, 0))
  return VAR_23;

       if (! FUNC_4 (VAR_37, VAR_21, 0))
  return VAR_23;

       if (! FUNC_4 (VAR_37, VAR_20, 0))
  return VAR_23;
     }

   if (! FUNC_4 (VAR_37, VAR_10, 0))
     return VAR_23;

   if (! FUNC_4 (VAR_37, VAR_4, 0))
     return VAR_23;

   if (! FUNC_4 (VAR_37, VAR_3, 0))
     return VAR_23;

   if (! FUNC_4 (VAR_37, VAR_7, 0))
     return VAR_23;

   if (! FUNC_4 (VAR_37, VAR_11, 0))
     return VAR_23;

   if (! FUNC_4 (VAR_37, VAR_12, 0))
     return VAR_23;

   if (! FUNC_4 (VAR_37, VAR_5, 0))
     return VAR_23;

   if (FUNC_3 (VAR_38) == VAR_31
       && ! FUNC_4 (VAR_37, VAR_6, 0))
     return VAR_23;

   if (FUNC_3 (VAR_38) == VAR_32
       && (FUNC_12
    (VAR_38, FUNC_6 (VAR_38)))
       && !FUNC_4 (VAR_37, VAR_8, 0))
     return VAR_23;
 }
    }

  return VAR_29;
}
