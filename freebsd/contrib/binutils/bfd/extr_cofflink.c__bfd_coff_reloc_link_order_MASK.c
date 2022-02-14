
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct internal_reloc {int r_symndx; int r_type; scalar_t__ r_vaddr; } ;
struct coff_link_hash_entry {int indx; } ;
struct coff_final_link_info {TYPE_9__* info; TYPE_1__* section_info; } ;
struct TYPE_23__ {TYPE_4__* p; } ;
struct TYPE_24__ {TYPE_5__ reloc; } ;
struct bfd_link_order {scalar_t__ type; int offset; TYPE_6__ u; } ;
struct TYPE_25__ {int type; int name; } ;
typedef TYPE_7__ reloc_howto_type ;
typedef int file_ptr ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_26__ {size_t target_index; int reloc_count; scalar_t__ vma; } ;
typedef TYPE_8__ asection ;
struct TYPE_27__ {TYPE_2__* callbacks; } ;
struct TYPE_21__ {int name; int section; } ;
struct TYPE_22__ {scalar_t__ addend; TYPE_3__ u; int reloc; } ;
struct TYPE_20__ {int (* unattached_reloc ) (TYPE_9__*,int ,int *,TYPE_8__*,int ) ;int (* reloc_overflow ) (TYPE_9__*,int *,int ,int ,scalar_t__,int *,TYPE_8__*,int ) ;} ;
struct TYPE_19__ {struct coff_link_hash_entry** rel_hashes; struct internal_reloc* relocs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int *,int ,int *) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *) ;



 TYPE_7__* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_8__*,int *,int,int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_9__*,int ,int ,int ,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct internal_reloc*,int ,int) ;
 int FUNC_12 (TYPE_9__*,int *,int ,int ,scalar_t__,int *,TYPE_8__*,int ) ;
 int FUNC_13 (TYPE_9__*,int ,int *,TYPE_8__*,int ) ;

bfd_boolean
FUNC_14 (bfd *VAR_4,
       struct coff_final_link_info *VAR_5,
       asection *VAR_6,
       struct bfd_link_order *VAR_7)
{
  reloc_howto_type *VAR_8;
  struct internal_reloc *VAR_9;
  struct coff_link_hash_entry **VAR_10;

  VAR_8 = FUNC_4 (VAR_4, VAR_7->u.reloc.p->reloc);
  if (VAR_8 == ((void*)0))
    {
      FUNC_6 (VAR_2);
      return VAR_0;
    }

  if (VAR_7->u.reloc.p->addend != 0)
    {
      bfd_size_type VAR_11;
      bfd_byte *VAR_12;
      bfd_reloc_status_type VAR_13;
      bfd_boolean VAR_14;
      file_ptr VAR_15;

      VAR_11 = FUNC_2 (VAR_8);
      VAR_12 = FUNC_9 (VAR_11);
      if (VAR_12 == ((void*)0))
 return VAR_0;

      VAR_13 = FUNC_0 (VAR_8, VAR_4,
          (bfd_vma) VAR_7->u.reloc.p->addend, VAR_12);

      switch (VAR_13)
 {
 case 130:
   break;
 default:
 case 129:
   FUNC_1 ();
 case 128:
   if (! ((*VAR_5->info->callbacks->reloc_overflow)
   (VAR_5->info, ((void*)0),
    (VAR_7->type == VAR_3
     ? FUNC_5 (VAR_4,
           VAR_7->u.reloc.p->u.section)
     : VAR_7->u.reloc.p->u.name),
    VAR_8->name, VAR_7->u.reloc.p->addend,
    (bfd *) ((void*)0), (asection *) ((void*)0), (bfd_vma) 0)))
     {
       FUNC_10 (VAR_12);
       return VAR_0;
     }
   break;
 }
      VAR_15 = VAR_7->offset * FUNC_3 (VAR_4);
      VAR_14 = FUNC_7 (VAR_4, VAR_6, VAR_12,
                                     VAR_15, VAR_11);
      FUNC_10 (VAR_12);
      if (! VAR_14)
 return VAR_0;
    }



  VAR_9 = (VAR_5->section_info[VAR_6->target_index].relocs
   + VAR_6->reloc_count);
  VAR_10 = (VAR_5->section_info[VAR_6->target_index].rel_hashes
    + VAR_6->reloc_count);

  FUNC_11 (VAR_9, 0, sizeof (struct internal_reloc));
  *VAR_10 = ((void*)0);

  VAR_9->r_vaddr = VAR_6->vma + VAR_7->offset;

  if (VAR_7->type == VAR_3)
    {




      FUNC_1 ();
      *VAR_10 = ((void*)0);
      VAR_9->r_symndx = 0;
    }
  else
    {
      struct coff_link_hash_entry *VAR_16;

      VAR_16 = ((struct coff_link_hash_entry *)
    FUNC_8 (VAR_4, VAR_5->info,
      VAR_7->u.reloc.p->u.name,
      VAR_0, VAR_0, VAR_1));
      if (VAR_16 != ((void*)0))
 {
   if (VAR_16->indx >= 0)
     VAR_9->r_symndx = VAR_16->indx;
   else
     {


       VAR_16->indx = -2;
       *VAR_10 = VAR_16;
       VAR_9->r_symndx = 0;
     }
 }
      else
 {
   if (! ((*VAR_5->info->callbacks->unattached_reloc)
   (VAR_5->info, VAR_7->u.reloc.p->u.name, (bfd *) ((void*)0),
    (asection *) ((void*)0), (bfd_vma) 0)))
     return VAR_0;
   VAR_9->r_symndx = 0;
 }
    }


  VAR_9->r_type = VAR_8->type;





  ++VAR_6->reloc_count;

  return VAR_1;
}
