
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_18__ {scalar_t__ string; } ;
struct ppc_stub_hash_entry {scalar_t__ stub_type; scalar_t__ addend; int target_value; TYPE_9__* stub_sec; TYPE_16__* id_sec; TYPE_11__ root; TYPE_10__* target_section; TYPE_3__* h; } ;
struct ppc_link_hash_table {scalar_t__ stub_iteration; TYPE_15__* stub_group; TYPE_14__* brlt; TYPE_12__* relbrlt; int stub_error; int branch_hash_table; TYPE_6__* plt; } ;
struct ppc_branch_hash_entry {scalar_t__ iter; int offset; } ;
struct TYPE_27__ {int offset; } ;
struct plt_entry {scalar_t__ addend; TYPE_4__ plt; struct plt_entry* next; } ;
struct bfd_link_info {scalar_t__ emitrelocations; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_32__ {int size; int output_offset; int reloc_count; int flags; TYPE_8__* output_section; } ;
struct TYPE_31__ {int vma; } ;
struct TYPE_30__ {int vma; } ;
struct TYPE_29__ {int output_offset; TYPE_5__* output_section; } ;
struct TYPE_28__ {int vma; int owner; } ;
struct TYPE_24__ {struct plt_entry* plist; } ;
struct TYPE_25__ {TYPE_1__ plt; } ;
struct TYPE_26__ {TYPE_2__ elf; } ;
struct TYPE_23__ {size_t id; } ;
struct TYPE_22__ {int toc_off; } ;
struct TYPE_21__ {int size; int reloc_count; int output_offset; TYPE_13__* output_section; int flags; } ;
struct TYPE_20__ {int vma; int owner; } ;
struct TYPE_19__ {int size; } ;
struct TYPE_17__ {int output_offset; size_t id; TYPE_7__* output_section; } ;
typedef int Elf64_External_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 struct ppc_branch_hash_entry* FUNC_5 (int *,scalar_t__,int ,int ) ;
 struct ppc_link_hash_table* FUNC_6 (struct bfd_link_info*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (struct bfd_hash_entry *VAR_9, void *VAR_10)
{
  struct ppc_stub_hash_entry *VAR_11;
  struct bfd_link_info *VAR_12;
  struct ppc_link_hash_table *VAR_13;
  bfd_vma VAR_14;
  int VAR_15;


  VAR_11 = (struct ppc_stub_hash_entry *) VAR_9;
  VAR_12 = VAR_10;

  VAR_13 = FUNC_6 (VAR_12);

  if (VAR_11->stub_type == VAR_8)
    {
      struct plt_entry *VAR_16;
      VAR_14 = (bfd_vma) -1;
      for (VAR_16 = VAR_11->h->elf.plt.plist; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
 if (VAR_16->addend == VAR_11->addend)
   {
     VAR_14 = VAR_16->plt.offset & ~(bfd_vma) 1;
     break;
   }
      if (VAR_14 >= (bfd_vma) -2)
 FUNC_3 ();
      VAR_14 += (VAR_13->plt->output_offset
       + VAR_13->plt->output_section->vma
       - FUNC_4 (VAR_13->plt->output_section->owner)
       - VAR_13->stub_group[VAR_11->id_sec->id].toc_off);

      VAR_15 = VAR_1;
      if (FUNC_0 (VAR_14) == 0)
 VAR_15 -= 4;
      if (FUNC_0 (VAR_14 + 16) != FUNC_0 (VAR_14))
 VAR_15 += 4;
    }
  else
    {


      bfd_vma VAR_17 = 0;

      VAR_14 = (VAR_11->target_value
      + VAR_11->target_section->output_offset
      + VAR_11->target_section->output_section->vma);
      VAR_14 -= (VAR_11->stub_sec->size
       + VAR_11->stub_sec->output_offset
       + VAR_11->stub_sec->output_section->vma);



      if (VAR_11->stub_type >= VAR_6)
 VAR_11->stub_type += VAR_4 - VAR_6;

      VAR_15 = 4;
      if (VAR_11->stub_type == VAR_5)
 {
   VAR_17 = (VAR_13->stub_group[VAR_11->target_section->id].toc_off
     - VAR_13->stub_group[VAR_11->id_sec->id].toc_off);
   VAR_15 = 12;
   if (FUNC_0 (VAR_17) != 0)
     VAR_15 = 16;
   VAR_14 -= VAR_15 - 4;
 }


      if (VAR_14 + (1 << 25) >= (bfd_vma) (1 << 26))
 {
   struct ppc_branch_hash_entry *VAR_18;
   unsigned int VAR_19;

   VAR_18 = FUNC_5 (&VAR_13->branch_hash_table,
          VAR_11->root.string + 9,
          VAR_3, VAR_0);
   if (VAR_18 == ((void*)0))
     {
       FUNC_2) (FUNC_1("can't build branch stub `%s'"),
         VAR_11->root.string);
       VAR_13->stub_error = VAR_3;
       return VAR_0;
     }

   if (VAR_18->iter != VAR_13->stub_iteration)
     {
       VAR_18->iter = VAR_13->stub_iteration;
       VAR_18->offset = VAR_13->brlt->size;
       VAR_13->brlt->size += 8;

       if (VAR_13->relbrlt != ((void*)0))
  VAR_13->relbrlt->size += sizeof (Elf64_External_Rela);
       else if (VAR_12->emitrelocations)
  {
    VAR_13->brlt->reloc_count += 1;
    VAR_13->brlt->flags |= VAR_2;
  }
     }

   VAR_11->stub_type += VAR_6 - VAR_4;
   VAR_14 = (VAR_18->offset
   + VAR_13->brlt->output_offset
   + VAR_13->brlt->output_section->vma
   - FUNC_4 (VAR_13->brlt->output_section->owner)
   - VAR_13->stub_group[VAR_11->id_sec->id].toc_off);

   VAR_19 = VAR_14;
   if (VAR_11->stub_type != VAR_7)
     {
       VAR_15 = 12;
       if (FUNC_0 (VAR_19) != 0)
  VAR_15 = 16;
     }
   else
     {
       VAR_15 = 20;
       if (FUNC_0 (VAR_19) != 0)
  VAR_15 += 4;

       if (FUNC_0 (VAR_17) != 0)
  VAR_15 += 4;
     }
 }
      else if (VAR_12->emitrelocations)
 {
   VAR_11->stub_sec->reloc_count += 1;
   VAR_11->stub_sec->flags |= VAR_2;
 }
    }

  VAR_11->stub_sec->size += VAR_15;
  return VAR_3;
}
