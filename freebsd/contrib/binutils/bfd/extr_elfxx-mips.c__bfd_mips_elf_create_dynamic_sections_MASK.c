
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_elf_link_hash_table {int plt_header_size; int plt_entry_size; int srelplt2; int * splt; int * srelplt; int * srelbss; int * sdynbss; scalar_t__ is_vxworks; int use_rld_obj_head; } ;
struct elf_link_hash_entry {int def_regular; void* type; scalar_t__ non_elf; } ;
struct bfd_link_info {scalar_t__ shared; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int collect; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int *) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *,struct bfd_link_info*) ;
 int FUNC_7 (struct bfd_link_info*,int *,char const*,int ,int *,int ,int *,int ,int ,struct bfd_link_hash_entry**) ;
 int FUNC_8 () ;
 int * VAR_12 ;
 int FUNC_9 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int * FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int *,int *,int) ;
 int * VAR_13 ;
 int FUNC_14 (int *,struct bfd_link_info*,int *) ;
 TYPE_1__* FUNC_15 (int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_16 (int *,struct bfd_link_info*) ;
 int FUNC_17 (int *,struct bfd_link_info*,int ) ;
 char** VAR_16 ;
 struct mips_elf_link_hash_table* FUNC_18 (struct bfd_link_info*) ;
 int FUNC_19 (struct bfd_link_info*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

bfd_boolean
FUNC_20 (bfd *VAR_21, struct bfd_link_info *VAR_22)
{
  struct elf_link_hash_entry *VAR_23;
  struct bfd_link_hash_entry *VAR_24;
  flagword VAR_25;
  register asection *VAR_26;
  const char * const *VAR_27;
  struct mips_elf_link_hash_table *VAR_28;

  VAR_28 = FUNC_18 (VAR_22);
  VAR_25 = (VAR_2 | VAR_7 | VAR_4 | VAR_5
    | VAR_6 | VAR_8);



  if (!VAR_28->is_vxworks)
    {
      VAR_26 = FUNC_10 (VAR_21, ".dynamic");
      if (VAR_26 != ((void*)0))
 {
   if (! FUNC_13 (VAR_21, VAR_26, VAR_25))
     return VAR_1;
 }
    }


  if (! FUNC_17 (VAR_21, VAR_22, VAR_1))
    return VAR_1;

  if (! FUNC_19 (VAR_22, VAR_11))
    return VAR_1;


  if (FUNC_10 (VAR_21,
          FUNC_4 (VAR_21)) == ((void*)0))
    {
      VAR_26 = FUNC_11 (VAR_21,
           FUNC_4 (VAR_21),
           VAR_25 | VAR_3);
      if (VAR_26 == ((void*)0)
   || ! FUNC_12 (VAR_21, VAR_26,
       FUNC_3 (VAR_21)))
 return VAR_1;
    }

  if ((FUNC_2 (VAR_21) == VAR_14 || FUNC_2 (VAR_21) == VAR_15)
      && !VAR_22->shared
      && FUNC_10 (VAR_21, ".rld_map") == ((void*)0))
    {
      VAR_26 = FUNC_11 (VAR_21, ".rld_map",
           VAR_25 &~ (flagword) VAR_8);
      if (VAR_26 == ((void*)0)
   || ! FUNC_12 (VAR_21, VAR_26,
       FUNC_3 (VAR_21)))
 return VAR_1;
    }





  if (FUNC_2 (VAR_21) == VAR_14)
    {
      for (VAR_27 = VAR_16; *VAR_27 != ((void*)0); VAR_27++)
 {
   VAR_24 = ((void*)0);
   if (! (FUNC_7
   (VAR_22, VAR_21, *VAR_27, VAR_0, VAR_13, 0,
    ((void*)0), VAR_1, FUNC_15 (VAR_21)->collect, &VAR_24)))
     return VAR_1;

   VAR_23 = (struct elf_link_hash_entry *) VAR_24;
   VAR_23->non_elf = 0;
   VAR_23->def_regular = 1;
   VAR_23->type = VAR_10;

   if (! FUNC_9 (VAR_22, VAR_23))
     return VAR_1;
 }


      if (FUNC_5 (VAR_21))
 {
   if (!FUNC_16 (VAR_21, VAR_22))
     return VAR_1;
 }


      VAR_26 = FUNC_10 (VAR_21, ".hash");
      if (VAR_26 != ((void*)0))
 FUNC_12 (VAR_21, VAR_26, FUNC_3 (VAR_21));
      VAR_26 = FUNC_10 (VAR_21, ".dynsym");
      if (VAR_26 != ((void*)0))
 FUNC_12 (VAR_21, VAR_26, FUNC_3 (VAR_21));
      VAR_26 = FUNC_10 (VAR_21, ".dynstr");
      if (VAR_26 != ((void*)0))
 FUNC_12 (VAR_21, VAR_26, FUNC_3 (VAR_21));
      VAR_26 = FUNC_10 (VAR_21, ".reginfo");
      if (VAR_26 != ((void*)0))
 FUNC_12 (VAR_21, VAR_26, FUNC_3 (VAR_21));
      VAR_26 = FUNC_10 (VAR_21, ".dynamic");
      if (VAR_26 != ((void*)0))
 FUNC_12 (VAR_21, VAR_26, FUNC_3 (VAR_21));
    }

  if (!VAR_22->shared)
    {
      const char *VAR_29;

      VAR_29 = FUNC_5 (VAR_21) ? "_DYNAMIC_LINK" : "_DYNAMIC_LINKING";
      VAR_24 = ((void*)0);
      if (!(FUNC_7
     (VAR_22, VAR_21, VAR_29, VAR_0, VAR_12, 0,
      ((void*)0), VAR_1, FUNC_15 (VAR_21)->collect, &VAR_24)))
 return VAR_1;

      VAR_23 = (struct elf_link_hash_entry *) VAR_24;
      VAR_23->non_elf = 0;
      VAR_23->def_regular = 1;
      VAR_23->type = VAR_10;

      if (! FUNC_9 (VAR_22, VAR_23))
 return VAR_1;

      if (! FUNC_18 (VAR_22)->use_rld_obj_head)
 {




   VAR_26 = FUNC_10 (VAR_21, ".rld_map");
   FUNC_1 (VAR_26 != ((void*)0));

   VAR_29 = FUNC_5 (VAR_21) ? "__rld_map" : "__RLD_MAP";
   VAR_24 = ((void*)0);
   if (!(FUNC_7
  (VAR_22, VAR_21, VAR_29, VAR_0, VAR_26, 0, ((void*)0), VAR_1,
   FUNC_15 (VAR_21)->collect, &VAR_24)))
     return VAR_1;

   VAR_23 = (struct elf_link_hash_entry *) VAR_24;
   VAR_23->non_elf = 0;
   VAR_23->def_regular = 1;
   VAR_23->type = VAR_9;

   if (! FUNC_9 (VAR_22, VAR_23))
     return VAR_1;
 }
    }

  if (VAR_28->is_vxworks)
    {


      if (!FUNC_6 (VAR_21, VAR_22))
 return VAR_1;


      VAR_28->sdynbss = FUNC_10 (VAR_21, ".dynbss");
      VAR_28->srelbss = FUNC_10 (VAR_21, ".rela.bss");
      VAR_28->srelplt = FUNC_10 (VAR_21, ".rela.plt");
      VAR_28->splt = FUNC_10 (VAR_21, ".plt");
      if (!VAR_28->sdynbss
   || (!VAR_28->srelbss && !VAR_22->shared)
   || !VAR_28->srelplt
   || !VAR_28->splt)
 FUNC_8 ();


      if (!FUNC_14 (VAR_21, VAR_22, &VAR_28->srelplt2))
 return VAR_1;


      if (VAR_22->shared)
 {
   VAR_28->plt_header_size
     = 4 * FUNC_0 (VAR_19);
   VAR_28->plt_entry_size
     = 4 * FUNC_0 (VAR_20);
 }
      else
 {
   VAR_28->plt_header_size
     = 4 * FUNC_0 (VAR_17);
   VAR_28->plt_entry_size
     = 4 * FUNC_0 (VAR_18);
 }
    }

  return VAR_11;
}
