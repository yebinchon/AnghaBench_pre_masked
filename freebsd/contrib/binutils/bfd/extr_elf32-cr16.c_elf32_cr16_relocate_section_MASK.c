
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_31__ {char* string; } ;
struct TYPE_29__ {TYPE_1__ root; } ;
struct elf_link_hash_entry {TYPE_10__ root; } ;
struct bfd_link_info {TYPE_2__* callbacks; scalar_t__ relocatable; } ;
struct TYPE_33__ {int name; } ;
typedef TYPE_3__ reloc_howto_type ;
typedef int bfd_vma ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_34__ {int reloc_count; } ;
typedef TYPE_4__ asection ;
struct TYPE_37__ {int r_offset; int r_addend; int r_info; } ;
struct TYPE_36__ {unsigned long sh_info; int sh_link; } ;
struct TYPE_35__ {int st_name; } ;
struct TYPE_32__ {int (* warning ) (struct bfd_link_info*,char const*,char const*,int *,TYPE_4__*,int ) ;int (* undefined_symbol ) (struct bfd_link_info*,char const*,int *,TYPE_4__*,int ,int ) ;int (* reloc_overflow ) (struct bfd_link_info*,TYPE_10__*,char const*,int ,int ,int *,TYPE_4__*,int ) ;} ;
struct TYPE_30__ {TYPE_6__ symtab_hdr; } ;
typedef TYPE_5__ Elf_Internal_Sym ;
typedef TYPE_6__ Elf_Internal_Shdr ;
typedef TYPE_7__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bfd_link_info*,int *,TYPE_4__*,TYPE_7__*,unsigned long,TYPE_6__*,struct elf_link_hash_entry**,struct elf_link_hash_entry*,TYPE_4__*,int ,int ,int ) ;
 int VAR_1 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *,TYPE_5__*,TYPE_4__**,TYPE_7__*) ;
 char* FUNC_5 (int *,int ,int ) ;


 int VAR_2 ;



 char* FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,int *,int *,TYPE_4__*,int *,int ,int ,int ,struct bfd_link_info*,TYPE_4__*,int ) ;
 TYPE_3__* VAR_3 ;
 struct elf_link_hash_entry** FUNC_8 (int *) ;
 TYPE_12__* FUNC_9 (int *) ;
 int FUNC_10 (struct bfd_link_info*,TYPE_10__*,char const*,int ,int ,int *,TYPE_4__*,int ) ;
 int FUNC_11 (struct bfd_link_info*,char const*,int *,TYPE_4__*,int ,int ) ;
 int FUNC_12 (struct bfd_link_info*,char const*,char const*,int *,TYPE_4__*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (bfd *VAR_4, struct bfd_link_info *VAR_5,
                            bfd *VAR_6, asection *VAR_7,
                            bfd_byte *VAR_8, Elf_Internal_Rela *VAR_9,
                            Elf_Internal_Sym *VAR_10,
                            asection **VAR_11)
{
  Elf_Internal_Shdr *VAR_12;
  struct elf_link_hash_entry **VAR_13;
  Elf_Internal_Rela *VAR_14, *VAR_15;

  if (VAR_5->relocatable)
    return VAR_1;

  VAR_12 = &FUNC_9 (VAR_6)->symtab_hdr;
  VAR_13 = FUNC_8 (VAR_6);

  VAR_14 = VAR_9;
  VAR_15 = VAR_9 + VAR_7->reloc_count;
  for (; VAR_14 < VAR_15; VAR_14++)
    {
      int VAR_16;
      reloc_howto_type *VAR_17;
      unsigned long VAR_18;
      Elf_Internal_Sym *VAR_19;
      asection *VAR_20;
      struct elf_link_hash_entry *VAR_21;
      bfd_vma VAR_22;
      bfd_reloc_status_type VAR_23;

      VAR_18 = FUNC_0 (VAR_14->r_info);
      VAR_16 = FUNC_1 (VAR_14->r_info);
      VAR_17 = VAR_3 + (VAR_16);

      VAR_21 = ((void*)0);
      VAR_19 = ((void*)0);
      VAR_20 = ((void*)0);
      if (VAR_18 < VAR_12->sh_info)
        {
          VAR_19 = VAR_10 + VAR_18;
          VAR_20 = VAR_11[VAR_18];
          VAR_22 = FUNC_4 (VAR_4, VAR_19, &VAR_20, VAR_14);
        }
      else
        {
          bfd_boolean VAR_24, VAR_25;

          FUNC_2 (VAR_5, VAR_6, VAR_7, VAR_14,
                                   VAR_18, VAR_12, VAR_13,
                                   VAR_21, VAR_20, VAR_22,
                                   VAR_24, VAR_25);
        }

      VAR_23 = FUNC_7 (VAR_17, VAR_6, VAR_4,
                                        VAR_7,
                                        VAR_8, VAR_14->r_offset,
                                        VAR_22, VAR_14->r_addend,
                                        VAR_5, VAR_20, VAR_21 == ((void*)0));

      if (VAR_23 != VAR_2)
        {
          const char *VAR_26;
          const char *VAR_27 = ((void*)0);

          if (VAR_21 != ((void*)0))
            VAR_26 = VAR_21->root.root.string;
          else
            {
              VAR_26 = (FUNC_5
                      (VAR_6, VAR_12->sh_link, VAR_19->st_name));
              if (VAR_26 == ((void*)0) || *VAR_26 == '\0')
                VAR_26 = FUNC_6 (VAR_6, VAR_20);
            }

          switch (VAR_23)
            {
             case 129:
               if (!((*VAR_5->callbacks->reloc_overflow)
                     (VAR_5, (VAR_21 ? &VAR_21->root : ((void*)0)), VAR_26, VAR_17->name,
                      (bfd_vma) 0, VAR_6, VAR_7,
                      VAR_14->r_offset)))
                 return VAR_0;
               break;

             case 128:
               if (!((*VAR_5->callbacks->undefined_symbol)
                     (VAR_5, VAR_26, VAR_6, VAR_7,
                      VAR_14->r_offset, VAR_1)))
                 return VAR_0;
               break;

             case 130:
               VAR_27 = FUNC_3("internal error: out of range error");
               goto common_error;

             case 131:
               VAR_27 = FUNC_3("internal error: unsupported relocation error");
               goto common_error;

             case 132:
               VAR_27 = FUNC_3("internal error: dangerous error");
               goto common_error;

             default:
               VAR_27 = FUNC_3("internal error: unknown error");


             common_error:
               if (!((*VAR_5->callbacks->warning)
                     (VAR_5, VAR_27, VAR_26, VAR_6, VAR_7,
                      VAR_14->r_offset)))
                 return VAR_0;
               break;
            }
        }
    }

  return VAR_1;
}
