
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_21__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_31__ {TYPE_12__* section; } ;
struct TYPE_33__ {TYPE_1__ def; } ;
struct TYPE_34__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int indx; TYPE_3__ root; } ;
struct elf_backend_data {TYPE_10__* s; } ;
struct TYPE_38__ {TYPE_6__* p; } ;
struct TYPE_39__ {TYPE_7__ reloc; } ;
struct bfd_link_order {scalar_t__ type; scalar_t__ offset; TYPE_8__ u; } ;
struct bfd_link_info {int relocatable; TYPE_9__* callbacks; } ;
struct TYPE_26__ {int type; int name; scalar_t__ partial_inplace; } ;
typedef TYPE_11__ reloc_howto_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_27__ {scalar_t__ output_offset; scalar_t__ vma; TYPE_4__* output_section; } ;
typedef TYPE_12__ asection ;
struct TYPE_40__ {int (* reloc_overflow ) (struct bfd_link_info*,int *,char const*,int ,scalar_t__,int *,int *,scalar_t__) ;int (* unattached_reloc ) (struct bfd_link_info*,char*,int *,int *,int ) ;} ;
struct TYPE_36__ {char* name; TYPE_21__* section; } ;
struct TYPE_37__ {scalar_t__ addend; TYPE_5__ u; int reloc; } ;
struct TYPE_35__ {long target_index; scalar_t__ vma; } ;
struct TYPE_32__ {long target_index; } ;
struct TYPE_28__ {scalar_t__ sh_type; int * contents; } ;
struct TYPE_30__ {int rel_count; int rel_count2; TYPE_13__ rel_hdr; struct elf_link_hash_entry** rel_hashes; } ;
struct TYPE_29__ {scalar_t__ r_addend; scalar_t__ r_info; scalar_t__ r_offset; } ;
struct TYPE_25__ {unsigned int int_rels_per_ext_rel; int arch_size; int sizeof_rel; int sizeof_rela; int (* swap_reloca_out ) (int *,TYPE_14__*,int *) ;int (* swap_reloc_out ) (int *,TYPE_14__*,int *) ;} ;
typedef TYPE_13__ Elf_Internal_Shdr ;
typedef TYPE_14__ Elf_Internal_Rela ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (long,int ) ;
 scalar_t__ FUNC_2 (long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_11__*,int *,scalar_t__,int *) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (TYPE_11__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 TYPE_11__* FUNC_6 (int *,int ) ;
 char* FUNC_7 (int *,TYPE_21__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_12__*,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int *,struct bfd_link_info*,char*,int ,int ,int ) ;
 int * FUNC_11 (int ) ;
 TYPE_17__* FUNC_12 (TYPE_12__*) ;
 int FUNC_13 (int *) ;
 struct elf_backend_data* FUNC_14 (int *) ;
 int FUNC_15 (struct bfd_link_info*,char*,int *,int *,int ) ;
 int FUNC_16 (struct bfd_link_info*,int *,char const*,int ,scalar_t__,int *,int *,scalar_t__) ;
 int FUNC_17 (int *,TYPE_14__*,int *) ;
 int FUNC_18 (int *,TYPE_14__*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_19 (bfd *VAR_8,
        struct bfd_link_info *VAR_9,
        asection *VAR_10,
        struct bfd_link_order *VAR_11)
{
  reloc_howto_type *VAR_12;
  long VAR_13;
  bfd_vma VAR_14;
  bfd_vma VAR_15;
  struct elf_link_hash_entry **VAR_16;
  Elf_Internal_Shdr *VAR_17;
  const struct elf_backend_data *VAR_18 = FUNC_14 (VAR_8);
  Elf_Internal_Rela VAR_19[VAR_1];
  bfd_byte *VAR_20;
  unsigned int VAR_21;

  VAR_12 = FUNC_6 (VAR_8, VAR_11->u.reloc.p->reloc);
  if (VAR_12 == ((void*)0))
    {
      FUNC_8 (VAR_4);
      return VAR_0;
    }

  VAR_15 = VAR_11->u.reloc.p->addend;


  VAR_16 = (FUNC_12 (VAR_10)->rel_hashes
    + FUNC_12 (VAR_10)->rel_count
    + FUNC_12 (VAR_10)->rel_count2);
  if (VAR_11->type == VAR_7)
    {
      VAR_13 = VAR_11->u.reloc.p->u.section->target_index;
      FUNC_0 (VAR_13 != 0);
      *VAR_16 = ((void*)0);
    }
  else
    {
      struct elf_link_hash_entry *VAR_22;



      VAR_22 = ((struct elf_link_hash_entry *)
    FUNC_10 (VAR_8, VAR_9,
      VAR_11->u.reloc.p->u.name,
      VAR_0, VAR_0, VAR_3));
      if (VAR_22 != ((void*)0)
   && (VAR_22->root.type == VAR_5
       || VAR_22->root.type == VAR_6))
 {
   asection *VAR_23;

   VAR_23 = VAR_22->root.u.def.section;
   VAR_13 = VAR_23->output_section->target_index;
   *VAR_16 = ((void*)0);



   VAR_15 += VAR_23->output_section->vma + VAR_23->output_offset;
 }
      else if (VAR_22 != ((void*)0))
 {


   VAR_22->indx = -2;
   *VAR_16 = VAR_22;
   VAR_13 = 0;
 }
      else
 {
   if (! ((*VAR_9->callbacks->unattached_reloc)
   (VAR_9, VAR_11->u.reloc.p->u.name, ((void*)0), ((void*)0), 0)))
     return VAR_0;
   VAR_13 = 0;
 }
    }



  if (VAR_12->partial_inplace && VAR_15 != 0)
    {
      bfd_size_type VAR_24;
      bfd_reloc_status_type VAR_25;
      bfd_byte *VAR_26;
      bfd_boolean VAR_27;
      const char *VAR_28;

      VAR_24 = FUNC_5 (VAR_12);
      VAR_26 = FUNC_11 (VAR_24);
      if (VAR_26 == ((void*)0))
 return VAR_0;
      VAR_25 = FUNC_3 (VAR_12, VAR_8, VAR_15, VAR_26);
      switch (VAR_25)
 {
 case 130:
   break;

 default:
 case 129:
   FUNC_4 ();

 case 128:
   if (VAR_11->type == VAR_7)
     VAR_28 = FUNC_7 (VAR_8,
      VAR_11->u.reloc.p->u.section);
   else
     VAR_28 = VAR_11->u.reloc.p->u.name;
   if (! ((*VAR_9->callbacks->reloc_overflow)
   (VAR_9, ((void*)0), VAR_28, VAR_12->name, VAR_15, ((void*)0),
    ((void*)0), (bfd_vma) 0)))
     {
       FUNC_13 (VAR_26);
       return VAR_0;
     }
   break;
 }
      VAR_27 = FUNC_9 (VAR_8, VAR_10, VAR_26,
         VAR_11->offset, VAR_24);
      FUNC_13 (VAR_26);
      if (! VAR_27)
 return VAR_0;
    }




  VAR_14 = VAR_11->offset;
  if (! VAR_9->relocatable)
    VAR_14 += VAR_10->vma;

  for (VAR_21 = 0; VAR_21 < VAR_18->s->int_rels_per_ext_rel; VAR_21++)
    {
      VAR_19[VAR_21].r_offset = VAR_14;
      VAR_19[VAR_21].r_info = 0;
      VAR_19[VAR_21].r_addend = 0;
    }
  if (VAR_18->s->arch_size == 32)
    VAR_19[0].r_info = FUNC_1 (VAR_13, VAR_12->type);
  else
    VAR_19[0].r_info = FUNC_2 (VAR_13, VAR_12->type);

  VAR_17 = &FUNC_12 (VAR_10)->rel_hdr;
  VAR_20 = VAR_17->contents;
  if (VAR_17->sh_type == VAR_2)
    {
      VAR_20 += (FUNC_12 (VAR_10)->rel_count
        * VAR_18->s->sizeof_rel);
      (*VAR_18->s->swap_reloc_out) (VAR_8, VAR_19, VAR_20);
    }
  else
    {
      VAR_19[0].r_addend = VAR_15;
      VAR_20 += (FUNC_12 (VAR_10)->rel_count
        * VAR_18->s->sizeof_rela);
      (*VAR_18->s->swap_reloca_out) (VAR_8, VAR_19, VAR_20);
    }

  ++FUNC_12 (VAR_10)->rel_count;

  return VAR_3;
}
