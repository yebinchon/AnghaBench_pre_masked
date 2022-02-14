
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct ppc_link_hash_table {int * stub_count; void* stub_error; TYPE_6__* glink; TYPE_11__* stub_bfd; TYPE_5__* relbrlt; int stub_hash_table; TYPE_4__* brlt; TYPE_2__* plt; int elf; void* emit_stub_syms; } ;
struct TYPE_20__ {int value; TYPE_6__* section; } ;
struct TYPE_21__ {TYPE_7__ def; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_8__ u; } ;
struct elf_link_hash_entry {int ref_regular; int def_regular; int ref_regular_nonweak; int forced_local; scalar_t__ non_elf; TYPE_9__ root; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef void* bfd_boolean ;
struct TYPE_12__ {int flags; scalar_t__ size; scalar_t__ rawsize; struct TYPE_12__* next; int * contents; } ;
typedef TYPE_10__ asection ;
struct TYPE_19__ {int size; int rawsize; int * contents; int owner; scalar_t__ output_offset; TYPE_3__* output_section; } ;
struct TYPE_18__ {scalar_t__ size; scalar_t__ reloc_count; int * contents; TYPE_11__* owner; } ;
struct TYPE_17__ {scalar_t__ size; int * contents; TYPE_11__* owner; } ;
struct TYPE_16__ {scalar_t__ vma; } ;
struct TYPE_15__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_14__ {scalar_t__ vma; } ;
struct TYPE_13__ {TYPE_10__* sections; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_17 ;
 void* VAR_18 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,struct bfd_link_info*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,scalar_t__,int *) ;
 void* FUNC_8 (TYPE_11__*,scalar_t__) ;
 struct elf_link_hash_entry* FUNC_9 (int *,char*,void*,void*,void*) ;
 int VAR_21 ;
 struct ppc_link_hash_table* FUNC_10 (struct bfd_link_info*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_11 (char*,char*,int,char*,int ,int ,int ,int ,int ) ;
 int FUNC_12 (char*) ;

bfd_boolean
FUNC_13 (bfd_boolean VAR_27,
         struct bfd_link_info *VAR_28,
         char **VAR_29)
{
  struct ppc_link_hash_table *VAR_30 = FUNC_10 (VAR_28);
  asection *VAR_31;
  bfd_byte *VAR_32;
  int VAR_33 = 0;

  VAR_30->emit_stub_syms = VAR_27;


  for (VAR_31 = VAR_30->stub_bfd->sections;
       VAR_31 != ((void*)0);
       VAR_31 = VAR_31->next)
    if ((VAR_31->flags & VAR_17) == 0
 && VAR_31->size != 0)
      {
 VAR_31->contents = FUNC_8 (VAR_30->stub_bfd, VAR_31->size);
 if (VAR_31->contents == ((void*)0))
   return VAR_4;


 VAR_31->rawsize = VAR_31->size;
 VAR_31->size = 0;
      }

  if (VAR_30->glink != ((void*)0) && VAR_30->glink->size != 0)
    {
      unsigned int VAR_34;
      bfd_vma VAR_35;


      if (VAR_30->emit_stub_syms)
 {
   struct elf_link_hash_entry *VAR_36;
   VAR_36 = FUNC_9 (&VAR_30->elf, "__glink", VAR_18, VAR_4, VAR_4);
   if (VAR_36 == ((void*)0))
     return VAR_4;
   if (VAR_36->root.type == VAR_20)
     {
       VAR_36->root.type = VAR_19;
       VAR_36->root.u.def.section = VAR_30->glink;
       VAR_36->root.u.def.value = 8;
       VAR_36->ref_regular = 1;
       VAR_36->def_regular = 1;
       VAR_36->ref_regular_nonweak = 1;
       VAR_36->forced_local = 1;
       VAR_36->non_elf = 0;
     }
 }
      VAR_32 = VAR_30->glink->contents;
      VAR_35 = (VAR_30->plt->output_section->vma
       + VAR_30->plt->output_offset
       - (VAR_30->glink->output_section->vma
   + VAR_30->glink->output_offset
   + 16));
      FUNC_7 (VAR_30->glink->owner, VAR_35, VAR_32);
      VAR_32 += 8;
      FUNC_6 (VAR_30->glink->owner, VAR_12, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_1, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_11, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_8, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_14, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_0, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_6, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_7 | 8, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_13, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_6 | 16, VAR_32);
      VAR_32 += 4;
      FUNC_6 (VAR_30->glink->owner, VAR_2, VAR_32);
      VAR_32 += 4;
      while (VAR_32 - VAR_30->glink->contents < VAR_5)
 {
   FUNC_6 (VAR_30->glink->owner, VAR_15, VAR_32);
   VAR_32 += 4;
 }


      VAR_34 = 0;
      while (VAR_32 < VAR_30->glink->contents + VAR_30->glink->size)
 {
   if (VAR_34 < 0x8000)
     {
       FUNC_6 (VAR_30->glink->owner, VAR_10 | VAR_34, VAR_32);
       VAR_32 += 4;
     }
   else
     {
       FUNC_6 (VAR_30->glink->owner, VAR_9 | FUNC_0 (VAR_34), VAR_32);
       VAR_32 += 4;
       FUNC_6 (VAR_30->glink->owner, VAR_16 | FUNC_1 (VAR_34), VAR_32);
       VAR_32 += 4;
     }
   FUNC_6 (VAR_30->glink->owner,
        VAR_3 | ((VAR_30->glink->contents - VAR_32 + 8) & 0x3fffffc), VAR_32);
   VAR_34++;
   VAR_32 += 4;
 }
      VAR_30->glink->rawsize = VAR_32 - VAR_30->glink->contents;
    }

  if (VAR_30->brlt->size != 0)
    {
      VAR_30->brlt->contents = FUNC_8 (VAR_30->brlt->owner,
      VAR_30->brlt->size);
      if (VAR_30->brlt->contents == ((void*)0))
 return VAR_4;
    }
  if (VAR_30->relbrlt != ((void*)0) && VAR_30->relbrlt->size != 0)
    {
      VAR_30->relbrlt->contents = FUNC_8 (VAR_30->relbrlt->owner,
         VAR_30->relbrlt->size);
      if (VAR_30->relbrlt->contents == ((void*)0))
 return VAR_4;
    }


  FUNC_4 (&VAR_30->stub_hash_table, VAR_21, VAR_28);

  if (VAR_30->relbrlt != ((void*)0))
    VAR_30->relbrlt->reloc_count = 0;

  for (VAR_31 = VAR_30->stub_bfd->sections;
       VAR_31 != ((void*)0);
       VAR_31 = VAR_31->next)
    if ((VAR_31->flags & VAR_17) == 0)
      {
 VAR_33 += 1;
 if (VAR_31->rawsize != VAR_31->size)
   break;
      }

  if (VAR_31 != ((void*)0)
      || VAR_30->glink->rawsize != VAR_30->glink->size)
    {
      VAR_30->stub_error = VAR_18;
      FUNC_3) (FUNC_2("stubs don't match calculated size"));
    }

  if (VAR_30->stub_error)
    return VAR_4;

  if (VAR_29 != ((void*)0))
    {
      *VAR_29 = FUNC_5 (500);
      if (*VAR_29 == ((void*)0))
 return VAR_4;

      FUNC_11 (*VAR_29, FUNC_2("linker stubs in %u group%s\n"
    "  branch       %lu\n"
    "  toc adjust   %lu\n"
    "  long branch  %lu\n"
    "  long toc adj %lu\n"
    "  plt call     %lu"),
        VAR_33,
        VAR_33 == 1 ? "" : "s",
        VAR_30->stub_count[VAR_22 - 1],
        VAR_30->stub_count[VAR_23 - 1],
        VAR_30->stub_count[VAR_24 - 1],
        VAR_30->stub_count[VAR_25 - 1],
        VAR_30->stub_count[VAR_26 - 1]);
    }
  return VAR_18;
}
