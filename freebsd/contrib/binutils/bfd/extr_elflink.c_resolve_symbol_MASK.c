
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct elf_final_link_info {TYPE_2__* info; TYPE_9__** sections; TYPE_10__* internal_syms; } ;
struct TYPE_25__ {char* string; } ;
struct TYPE_22__ {scalar_t__ value; TYPE_4__* section; } ;
struct TYPE_23__ {TYPE_5__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_8__ root; TYPE_6__ u; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_26__ {TYPE_1__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_9__ asection ;
struct TYPE_24__ {scalar_t__ vma; } ;
struct TYPE_21__ {scalar_t__ output_offset; TYPE_3__* output_section; } ;
struct TYPE_20__ {scalar_t__ vma; } ;
struct TYPE_19__ {int hash; } ;
struct TYPE_18__ {char* name; scalar_t__ vma; } ;
struct TYPE_17__ {scalar_t__ output_offset; TYPE_7__* output_section; } ;
struct TYPE_15__ {int sh_link; } ;
struct TYPE_16__ {TYPE_11__ symtab_hdr; } ;
struct TYPE_14__ {scalar_t__ st_shndx; scalar_t__ st_value; int st_name; int st_info; } ;
typedef TYPE_10__ Elf_Internal_Sym ;
typedef TYPE_11__ Elf_Internal_Shdr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_13__* VAR_5 ;
 char* FUNC_1 (int *,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct bfd_link_hash_entry* FUNC_2 (int ,char const*,int ,int ,int ) ;
 TYPE_12__* FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (const char * VAR_9,
  bfd * VAR_10,
  struct elf_final_link_info * VAR_11,
  bfd_vma * VAR_12,
  size_t VAR_13)
{
  Elf_Internal_Sym * VAR_14;
  struct bfd_link_hash_entry * VAR_15;
  const char * VAR_16 = ((void*)0);
  Elf_Internal_Shdr * VAR_17;
  asection * VAR_18 = ((void*)0);
  size_t VAR_19;

  VAR_17 = & FUNC_3 (VAR_10)->symtab_hdr;

  for (VAR_19 = 0; VAR_19 < VAR_13; ++ VAR_19)
    {
      VAR_14 = VAR_11->internal_syms + VAR_19;
      VAR_18 = VAR_11->sections [VAR_19];

      if (FUNC_0 (VAR_14->st_info) != VAR_3)
 continue;

      VAR_16 = FUNC_1 (VAR_10,
         VAR_17->sh_link,
         VAR_14->st_name);




      if (VAR_16 && FUNC_5 (VAR_16, VAR_9) == 0)
 {
   * VAR_12 = VAR_14->st_value;

   if (VAR_14->st_shndx > VAR_2 &&
       VAR_14->st_shndx < VAR_1)
     {






       * VAR_12 += VAR_18->output_offset + VAR_18->output_section->vma;
     }



   return VAR_4;
 }
    }


  VAR_15 = FUNC_2 (VAR_11->info->hash, VAR_9, VAR_0, VAR_0, VAR_4);
  if (!VAR_15)
    return VAR_0;

  if (VAR_15->type == VAR_7
      || VAR_15->type == VAR_8)
    {
      * VAR_12 = VAR_15->u.def.value
 + VAR_15->u.def.section->output_section->vma
 + VAR_15->u.def.section->output_offset;




      return VAR_4;
    }

  if (VAR_15->type == VAR_6)
    {
      *VAR_12 = VAR_15->u.def.value +
 VAR_5->output_section->vma +
 VAR_5->output_offset;




      return VAR_4;
    }

  return VAR_0;
}
