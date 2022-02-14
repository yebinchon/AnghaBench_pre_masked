
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_80__ TYPE_9__ ;
typedef struct TYPE_79__ TYPE_8__ ;
typedef struct TYPE_78__ TYPE_7__ ;
typedef struct TYPE_77__ TYPE_6__ ;
typedef struct TYPE_76__ TYPE_5__ ;
typedef struct TYPE_75__ TYPE_4__ ;
typedef struct TYPE_74__ TYPE_44__ ;
typedef struct TYPE_73__ TYPE_43__ ;
typedef struct TYPE_72__ TYPE_42__ ;
typedef struct TYPE_71__ TYPE_40__ ;
typedef struct TYPE_70__ TYPE_3__ ;
typedef struct TYPE_69__ TYPE_30__ ;
typedef struct TYPE_68__ TYPE_2__ ;
typedef struct TYPE_67__ TYPE_1__ ;
typedef struct TYPE_66__ TYPE_14__ ;
typedef struct TYPE_65__ TYPE_13__ ;
typedef struct TYPE_64__ TYPE_11__ ;
typedef struct TYPE_63__ TYPE_10__ ;


typedef int time_t ;
struct mips_got_info {scalar_t__ local_gotno; scalar_t__ global_gotno; scalar_t__ tls_gotno; scalar_t__ assigned_gotno; struct mips_got_info* next; TYPE_2__* global_gotsym; } ;
struct mips_elf_link_hash_table {int is_vxworks; scalar_t__ rld_value; int function_stub_size; TYPE_8__* splt; TYPE_4__* srelplt; } ;
struct bfd_link_info {int flags; scalar_t__ shared; } ;
typedef int rel ;
typedef int file_ptr ;
typedef scalar_t__ bfd_vma ;
struct TYPE_80__ {int r_offset; int r_info; } ;
typedef TYPE_9__ bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_63__ {TYPE_11__* sections; } ;
typedef TYPE_10__ bfd ;
struct TYPE_64__ {int size; int output_offset; scalar_t__ vma; int reloc_count; TYPE_9__* contents; TYPE_43__* output_section; } ;
typedef TYPE_11__ asection ;
struct TYPE_79__ {scalar_t__ size; } ;
struct TYPE_78__ {int (* swap_dyn_out ) (TYPE_10__*,TYPE_13__*,TYPE_9__*) ;int (* swap_dyn_in ) (TYPE_10__*,TYPE_9__*,TYPE_13__*) ;} ;
struct TYPE_77__ {int d_val; int d_ptr; } ;
struct TYPE_76__ {int sh_entsize; int sh_size; } ;
struct TYPE_75__ {scalar_t__ size; scalar_t__ output_offset; TYPE_3__* output_section; } ;
struct TYPE_74__ {scalar_t__ dynamic_sections_created; int dynstr; TYPE_10__* dynobj; } ;
struct TYPE_73__ {int vma; scalar_t__ filepos; } ;
struct TYPE_72__ {TYPE_5__ this_hdr; } ;
struct TYPE_71__ {TYPE_7__* s; } ;
struct TYPE_70__ {scalar_t__ vma; } ;
struct TYPE_67__ {struct mips_got_info* got_info; } ;
struct TYPE_69__ {TYPE_1__ u; } ;
struct TYPE_68__ {scalar_t__ dynindx; } ;
struct TYPE_66__ {int id1; int num; int id2; scalar_t__ reserved1; scalar_t__ reserved0; scalar_t__ offset; } ;
struct TYPE_65__ {int d_tag; TYPE_6__ d_un; } ;
typedef TYPE_9__ Elf_Internal_Rela ;
typedef TYPE_13__ Elf_Internal_Dyn ;
typedef int Elf64_Mips_External_Rel ;
typedef int Elf64_External_Rel ;
typedef TYPE_14__ Elf32_compact_rel ;
typedef int Elf32_External_compact_rel ;
typedef int Elf32_External_Rel ;


 scalar_t__ FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_2 (TYPE_10__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 char* FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*,int,TYPE_9__*) ;
 int FUNC_7 (TYPE_10__*) ;
 scalar_t__ FUNC_8 (TYPE_10__*) ;
 char* FUNC_9 (TYPE_10__*) ;
 size_t FUNC_10 (TYPE_10__*) ;
 scalar_t__ FUNC_11 (struct bfd_link_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (TYPE_10__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int ) ;
 int VAR_6 ;
 int FUNC_14 (TYPE_10__*) ;
 int FUNC_15 (TYPE_10__*,TYPE_14__*,int *) ;
 TYPE_11__* FUNC_16 (TYPE_10__*,char const*) ;
 TYPE_44__* FUNC_17 (struct bfd_link_info*) ;
 TYPE_42__* FUNC_18 (TYPE_43__*) ;
 TYPE_40__* FUNC_19 (TYPE_10__*) ;
 int FUNC_20 (TYPE_9__*,int ,int) ;
 int FUNC_21 (TYPE_10__*,struct bfd_link_info*,TYPE_9__*,int *,int ,int ,scalar_t__*,TYPE_11__*) ;
 struct mips_got_info* FUNC_22 (struct mips_got_info*,TYPE_10__*) ;
 TYPE_11__* FUNC_23 (TYPE_10__*,scalar_t__) ;
 struct mips_elf_link_hash_table* FUNC_24 (struct bfd_link_info*) ;
 TYPE_11__* FUNC_25 (struct bfd_link_info*,scalar_t__) ;
 TYPE_30__* FUNC_26 (TYPE_11__*) ;
 int FUNC_27 (TYPE_10__*,struct bfd_link_info*) ;
 int FUNC_28 (TYPE_10__*,struct bfd_link_info*) ;
 int FUNC_29 (int *,int,int,int ) ;
 TYPE_10__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_30 (TYPE_10__*,TYPE_9__*,TYPE_13__*) ;
 int FUNC_31 (TYPE_10__*,TYPE_13__*,TYPE_9__*) ;
 int FUNC_32 (TYPE_10__*,TYPE_9__*,TYPE_13__*) ;
 int FUNC_33 (TYPE_10__*,TYPE_13__*,TYPE_9__*) ;
 int FUNC_34 (int*) ;

bfd_boolean
FUNC_35 (bfd *VAR_10,
           struct bfd_link_info *VAR_11)
{
  bfd *VAR_12;
  asection *VAR_13;
  asection *VAR_14;
  struct mips_got_info *VAR_15, *VAR_16;
  struct mips_elf_link_hash_table *VAR_17;

  VAR_17 = FUNC_24 (VAR_11);
  VAR_12 = FUNC_17 (VAR_11)->dynobj;

  VAR_13 = FUNC_16 (VAR_12, ".dynamic");

  VAR_14 = FUNC_23 (VAR_12, VAR_2);
  if (VAR_14 == ((void*)0))
    VAR_15 = VAR_16 = ((void*)0);
  else
    {
      FUNC_1 (FUNC_26 (VAR_14) != ((void*)0));
      VAR_15 = FUNC_26 (VAR_14)->u.got_info;
      FUNC_1 (VAR_15 != ((void*)0));
      VAR_16 = FUNC_22 (VAR_15, VAR_10);
      FUNC_1 (VAR_16 != ((void*)0));
    }

  if (FUNC_17 (VAR_11)->dynamic_sections_created)
    {
      bfd_byte *VAR_18;
      int VAR_19 = 0, VAR_20 = 0;

      FUNC_1 (VAR_13 != ((void*)0));
      FUNC_1 (VAR_16 != ((void*)0));

      for (VAR_18 = VAR_13->contents;
    VAR_18 < VAR_13->contents + VAR_13->size;
    VAR_18 += FUNC_3 (VAR_12))
 {
   Elf_Internal_Dyn VAR_21;
   const char *VAR_22;
   size_t VAR_23;
   asection *VAR_24;
   bfd_boolean VAR_25;


   (*FUNC_19 (VAR_12)->s->swap_dyn_in) (VAR_12, VAR_18, &VAR_21);


   VAR_25 = VAR_5;

   switch (VAR_21.d_tag)
     {
     case 131:
       VAR_21.d_un.d_val = FUNC_8 (VAR_12);
       break;

     case 133:
       FUNC_1 (VAR_17->is_vxworks);
       VAR_21.d_un.d_val = FUNC_7 (VAR_12);
       break;

     case 129:

       VAR_21.d_un.d_val =
  FUNC_13 (FUNC_17 (VAR_11)->dynstr);
       break;

     case 136:
       VAR_22 = ".got";
       if (VAR_17->is_vxworks)
  {


    VAR_24 = FUNC_16 (VAR_12, VAR_22);
    FUNC_1 (VAR_24 != ((void*)0));
    VAR_21.d_un.d_ptr = VAR_24->output_section->vma + VAR_24->output_offset;
  }
       else
  {
    VAR_24 = FUNC_16 (VAR_10, VAR_22);
    FUNC_1 (VAR_24 != ((void*)0));
    VAR_21.d_un.d_ptr = VAR_24->vma;
  }
       break;

     case 140:
       VAR_21.d_un.d_val = 1;
       break;

     case 148:
       VAR_21.d_un.d_val = VAR_3;
       break;

     case 138:
       {
  time_t VAR_26;
  FUNC_34 (&VAR_26);
  VAR_21.d_un.d_val = VAR_26;
       }
       break;

     case 145:

       VAR_25 = VAR_2;
       break;

     case 144:

       VAR_25 = VAR_2;
       break;

     case 149:
       VAR_24 = VAR_10->sections;
       FUNC_1 (VAR_24 != ((void*)0));
       VAR_21.d_un.d_ptr = VAR_24->vma & ~(bfd_vma) 0xffff;
       break;

     case 143:
       VAR_21.d_un.d_val = VAR_16->local_gotno;
       break;

     case 137:



       VAR_21.d_un.d_val = FUNC_14 (VAR_10) + 1;
       break;

     case 147:
       if (VAR_15->global_gotsym)
  {
    VAR_21.d_un.d_val = VAR_15->global_gotsym->dynindx;
    break;
  }




     case 139:
       VAR_22 = ".dynsym";
       VAR_23 = FUNC_10 (VAR_10);
       VAR_24 = FUNC_16 (VAR_10, VAR_22);
       FUNC_1 (VAR_24 != ((void*)0));

       VAR_21.d_un.d_val = VAR_24->size / VAR_23;
       break;

     case 146:
       VAR_21.d_un.d_val = VAR_16->local_gotno - FUNC_11 (VAR_11);
       break;

     case 141:
       VAR_21.d_un.d_ptr = FUNC_24 (VAR_11)->rld_value;
       break;

     case 142:
       VAR_24 = (FUNC_16
     (VAR_10, FUNC_5 (VAR_10)));
       VAR_21.d_un.d_ptr = VAR_24->vma;
       break;

     case 132:
       FUNC_1 (VAR_17->is_vxworks);

       if (VAR_17->srelplt)
  VAR_21.d_un.d_val -= VAR_17->srelplt->size;
       break;

     case 135:
       FUNC_1 (VAR_17->is_vxworks);
       VAR_21.d_un.d_val = VAR_1;
       break;

     case 134:
       FUNC_1 (VAR_17->is_vxworks);
       VAR_21.d_un.d_val = VAR_17->srelplt->size;
       break;

     case 150:
       FUNC_1 (VAR_17->is_vxworks);
       VAR_21.d_un.d_val = (VAR_17->srelplt->output_section->vma
    + VAR_17->srelplt->output_offset);
       break;

     case 128:


       if (!(VAR_11->flags & VAR_0))
  {
    VAR_19 = FUNC_3 (VAR_12);
    VAR_25 = VAR_2;
  }
       break;

     case 151:


       if (!(VAR_11->flags & VAR_0))
  VAR_21.d_un.d_val &= ~VAR_0;
       else
  VAR_25 = VAR_2;
       break;

     default:
       VAR_25 = VAR_2;
       break;
     }

   if (VAR_25 || VAR_20)
     (*FUNC_19 (VAR_12)->s->swap_dyn_out)
       (VAR_12, &VAR_21, VAR_18 - VAR_20);

   if (VAR_19)
     {
       VAR_20 += VAR_19;
       VAR_19 = 0;
     }
 }


      if (VAR_20 > 0)
 FUNC_20 (VAR_18 - VAR_20, 0, VAR_20);
    }

  if (VAR_14 != ((void*)0) && VAR_14->size > 0)
    {
      if (VAR_17->is_vxworks)
 {





   FUNC_6 (VAR_10,
        VAR_13->output_offset + VAR_13->output_section->vma,
        VAR_14->contents);
   FUNC_6 (VAR_10, 0,
        VAR_14->contents + FUNC_4 (VAR_10));
   FUNC_6 (VAR_10, 0,
        VAR_14->contents
        + 2 * FUNC_4 (VAR_10));
 }
      else
 {



   FUNC_6 (VAR_10, (bfd_vma) 0, VAR_14->contents);
   FUNC_6 (VAR_10, (bfd_vma) 0x80000000,
        VAR_14->contents + FUNC_4 (VAR_10));
 }

      FUNC_18 (VAR_14->output_section)->this_hdr.sh_entsize
  = FUNC_4 (VAR_10);
    }


  if (VAR_15 != ((void*)0) && VAR_15->next)
    {
      Elf_Internal_Rela VAR_27[3];
      bfd_vma VAR_28 = 0;

      FUNC_20 (VAR_27, 0, sizeof (VAR_27));
      VAR_27[0].r_info = FUNC_2 (VAR_10, 0, VAR_4);

      for (VAR_16 = VAR_15->next; VAR_16->next != VAR_15; VAR_16 = VAR_16->next)
 {
   bfd_vma VAR_29 = VAR_16->next->local_gotno + VAR_16->next->global_gotno
     + VAR_16->next->tls_gotno;

   FUNC_6 (VAR_10, 0, VAR_14->contents
        + VAR_29++ * FUNC_4 (VAR_10));
   FUNC_6 (VAR_10, 0x80000000, VAR_14->contents
        + VAR_29++ * FUNC_4 (VAR_10));

   if (! VAR_11->shared)
     continue;

   while (VAR_29 < VAR_16->assigned_gotno)
     {
       VAR_27[0].r_offset = VAR_27[1].r_offset = VAR_27[2].r_offset
  = VAR_29++ * FUNC_4 (VAR_10);
       if (!(FUNC_21
      (VAR_10, VAR_11, VAR_27, ((void*)0),
       VAR_6,
       0, &VAR_28, VAR_14)))
  return VAR_2;
       FUNC_1 (VAR_28 == 0);
     }
 }
    }





  if (FUNC_17 (VAR_11)->dynamic_sections_created)
    {
      bfd_byte *VAR_30;
      bfd_boolean VAR_31;

      FUNC_1 (VAR_13 != ((void*)0));

      for (VAR_30 = VAR_13->contents;
    VAR_30 < VAR_13->contents + VAR_13->size;
    VAR_30 += FUNC_3 (VAR_12))
 {
   Elf_Internal_Dyn VAR_32;
   asection *VAR_33;


   (*FUNC_19 (VAR_12)->s->swap_dyn_in) (VAR_12, VAR_30, &VAR_32);


   VAR_31 = VAR_5;

   switch (VAR_32.d_tag)
     {
     case 130:




       VAR_33 = FUNC_25 (VAR_11, VAR_2);
       VAR_32.d_un.d_val = (VAR_33->reloc_count
    * (FUNC_0 (VAR_10)
       ? sizeof (Elf64_Mips_External_Rel)
       : sizeof (Elf32_External_Rel)));


       FUNC_18 (VAR_33->output_section)->this_hdr.sh_size
  = VAR_32.d_un.d_val;
       break;

     default:
       VAR_31 = VAR_2;
       break;
     }

   if (VAR_31)
     (*FUNC_19 (VAR_12)->s->swap_dyn_out)
       (VAR_12, &VAR_32, VAR_30);
 }
    }

  {
    asection *VAR_34;
    Elf32_compact_rel VAR_35;

    if (FUNC_12 (VAR_10))
      {

 VAR_34 = FUNC_16 (VAR_12, ".compact_rel");
 if (VAR_34 != ((void*)0))
   {
     VAR_35.id1 = 1;
     VAR_35.num = VAR_34->reloc_count;
     VAR_35.id2 = 2;
     VAR_35.offset = (VAR_34->output_section->filepos
     + sizeof (Elf32_External_compact_rel));
     VAR_35.reserved0 = 0;
     VAR_35.reserved1 = 0;
     FUNC_15 (VAR_10, &VAR_35,
         ((Elf32_External_compact_rel *)
          VAR_34->contents));


     VAR_34 = FUNC_16 (VAR_12,
      FUNC_9 (VAR_12));
     if (VAR_34 != ((void*)0))
       {
  file_ptr VAR_36;

  FUNC_1 (VAR_34->size >= VAR_17->function_stub_size);
  VAR_36 = VAR_34->size - VAR_17->function_stub_size;
  FUNC_20 (VAR_34->contents + VAR_36, 0,
   VAR_17->function_stub_size);
       }
   }
      }





    if (!VAR_17->is_vxworks)
      {
 VAR_34 = FUNC_25 (VAR_11, VAR_2);
 if (VAR_34 != ((void*)0)
     && VAR_34->size > (bfd_vma)2 * FUNC_8 (VAR_10))
   {
     VAR_7 = VAR_10;

     if (FUNC_0 (VAR_10))
       FUNC_29 ((Elf64_External_Rel *) VAR_34->contents + 1,
       VAR_34->reloc_count - 1, sizeof (Elf64_Mips_External_Rel),
       VAR_9);
     else
       FUNC_29 ((Elf32_External_Rel *) VAR_34->contents + 1,
       VAR_34->reloc_count - 1, sizeof (Elf32_External_Rel),
       VAR_8);
   }
      }
  }

  if (VAR_17->is_vxworks && VAR_17->splt->size > 0)
    {
      if (VAR_11->shared)
 FUNC_28 (VAR_10, VAR_11);
      else
 FUNC_27 (VAR_10, VAR_11);
    }
  return VAR_5;
}
