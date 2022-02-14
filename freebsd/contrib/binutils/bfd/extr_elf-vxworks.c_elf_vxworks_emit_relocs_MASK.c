
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ value; TYPE_7__* section; } ;
struct TYPE_18__ {TYPE_2__ def; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; int def_regular; scalar_t__ def_dynamic; } ;
struct elf_backend_data {TYPE_5__* s; } ;
typedef int bfd_boolean ;
struct TYPE_21__ {int flags; } ;
typedef TYPE_6__ bfd ;
struct TYPE_22__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
typedef TYPE_7__ asection ;
struct TYPE_23__ {int r_addend; int r_info; } ;
struct TYPE_20__ {int int_rels_per_ext_rel; } ;
struct TYPE_16__ {int target_index; } ;
typedef int Elf_Internal_Shdr ;
typedef TYPE_8__ Elf_Internal_Rela ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*,int *,TYPE_8__*,struct elf_link_hash_entry**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct elf_backend_data* FUNC_4 (TYPE_6__*) ;

bfd_boolean
FUNC_5 (bfd *VAR_4,
    asection *VAR_5,
    Elf_Internal_Shdr *VAR_6,
    Elf_Internal_Rela *VAR_7,
    struct elf_link_hash_entry **VAR_8)
{
  const struct elf_backend_data *VAR_9;
  Elf_Internal_Rela *VAR_10;
  Elf_Internal_Rela *VAR_11;
  int VAR_12;

  VAR_9 = FUNC_4 (VAR_4);

  VAR_10 = VAR_7;
  VAR_11 = VAR_10 + (FUNC_2 (VAR_6)
        * VAR_9->s->int_rels_per_ext_rel);
  while (VAR_10 < VAR_11)
    {
      if ((VAR_4->flags & (VAR_0|VAR_1))
   && *VAR_8
   && (*VAR_8)->def_dynamic
   && !(*VAR_8)->def_regular
   && ((*VAR_8)->root.type == VAR_2
       || (*VAR_8)->root.type == VAR_3)
   && (*VAR_8)->root.u.def.section->output_section != ((void*)0))
 {
   for (VAR_12 = 0; VAR_12 < VAR_9->s->int_rels_per_ext_rel; VAR_12++)
     {
       asection *VAR_13 = (*VAR_8)->root.u.def.section;
       int VAR_14 = VAR_13->output_section->target_index;

       VAR_10[VAR_12].r_info = FUNC_0 (VAR_14,
    FUNC_1 (VAR_10[VAR_12].r_info));
       VAR_10[VAR_12].r_addend += (*VAR_8)->root.u.def.value;
       VAR_10[VAR_12].r_addend += VAR_13->output_offset;
     }

   *VAR_8 = ((void*)0);
 }
      VAR_10 += VAR_9->s->int_rels_per_ext_rel;
      VAR_8++;
    }
  return FUNC_3 (VAR_4, VAR_5,
          VAR_6, VAR_7,
          VAR_8);
}
