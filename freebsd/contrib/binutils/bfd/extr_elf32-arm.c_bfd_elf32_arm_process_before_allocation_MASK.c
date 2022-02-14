
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_28__ {int type; } ;
struct TYPE_27__ {scalar_t__ offset; } ;
struct elf_link_hash_entry {TYPE_2__ root; int type; TYPE_1__ plt; } ;
struct elf32_arm_link_hash_table {int use_blx; int * splt; scalar_t__ byteswap_code; int * bfd_of_glue_owner; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_30__ {int r_info; } ;
typedef TYPE_4__ bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_31__ {TYPE_6__* sections; } ;
typedef TYPE_5__ bfd ;
struct TYPE_32__ {scalar_t__ reloc_count; int flags; struct TYPE_32__* next; } ;
typedef TYPE_6__ asection ;
struct TYPE_33__ {unsigned long sh_info; } ;
struct TYPE_29__ {TYPE_4__* contents; } ;
struct TYPE_26__ {TYPE_4__* relocs; TYPE_3__ this_hdr; } ;
struct TYPE_25__ {TYPE_7__ symtab_hdr; } ;
typedef TYPE_7__ Elf_Internal_Shdr ;
typedef TYPE_4__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,TYPE_6__*,void*,TYPE_4__*,int ) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*,TYPE_4__**) ;
 int FUNC_10 (struct elf32_arm_link_hash_table*) ;
 struct elf32_arm_link_hash_table* FUNC_11 (struct bfd_link_info*) ;
 TYPE_13__* FUNC_12 (TYPE_6__*) ;
 scalar_t__* FUNC_13 (TYPE_5__*) ;
 TYPE_10__* FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 int FUNC_17 (struct bfd_link_info*,struct elf_link_hash_entry*) ;

bfd_boolean
FUNC_18 (bfd *VAR_5,
      struct bfd_link_info *VAR_6)
{
  Elf_Internal_Shdr *VAR_7;
  Elf_Internal_Rela *VAR_8 = ((void*)0);
  Elf_Internal_Rela *VAR_9, *VAR_10;
  bfd_byte *VAR_11 = ((void*)0);

  asection *VAR_12;
  struct elf32_arm_link_hash_table *VAR_13;



  if (VAR_6->relocatable)
    return VAR_3;



  VAR_13 = FUNC_11 (VAR_6);
  FUNC_10 (VAR_13);

  FUNC_0 (VAR_13 != ((void*)0));
  FUNC_0 (VAR_13->bfd_of_glue_owner != ((void*)0));

  if (VAR_13->byteswap_code && !FUNC_8 (VAR_5))
    {
      FUNC_6 (FUNC_4("%B: BE8 images only valid in big-endian mode."),
     VAR_5);
      return VAR_0;
    }


  VAR_12 = VAR_5->sections;

  if (VAR_12 == ((void*)0))
    return VAR_3;

  for (; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
    {
      if (VAR_12->reloc_count == 0)
 continue;

      if ((VAR_12->flags & VAR_1) != 0)
 continue;

      VAR_7 = &FUNC_14 (VAR_5)->symtab_hdr;


      VAR_8
 = FUNC_5 (VAR_5, VAR_12, (void *) ((void*)0),
         (Elf_Internal_Rela *) ((void*)0), VAR_0);

      if (VAR_8 == ((void*)0))
 goto error_return;

      VAR_10 = VAR_8 + VAR_12->reloc_count;
      for (VAR_9 = VAR_8; VAR_9 < VAR_10; VAR_9++)
 {
   long VAR_14;
   unsigned long VAR_15;

   struct elf_link_hash_entry *VAR_16;

   VAR_14 = FUNC_2 (VAR_9->r_info);
   VAR_15 = FUNC_1 (VAR_9->r_info);


   if ( VAR_14 != 130
       && VAR_14 != 129
       && VAR_14 != 132
       && VAR_14 != 131
       && VAR_14 != 128)
     continue;


   if (VAR_11 == ((void*)0))
     {

       if (FUNC_12 (VAR_12)->this_hdr.contents != ((void*)0))
  VAR_11 = FUNC_12 (VAR_12)->this_hdr.contents;
       else
  {

    if (! FUNC_9 (VAR_5, VAR_12, &VAR_11))
      goto error_return;
  }
     }


   VAR_16 = ((void*)0);


   if (VAR_15 < VAR_7->sh_info)
     continue;


   VAR_15 -= VAR_7->sh_info;
   VAR_16 = (struct elf_link_hash_entry *)
     FUNC_13 (VAR_5)[VAR_15];



   if (VAR_16 == ((void*)0))
     continue;



   if (VAR_13->splt != ((void*)0) && VAR_16->plt.offset != (bfd_vma) -1)
     continue;

   switch (VAR_14)
     {
     case 130:
     case 129:
     case 132:
     case 131:



       if (FUNC_3(VAR_16->type) == VAR_2
    && !(VAR_14 == 132 && VAR_13->use_blx))
  FUNC_16 (VAR_6, VAR_16);
       break;

     case 128:



       if (FUNC_3 (VAR_16->type) != VAR_2 && !VAR_13->use_blx
    && VAR_16->root.type != VAR_4)
  FUNC_17 (VAR_6, VAR_16);
       break;

     default:
       FUNC_7 ();
     }
 }

      if (VAR_11 != ((void*)0)
   && FUNC_12 (VAR_12)->this_hdr.contents != VAR_11)
 FUNC_15 (VAR_11);
      VAR_11 = ((void*)0);

      if (VAR_8 != ((void*)0)
   && FUNC_12 (VAR_12)->relocs != VAR_8)
 FUNC_15 (VAR_8);
      VAR_8 = ((void*)0);
    }

  return VAR_3;

error_return:
  if (VAR_11 != ((void*)0)
      && FUNC_12 (VAR_12)->this_hdr.contents != VAR_11)
    FUNC_15 (VAR_11);
  if (VAR_8 != ((void*)0)
      && FUNC_12 (VAR_12)->relocs != VAR_8)
    FUNC_15 (VAR_8);

  return VAR_0;
}
