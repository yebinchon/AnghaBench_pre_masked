
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_79__ TYPE_9__ ;
typedef struct TYPE_78__ TYPE_8__ ;
typedef struct TYPE_77__ TYPE_7__ ;
typedef struct TYPE_76__ TYPE_6__ ;
typedef struct TYPE_75__ TYPE_5__ ;
typedef struct TYPE_74__ TYPE_4__ ;
typedef struct TYPE_73__ TYPE_3__ ;
typedef struct TYPE_72__ TYPE_39__ ;
typedef struct TYPE_71__ TYPE_36__ ;
typedef struct TYPE_70__ TYPE_2__ ;
typedef struct TYPE_69__ TYPE_1__ ;
typedef struct TYPE_68__ TYPE_15__ ;
typedef struct TYPE_67__ TYPE_14__ ;
typedef struct TYPE_66__ TYPE_13__ ;
typedef struct TYPE_65__ TYPE_12__ ;
typedef struct TYPE_64__ TYPE_11__ ;
typedef struct TYPE_63__ TYPE_10__ ;


struct TYPE_75__ {char* string; } ;
struct TYPE_73__ {int value; TYPE_11__* section; } ;
struct TYPE_69__ {scalar_t__ link; } ;
struct TYPE_74__ {TYPE_3__ def; TYPE_1__ i; } ;
struct TYPE_76__ {scalar_t__ type; TYPE_5__ root; TYPE_4__ u; } ;
struct TYPE_77__ {TYPE_6__ root; int other; } ;
struct score_elf_link_hash_entry {TYPE_7__ root; } ;
struct elf_link_hash_entry {int dummy; } ;
struct elf_backend_data {int (* elf_backend_omit_section_dynsym ) (TYPE_10__*,struct bfd_link_info*,TYPE_11__*) ;} ;
struct bfd_link_info {scalar_t__ unresolved_syms_in_objects; TYPE_8__* callbacks; scalar_t__ relocatable; scalar_t__ shared; } ;
struct TYPE_79__ {unsigned long dst_mask; int src_mask; int name; } ;
typedef TYPE_9__ reloc_howto_type ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_signed_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_63__ {TYPE_11__* sections; } ;
typedef TYPE_10__ bfd ;
struct TYPE_64__ {int flags; int reloc_count; int output_offset; TYPE_2__* output_section; struct TYPE_64__* next; } ;
typedef TYPE_11__ asection ;
struct TYPE_65__ {TYPE_9__* howto; } ;
typedef TYPE_12__ arelent ;
struct TYPE_78__ {int (* warning ) (struct bfd_link_info*,char const*,char const*,TYPE_10__*,TYPE_11__*,int) ;int (* undefined_symbol ) (struct bfd_link_info*,char const*,TYPE_10__*,TYPE_11__*,int,int) ;int (* reloc_overflow ) (struct bfd_link_info*,int *,char const*,int ,int,TYPE_10__*,TYPE_11__*,int) ;} ;
struct TYPE_72__ {scalar_t__ dynamic_sections_created; } ;
struct TYPE_67__ {size_t sh_info; } ;
struct TYPE_71__ {TYPE_14__ symtab_hdr; } ;
struct TYPE_70__ {int vma; } ;
struct TYPE_68__ {int r_offset; scalar_t__ r_addend; scalar_t__ r_info; } ;
struct TYPE_66__ {int st_value; unsigned int st_info; } ;
typedef TYPE_13__ Elf_Internal_Sym ;
typedef TYPE_14__ Elf_Internal_Shdr ;
typedef TYPE_15__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_9__*,TYPE_10__*,int *) ;
 int FUNC_7 (TYPE_10__*,TYPE_13__*,TYPE_11__**,int) ;
 int FUNC_8 (TYPE_10__*,TYPE_12__*,TYPE_15__*) ;
 char* FUNC_9 (TYPE_10__*,TYPE_14__*,TYPE_13__*,TYPE_11__*) ;
 void* FUNC_10 (TYPE_10__*,int *) ;
 int * FUNC_11 (TYPE_10__*,char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (TYPE_10__*,int,int *) ;


 int VAR_16 ;



 scalar_t__ FUNC_13 (TYPE_10__*) ;
 scalar_t__ FUNC_14 (TYPE_11__*) ;
 TYPE_39__* FUNC_15 (struct bfd_link_info*) ;
 struct elf_link_hash_entry** FUNC_16 (TYPE_10__*) ;
 TYPE_36__* FUNC_17 (TYPE_10__*) ;
 struct elf_backend_data* FUNC_18 (TYPE_10__*) ;
 int FUNC_19 (TYPE_10__*,int *,TYPE_9__*,int) ;
 int FUNC_20 (TYPE_9__*,TYPE_10__*,TYPE_10__*,TYPE_11__*,int *,TYPE_15__*,TYPE_15__*,int,struct bfd_link_info*,char const*,scalar_t__,struct score_elf_link_hash_entry*,TYPE_11__**,int) ;
 int FUNC_21 (struct bfd_link_info*,scalar_t__) ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 int FUNC_23 (TYPE_10__*,struct bfd_link_info*,TYPE_11__*) ;
 int FUNC_24 (struct bfd_link_info*,char const*,TYPE_10__*,TYPE_11__*,int,int) ;
 int FUNC_25 (struct bfd_link_info*,int *,char const*,int ,int,TYPE_10__*,TYPE_11__*,int) ;
 int FUNC_26 (struct bfd_link_info*,char const*,TYPE_10__*,TYPE_11__*,int,int) ;
 int FUNC_27 (struct bfd_link_info*,char const*,char const*,TYPE_10__*,TYPE_11__*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_28 (bfd *VAR_17,
            struct bfd_link_info *VAR_18,
            bfd *VAR_19,
            asection *VAR_20,
            bfd_byte *VAR_21,
            Elf_Internal_Rela *VAR_22,
            Elf_Internal_Sym *VAR_23,
            asection **VAR_24)
{
  Elf_Internal_Shdr *VAR_25;
  struct elf_link_hash_entry **VAR_26;
  Elf_Internal_Rela *VAR_27;
  Elf_Internal_Rela *VAR_28;
  const char *VAR_29;
  unsigned long VAR_30;
  unsigned long VAR_31, VAR_32, VAR_33, VAR_34;
  size_t VAR_35;
  bfd_boolean VAR_36 = VAR_0;


  if (FUNC_15 (VAR_18)->dynamic_sections_created)
    {
      bfd_size_type VAR_37 = 0;
      if (VAR_18->shared)
 {
   asection * VAR_38;
   const struct elf_backend_data *VAR_39 = FUNC_18 (VAR_17);

   for (VAR_38 = VAR_17->sections; VAR_38 ; VAR_38 = VAR_38->next)
     if ((VAR_38->flags & VAR_5) == 0
  && (VAR_38->flags & VAR_4) != 0
  && !(*VAR_39->elf_backend_omit_section_dynsym) (VAR_17, VAR_18, VAR_38))
       ++ VAR_37;
 }

      if (!FUNC_21 (VAR_18, VAR_37 + 1))
 return VAR_0;
    }

  VAR_25 = &FUNC_17 (VAR_19)->symtab_hdr;
  VAR_35 = (FUNC_13 (VAR_19)) ? 0 : VAR_25->sh_info;
  VAR_26 = FUNC_16 (VAR_19);
  VAR_27 = VAR_22;
  VAR_28 = VAR_22 + VAR_20->reloc_count;
  for (; VAR_27 < VAR_28; VAR_27++)
    {
      int VAR_40;
      reloc_howto_type *VAR_41;
      unsigned long VAR_42;
      Elf_Internal_Sym *VAR_43;
      asection *VAR_44;
      struct score_elf_link_hash_entry *VAR_45;
      bfd_vma VAR_46 = 0;
      bfd_reloc_status_type VAR_47;
      arelent VAR_48;

      VAR_42 = FUNC_1 (VAR_27->r_info);
      VAR_40 = FUNC_2 (VAR_27->r_info);

      FUNC_8 (VAR_19, &VAR_48, (Elf_Internal_Rela *) VAR_27);
      VAR_41 = VAR_48.howto;

      VAR_45 = ((void*)0);
      VAR_43 = ((void*)0);
      VAR_44 = ((void*)0);

      if (VAR_42 < VAR_35)
        {
          VAR_43 = VAR_23 + VAR_42;
          VAR_44 = VAR_24[VAR_42];
          VAR_46 = (VAR_44->output_section->vma
   + VAR_44->output_offset
   + VAR_43->st_value);
          VAR_29 = FUNC_9 (VAR_19, VAR_25, VAR_43, VAR_44);

          if (!VAR_18->relocatable
       && (VAR_44->flags & VAR_6) != 0
       && FUNC_3 (VAR_43->st_info) == VAR_7)
            {
              asection *VAR_49;
              bfd_vma VAR_50, VAR_51;

              switch (VAR_40)
                {
                case 134:
                  break;
                case 133:
                  VAR_31 = FUNC_10 (VAR_19, VAR_21 + VAR_27->r_offset - 4);
                  VAR_32 = ((((VAR_31 >> 16) & 0x3) << 15) | (VAR_31 & 0x7fff)) >> 1;
                  VAR_51 = FUNC_10 (VAR_19, VAR_21 + VAR_27->r_offset);
                  VAR_30 = ((((VAR_51 >> 16) & 0x3) << 15) | (VAR_51 & 0x7fff)) >> 1;
                  VAR_50 = (VAR_32 << 16) | (VAR_30 & 0xffff);
                  VAR_49 = VAR_44;
                  VAR_50 = FUNC_7 (VAR_17, VAR_43, &VAR_49, VAR_50);
                  VAR_50 -= VAR_46;
                  VAR_50 += VAR_49->output_section->vma + VAR_49->output_offset;
                  VAR_34 = VAR_50;
                  VAR_32 = (VAR_34 >> 16) << 1;
                  VAR_33 = (VAR_31 & (~(VAR_41->dst_mask)))
                    | (VAR_32 & 0x7fff) | ((VAR_32 << 1) & 0x30000);
                  FUNC_12 (VAR_19, VAR_33, VAR_21 + VAR_27->r_offset - 4);
                  VAR_30 = (VAR_34 & 0xffff) << 1;
                  VAR_51 = (VAR_51 & (~(VAR_41->dst_mask)))
                    | (VAR_30 & 0x7fff) | ((VAR_30 << 1) & 0x30000);
                  FUNC_12 (VAR_19, VAR_51, VAR_21 + VAR_27->r_offset);
                  break;
                case 135:
                  VAR_51 = FUNC_10 (VAR_19, VAR_21 + VAR_27->r_offset);
                  VAR_50 = (((VAR_51 >> 16) & 0x3) << 14) | ((VAR_51 & 0x7fff) >> 1);
                  VAR_49 = VAR_44;
                  VAR_50 = FUNC_7 (VAR_17, VAR_43, &VAR_49, VAR_50) - VAR_46;
                  VAR_50 += VAR_49->output_section->vma + VAR_49->output_offset;
                  VAR_51 = (VAR_51 & (~(VAR_41->dst_mask))) | ((VAR_50 & 0x3fff) << 1)
                           | (((VAR_50 >> 14) & 0x3) << 16);

                  FUNC_12 (VAR_19, VAR_51, VAR_21 + VAR_27->r_offset);
                  break;
                default:
                  VAR_51 = FUNC_10 (VAR_19, VAR_21 + VAR_27->r_offset);

                  VAR_50 = VAR_51 & VAR_41->src_mask;
                  if (VAR_50 & ((VAR_41->src_mask + 1) >> 1))
                    {
                      bfd_signed_vma VAR_52;

                      VAR_52 = -1;
                      VAR_52 &= ~VAR_41->src_mask;
                      VAR_50 |= VAR_52;
                    }
                  VAR_49 = VAR_44;
                  VAR_50 = FUNC_7 (VAR_17, VAR_43, &VAR_49, VAR_50) - VAR_46;
                  VAR_50 += VAR_49->output_section->vma + VAR_49->output_offset;
                  VAR_51 = (VAR_51 & ~VAR_41->dst_mask) | (VAR_50 & VAR_41->dst_mask);
                  FUNC_12 (VAR_19, VAR_51, VAR_21 + VAR_27->r_offset);
                  break;
                }
            }
        }
      else
        {

   VAR_45 = ((struct score_elf_link_hash_entry *)
        FUNC_16 (VAR_19) [VAR_42 - VAR_35]);

   while (VAR_45->root.root.type == VAR_12
   || VAR_45->root.root.type == VAR_15)
     VAR_45 = (struct score_elf_link_hash_entry *) VAR_45->root.root.u.i.link;


   VAR_29 = VAR_45->root.root.root.string;



   if (FUNC_22 (VAR_29, VAR_1) == 0)
     {


       if (VAR_40 != 134 && VAR_40 != 133)
  return 131;

       VAR_36 = VAR_9;
     }





   else if ((VAR_45->root.root.type == VAR_10
      || VAR_45->root.root.type == VAR_11)
     && VAR_45->root.root.u.def.section)
     {
       VAR_44 = VAR_45->root.root.u.def.section;
       if (VAR_44->output_section)
  VAR_46 = (VAR_45->root.root.u.def.value
         + VAR_44->output_section->vma
         + VAR_44->output_offset);
       else
  {
    VAR_46 = VAR_45->root.root.u.def.value;
  }
     }
   else if (VAR_45->root.root.type == VAR_14)



     VAR_46 = 0;
   else if (VAR_18->unresolved_syms_in_objects == VAR_3
     && FUNC_4 (VAR_45->root.other) == VAR_8)
     VAR_46 = 0;
   else if (FUNC_22 (VAR_29, "_DYNAMIC_LINK") == 0)
     {



       FUNC_0 (! VAR_18->shared);
       FUNC_0 (FUNC_11 (VAR_17, ".dynamic") == ((void*)0));
       VAR_46 = 0;
     }
   else if (!VAR_18->relocatable)
     {
       if (! ((*VAR_18->callbacks->undefined_symbol)
       (VAR_18, VAR_45->root.root.root.string, VAR_19,
        VAR_20, VAR_27->r_offset,
        (VAR_18->unresolved_syms_in_objects == VAR_2)
        || FUNC_4 (VAR_45->root.other))))
  return 128;
       VAR_46 = 0;
     }
        }

      if (VAR_44 != ((void*)0) && FUNC_14 (VAR_44))
 {



   FUNC_6 (VAR_41, VAR_19, VAR_21 + VAR_27->r_offset);
   VAR_27->r_info = 0;
   VAR_27->r_addend = 0;
   continue;
 }

      if (VAR_18->relocatable)
        {




          if (VAR_43 != ((void*)0) && FUNC_3 (VAR_43->st_info) == VAR_7)
     FUNC_19 (VAR_19, VAR_21 + VAR_27->r_offset,
      VAR_41, (bfd_signed_vma) VAR_44->output_offset);
          continue;
        }

      VAR_47 = FUNC_20 (VAR_41, VAR_19, VAR_17,
                                         VAR_20, VAR_21, VAR_27, VAR_22,
                                         VAR_46, VAR_18, VAR_29,
                                         (VAR_45 ? FUNC_3 ((unsigned int)VAR_45->root.root.type) :
      FUNC_3 ((unsigned int)VAR_43->st_info)), VAR_45, VAR_24,
                                         VAR_36);

      if (VAR_47 != VAR_16)
        {
          const char *VAR_53 = (const char *)0;

          switch (VAR_47)
            {
            case 129:



              if (((!VAR_45) || (VAR_45->root.root.type != VAR_13))
                  && (!((*VAR_18->callbacks->reloc_overflow)
                        (VAR_18, ((void*)0), VAR_29, VAR_41->name, (bfd_vma) 0,
                         VAR_19, VAR_20, VAR_27->r_offset))))
                return VAR_0;
              break;
            case 128:
              if (!((*VAR_18->callbacks->undefined_symbol)
                    (VAR_18, VAR_29, VAR_19, VAR_20, VAR_27->r_offset, VAR_9)))
                return VAR_0;
              break;

            case 130:
              VAR_53 = FUNC_5("internal error: out of range error");
              goto common_error;

            case 131:
              VAR_53 = FUNC_5("internal error: unsupported relocation error");
              goto common_error;

            case 132:
              VAR_53 = FUNC_5("internal error: dangerous error");
              goto common_error;

            default:
              VAR_53 = FUNC_5("internal error: unknown error");


            common_error:
              if (!((*VAR_18->callbacks->warning)
                    (VAR_18, VAR_53, VAR_29, VAR_19, VAR_20, VAR_27->r_offset)))
                return VAR_0;
              break;
            }
        }
    }

  return VAR_9;
}
