
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_31__ {char const* string; } ;
struct TYPE_34__ {scalar_t__ value; TYPE_15__* section; } ;
struct TYPE_33__ {TYPE_2__* p; } ;
struct TYPE_35__ {TYPE_4__ def; TYPE_3__ c; } ;
struct TYPE_36__ {scalar_t__ type; TYPE_1__ root; TYPE_5__ u; } ;
struct xcoff_link_hash_entry {int indx; int ldindx; TYPE_6__ root; } ;
struct xcoff_final_link_info {int ldrel; TYPE_13__* section_info; TYPE_17__* info; } ;
struct internal_reloc {int r_symndx; int r_type; int r_size; scalar_t__ r_vaddr; } ;
struct internal_ldrel {int l_symndx; int l_rtype; size_t l_rsecnm; scalar_t__ l_vaddr; } ;
struct TYPE_25__ {TYPE_10__* p; } ;
struct TYPE_26__ {TYPE_11__ reloc; } ;
struct bfd_link_order {scalar_t__ type; scalar_t__ offset; TYPE_12__ u; } ;
struct TYPE_28__ {int type; int bitsize; scalar_t__ complain_on_overflow; int name; } ;
typedef TYPE_14__ reloc_howto_type ;
typedef int file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_29__ {scalar_t__ output_offset; size_t target_index; int reloc_count; TYPE_7__* output_section; scalar_t__ vma; } ;
typedef TYPE_15__ asection ;
struct TYPE_39__ {int name; } ;
struct TYPE_38__ {int (* reloc_overflow ) (TYPE_17__*,int *,int ,int ,scalar_t__,int *,int *,scalar_t__) ;int (* unattached_reloc ) (TYPE_17__*,int ,int *,int *,scalar_t__) ;} ;
struct TYPE_37__ {scalar_t__ vma; char* name; } ;
struct TYPE_32__ {TYPE_15__* section; } ;
struct TYPE_30__ {TYPE_8__* callbacks; } ;
struct TYPE_27__ {struct xcoff_link_hash_entry** rel_hashes; struct internal_reloc* relocs; } ;
struct TYPE_24__ {scalar_t__ addend; TYPE_9__ u; int reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (TYPE_14__*,int *,scalar_t__,int *) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_14__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 TYPE_14__* FUNC_6 (int *,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_15__*,void*,int ,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_17__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,struct internal_ldrel*,int ) ;
 int * FUNC_12 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct internal_reloc*,int ,int) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (TYPE_17__*,int ,int *,int *,scalar_t__) ;
 int FUNC_17 (TYPE_17__*,int *,int ,int ,scalar_t__,int *,int *,scalar_t__) ;
 int FUNC_18 (int ,int ,char const*) ;
 int FUNC_19 (int ,int ,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_20 (bfd *VAR_9,
   struct xcoff_final_link_info *VAR_10,
   asection *VAR_11,
   struct bfd_link_order *VAR_12)
{
  reloc_howto_type *VAR_13;
  struct xcoff_link_hash_entry *VAR_14;
  asection *VAR_15;
  bfd_vma VAR_16;
  bfd_vma VAR_17;
  struct internal_reloc *VAR_18;
  struct xcoff_link_hash_entry **VAR_19;
  struct internal_ldrel VAR_20;

  if (VAR_12->type == VAR_7)




    FUNC_3 ();

  VAR_13 = FUNC_6 (VAR_9, VAR_12->u.reloc.p->reloc);
  if (VAR_13 == ((void*)0))
    {
      FUNC_7 (VAR_2);
      return VAR_0;
    }

  VAR_14 = ((struct xcoff_link_hash_entry *)
       FUNC_9 (VAR_9, VAR_10->info,
         VAR_12->u.reloc.p->u.name,
         VAR_0, VAR_0, VAR_1));
  if (VAR_14 == ((void*)0))
    {
      if (! ((*VAR_10->info->callbacks->unattached_reloc)
      (VAR_10->info, VAR_12->u.reloc.p->u.name, ((void*)0), ((void*)0), (bfd_vma) 0)))
 return VAR_0;
      return VAR_1;
    }

  if (VAR_14->root.type == VAR_4)
    {
      VAR_15 = VAR_14->root.u.c.p->section;
      VAR_16 = 0;
    }
  else if (VAR_14->root.type == VAR_5
    || VAR_14->root.type == VAR_6)
    {
      VAR_15 = VAR_14->root.u.def.section;
      VAR_16 = VAR_14->root.u.def.value;
    }
  else
    {
      VAR_15 = ((void*)0);
      VAR_16 = 0;
    }

  VAR_17 = VAR_12->u.reloc.p->addend;
  if (VAR_15 != ((void*)0))
    VAR_17 += (VAR_15->output_section->vma
        + VAR_15->output_offset
        + VAR_16);

  if (VAR_17 != 0)
    {
      bfd_size_type VAR_21;
      bfd_byte *VAR_22;
      bfd_reloc_status_type VAR_23;
      bfd_boolean VAR_24;

      VAR_21 = FUNC_5 (VAR_13);
      VAR_22 = FUNC_12 (VAR_21);
      if (VAR_22 == ((void*)0))
 return VAR_0;

      VAR_23 = FUNC_2 (VAR_13, VAR_9, VAR_17, VAR_22);
      switch (VAR_23)
 {
 case 130:
   break;
 default:
 case 129:
   FUNC_3 ();
 case 128:
   if (! ((*VAR_10->info->callbacks->reloc_overflow)
   (VAR_10->info, ((void*)0), VAR_12->u.reloc.p->u.name,
    VAR_13->name, VAR_17, ((void*)0), ((void*)0), (bfd_vma) 0)))
     {
       FUNC_13 (VAR_22);
       return VAR_0;
     }
   break;
 }
      VAR_24 = FUNC_8 (VAR_9, VAR_11, (void *) VAR_22,
         (file_ptr) VAR_12->offset, VAR_21);
      FUNC_13 (VAR_22);
      if (! VAR_24)
 return VAR_0;
    }



  VAR_18 = (VAR_10->section_info[VAR_11->target_index].relocs
   + VAR_11->reloc_count);
  VAR_19 = (VAR_10->section_info[VAR_11->target_index].rel_hashes
    + VAR_11->reloc_count);

  FUNC_14 (VAR_18, 0, sizeof (struct internal_reloc));
  *VAR_19 = ((void*)0);

  VAR_18->r_vaddr = VAR_11->vma + VAR_12->offset;

  if (VAR_14->indx >= 0)
    VAR_18->r_symndx = VAR_14->indx;
  else
    {

      VAR_14->indx = -2;
      *VAR_19 = VAR_14;
      VAR_18->r_symndx = 0;
    }

  VAR_18->r_type = VAR_13->type;
  VAR_18->r_size = VAR_13->bitsize - 1;
  if (VAR_13->complain_on_overflow == VAR_8)
    VAR_18->r_size |= 0x80;

  ++VAR_11->reloc_count;



  VAR_20.l_vaddr = VAR_18->r_vaddr;

  if (VAR_15 != ((void*)0))
    {
      const char *VAR_25;

      VAR_25 = VAR_15->output_section->name;

      if (FUNC_15 (VAR_25, ".text") == 0)
 VAR_20.l_symndx = 0;
      else if (FUNC_15 (VAR_25, ".data") == 0)
 VAR_20.l_symndx = 1;
      else if (FUNC_15 (VAR_25, ".bss") == 0)
 VAR_20.l_symndx = 2;
      else
 {
   FUNC_1)
     (FUNC_0("%s: loader reloc in unrecognized section `%s'"),
      FUNC_4 (VAR_9), VAR_25);
   FUNC_7 (VAR_3);
   return VAR_0;
 }
    }
  else
    {
      if (VAR_14->ldindx < 0)
 {
   FUNC_1)
     (FUNC_0("%s: `%s' in loader reloc but not loader sym"),
      FUNC_4 (VAR_9),
      VAR_14->root.root.string);
   FUNC_7 (VAR_2);
   return VAR_0;
 }
      VAR_20.l_symndx = VAR_14->ldindx;
    }

  VAR_20.l_rtype = (VAR_18->r_size << 8) | VAR_18->r_type;
  VAR_20.l_rsecnm = VAR_11->target_index;
  FUNC_11 (VAR_9, &VAR_20, VAR_10->ldrel);
  VAR_10->ldrel += FUNC_10(VAR_9);

  return VAR_1;
}
