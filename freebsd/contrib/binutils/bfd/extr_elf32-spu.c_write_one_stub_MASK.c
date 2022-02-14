
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


struct TYPE_24__ {char* string; } ;
struct spu_stub_hash_entry {int target_off; int off; int delta; TYPE_7__ root; TYPE_11__* target_section; } ;
struct spu_link_hash_table {int elf; scalar_t__ emit_stub_syms; int stub_overflow; TYPE_6__* ovly_load; TYPE_11__* stub; } ;
struct TYPE_25__ {int value; TYPE_11__* section; } ;
struct TYPE_26__ {TYPE_8__ def; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_9__ u; } ;
struct elf_link_hash_entry {int ref_regular; int def_regular; int ref_regular_nonweak; int forced_local; scalar_t__ non_elf; int type; scalar_t__ size; TYPE_10__ root; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_15__ {int output_offset; int contents; int owner; TYPE_13__* output_section; } ;
typedef TYPE_11__ asection ;
struct TYPE_20__ {int value; TYPE_2__* section; } ;
struct TYPE_21__ {TYPE_3__ def; } ;
struct TYPE_22__ {TYPE_4__ u; } ;
struct TYPE_23__ {TYPE_5__ root; } ;
struct TYPE_19__ {int output_offset; TYPE_1__* output_section; } ;
struct TYPE_18__ {int vma; } ;
struct TYPE_17__ {int vma; } ;
struct TYPE_16__ {unsigned int ovl_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 struct elf_link_hash_entry* FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 TYPE_12__* FUNC_5 (TYPE_13__*) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct bfd_hash_entry *VAR_11, void *VAR_12)
{
  struct spu_stub_hash_entry *VAR_13 = (struct spu_stub_hash_entry *) VAR_11;
  struct spu_link_hash_table *VAR_14 = VAR_12;
  asection *VAR_15 = VAR_14->stub;
  asection *VAR_16 = VAR_13->target_section;
  unsigned int VAR_17;
  bfd_vma VAR_18;

  VAR_18 = VAR_13->target_off + VAR_16->output_offset + VAR_16->output_section->vma;
  FUNC_1 (VAR_15->owner, VAR_3 + ((VAR_18 << 7) & 0x01ffff80),
       VAR_15->contents + VAR_13->off);
  VAR_18 = VAR_13->delta + 4;
  FUNC_1 (VAR_15->owner, VAR_0 + ((VAR_18 << 5) & 0x007fff80),
       VAR_15->contents + VAR_13->off + 4);


  if (VAR_13->delta == 0)
    {
      FUNC_1 (VAR_15->owner, VAR_4,
    VAR_15->contents + VAR_13->off + 4);

      VAR_17 = FUNC_5 (VAR_16->output_section)->ovl_index;
      FUNC_1 (VAR_15->owner, VAR_2 + ((VAR_17 << 7) & 0x01ffff80),
    VAR_15->contents + VAR_13->off + 8);

      VAR_18 = (VAR_14->ovly_load->root.u.def.section->output_section->vma
      + VAR_14->ovly_load->root.u.def.section->output_offset
      + VAR_14->ovly_load->root.u.def.value
      - (VAR_15->output_section->vma
  + VAR_15->output_offset
  + VAR_13->off + 12));

      if (VAR_18 + 0x20000 >= 0x40000)
 VAR_14->stub_overflow = VAR_8;

      FUNC_1 (VAR_15->owner, VAR_0 + ((VAR_18 << 5) & 0x007fff80),
    VAR_15->contents + VAR_13->off + 12);
    }

  if (VAR_14->emit_stub_syms)
    {
      struct elf_link_hash_entry *VAR_19;
      size_t VAR_20, VAR_21;
      char *VAR_22;

      VAR_20 = sizeof ("00000000.ovl_call.") - 1;
      VAR_21 = FUNC_6 (VAR_13->root.string);
      VAR_22 = FUNC_0 (VAR_20 + VAR_21 + 1);
      if (VAR_22 == ((void*)0))
 return VAR_1;
      FUNC_4 (VAR_22, "00000000.ovl_call.", VAR_20);
      FUNC_4 (VAR_22 + VAR_20, VAR_13->root.string, VAR_21 + 1);
      VAR_19 = FUNC_2 (&VAR_14->elf, VAR_22, VAR_8, VAR_8, VAR_1);
      FUNC_3 (VAR_22);
      if (VAR_19 == ((void*)0))
 return VAR_1;
      if (VAR_19->root.type == VAR_10)
 {
   VAR_19->root.type = VAR_9;
   VAR_19->root.u.def.section = VAR_15;
   VAR_19->root.u.def.value = VAR_13->off;
   VAR_19->size = (VAR_13->delta == 0
       ? VAR_5 + VAR_6 : VAR_5);
   VAR_19->type = VAR_7;
   VAR_19->ref_regular = 1;
   VAR_19->def_regular = 1;
   VAR_19->ref_regular_nonweak = 1;
   VAR_19->forced_local = 1;
   VAR_19->non_elf = 0;
 }
    }

  return VAR_8;
}
