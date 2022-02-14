
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;


struct reloc_std_external {int* r_index; int* r_type; int r_address; } ;
struct reloc_ext_external {int* r_index; int* r_type; int r_addend; int r_address; } ;
struct TYPE_25__ {int name; TYPE_13__* section; } ;
struct bfd_link_order_reloc {scalar_t__ addend; TYPE_4__ u; int reloc; } ;
struct TYPE_22__ {struct bfd_link_order_reloc* p; } ;
struct TYPE_23__ {TYPE_1__ reloc; } ;
struct bfd_link_order {scalar_t__ type; scalar_t__ offset; TYPE_2__ u; } ;
struct aout_link_hash_entry {int indx; int written; } ;
struct aout_final_link_info {scalar_t__ treloff; scalar_t__ dreloff; int output_bfd; TYPE_7__* info; } ;
struct TYPE_26__ {int type; int size; int name; scalar_t__ pc_relative; } ;
typedef TYPE_5__ reloc_howto_type ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_27__ {scalar_t__ rel_filepos; } ;
typedef TYPE_6__ asection ;
struct TYPE_28__ {TYPE_3__* callbacks; } ;
struct TYPE_24__ {int (* reloc_overflow ) (TYPE_7__*,int *,int ,int ,scalar_t__,int *,int *,scalar_t__) ;int (* unattached_reloc ) (TYPE_7__*,int ,int *,int *,scalar_t__) ;} ;
struct TYPE_21__ {int target_index; int owner; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,scalar_t__,TYPE_5__*,struct reloc_ext_external*,scalar_t__) ;
 int FUNC_2 (int ,int,int,scalar_t__,TYPE_5__*,struct reloc_std_external*) ;
 int FUNC_3 (TYPE_5__*,int ,scalar_t__,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 () ;
 int FUNC_6 (struct aout_link_hash_entry*,void*) ;
 scalar_t__ FUNC_7 (void*,scalar_t__,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_13__*) ;



 TYPE_5__* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,TYPE_13__*) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,TYPE_6__*,void*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_16 (int ,TYPE_7__*,int ,int ,int ,int ) ;
 int * FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *) ;
 TYPE_6__* FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 TYPE_6__* FUNC_22 (int ) ;
 int FUNC_23 (TYPE_7__*,int ,int *,int *,scalar_t__) ;
 int FUNC_24 (TYPE_7__*,int *,int ,int ,scalar_t__,int *,int *,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_25 (struct aout_final_link_info *VAR_25,
       asection *VAR_26,
       struct bfd_link_order *VAR_27)
{
  struct bfd_link_order_reloc *VAR_28;
  int VAR_29;
  int VAR_30;
  reloc_howto_type *VAR_31;
  file_ptr *VAR_32 = ((void*)0);
  struct reloc_std_external VAR_33;
  struct reloc_ext_external VAR_34;
  void * VAR_35;
  bfd_size_type VAR_36;

  VAR_28 = VAR_27->u.reloc.p;

  if (VAR_27->type == VAR_23)
    {
      VAR_30 = 0;
      if (FUNC_10 (VAR_28->u.section))
 VAR_29 = VAR_1 | VAR_2;
      else
 {
   FUNC_0 (VAR_28->u.section->owner == VAR_25->output_bfd);
   VAR_29 = VAR_28->u.section->target_index;
 }
    }
  else
    {
      struct aout_link_hash_entry *VAR_37;

      FUNC_0 (VAR_27->type == VAR_24);
      VAR_30 = 1;
      VAR_37 = ((struct aout_link_hash_entry *)
    FUNC_16 (VAR_25->output_bfd, VAR_25->info,
      VAR_28->u.name, VAR_0, VAR_0, VAR_21));
      if (VAR_37 != ((void*)0)
   && VAR_37->indx >= 0)
 VAR_29 = VAR_37->indx;
      else if (VAR_37 != ((void*)0))
 {




   VAR_37->indx = -2;
   VAR_37->written = VAR_0;
   if (! FUNC_6 (VAR_37, (void *) VAR_25))
     return VAR_0;
   VAR_29 = VAR_37->indx;
 }
      else
 {
   if (! ((*VAR_25->info->callbacks->unattached_reloc)
   (VAR_25->info, VAR_28->u.name, ((void*)0), ((void*)0), (bfd_vma) 0)))
     return VAR_0;
   VAR_29 = 0;
 }
    }

  VAR_31 = FUNC_11 (VAR_25->output_bfd, VAR_28->reloc);
  if (VAR_31 == 0)
    {
      FUNC_14 (VAR_22);
      return VAR_0;
    }

  if (VAR_26 == FUNC_22 (VAR_25->output_bfd))
    VAR_32 = &VAR_25->treloff;
  else if (VAR_26 == FUNC_19 (VAR_25->output_bfd))
    VAR_32 = &VAR_25->dreloff;
  else
    FUNC_5 ();

  if (FUNC_20 (VAR_25->output_bfd) == VAR_19)
    {




      {
 int VAR_38;
 int VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42;

 VAR_38 = (int) VAR_31->pc_relative;
 VAR_39 = (VAR_31->type & 8) != 0;
 VAR_40 = (VAR_31->type & 16) != 0;
 VAR_41 = (VAR_31->type & 32) != 0;
 VAR_42 = VAR_31->size;

 FUNC_4 (VAR_25->output_bfd, VAR_27->offset, VAR_33.r_address);
 if (FUNC_9 (VAR_25->output_bfd))
   {
     VAR_33.r_index[0] = VAR_29 >> 16;
     VAR_33.r_index[1] = VAR_29 >> 8;
     VAR_33.r_index[2] = VAR_29;
     VAR_33.r_type[0] =
       ((VAR_30 ? VAR_9 : 0)
        | (VAR_38 ? VAR_15 : 0)
        | (VAR_39 ? VAR_7 : 0)
        | (VAR_40 ? VAR_11 : 0)
        | (VAR_41 ? VAR_17 : 0)
        | (VAR_42 << VAR_13));
   }
 else
   {
     VAR_33.r_index[2] = VAR_29 >> 16;
     VAR_33.r_index[1] = VAR_29 >> 8;
     VAR_33.r_index[0] = VAR_29;
     VAR_33.r_type[0] =
       ((VAR_30 ? VAR_10 : 0)
        | (VAR_38 ? VAR_16 : 0)
        | (VAR_39 ? VAR_8 : 0)
        | (VAR_40 ? VAR_12 : 0)
        | (VAR_41 ? VAR_18 : 0)
        | (VAR_42 << VAR_14));
   }
      }

      VAR_35 = (void *) &VAR_33;






      if (VAR_28->addend != 0)
 {
   bfd_size_type VAR_43;
   bfd_reloc_status_type VAR_44;
   bfd_byte *VAR_45;
   bfd_boolean VAR_46;

   VAR_43 = FUNC_8 (VAR_31);
   VAR_45 = FUNC_17 (VAR_43);
   if (VAR_45 == ((void*)0))
     return VAR_0;
   VAR_44 = FUNC_3 (VAR_31, VAR_25->output_bfd,
        (bfd_vma) VAR_28->addend, VAR_45);
   switch (VAR_44)
     {
     case 130:
       break;
     default:
     case 129:
       FUNC_5 ();
     case 128:
       if (! ((*VAR_25->info->callbacks->reloc_overflow)
       (VAR_25->info, ((void*)0),
        (VAR_27->type == VAR_23
         ? FUNC_12 (VAR_25->output_bfd,
        VAR_28->u.section)
         : VAR_28->u.name),
        VAR_31->name, VAR_28->addend, ((void*)0), ((void*)0), (bfd_vma) 0)))
  {
    FUNC_18 (VAR_45);
    return VAR_0;
  }
       break;
     }
   VAR_46 = FUNC_15 (VAR_25->output_bfd, VAR_26, (void *) VAR_45,
      (file_ptr) VAR_27->offset, VAR_43);
   FUNC_18 (VAR_45);
   if (! VAR_46)
     return VAR_0;
 }
    }
  else
    {




      FUNC_4 (VAR_25->output_bfd, VAR_27->offset, VAR_34.r_address);

      if (FUNC_9 (VAR_25->output_bfd))
 {
   VAR_34.r_index[0] = VAR_29 >> 16;
   VAR_34.r_index[1] = VAR_29 >> 8;
   VAR_34.r_index[2] = VAR_29;
   VAR_34.r_type[0] =
     ((VAR_30 ? VAR_3 : 0)
      | (VAR_31->type << VAR_5));
 }
      else
 {
   VAR_34.r_index[2] = VAR_29 >> 16;
   VAR_34.r_index[1] = VAR_29 >> 8;
   VAR_34.r_index[0] = VAR_29;
   VAR_34.r_type[0] =
     (VAR_30 ? VAR_4 : 0)
       | (VAR_31->type << VAR_6);
 }

      FUNC_4 (VAR_25->output_bfd, (bfd_vma) VAR_28->addend, VAR_34.r_addend);


      VAR_35 = (void *) &VAR_34;
    }

  VAR_36 = FUNC_20 (VAR_25->output_bfd);
  if (FUNC_13 (VAR_25->output_bfd, *VAR_32, VAR_20) != 0
      || FUNC_7 (VAR_35, VAR_36, VAR_25->output_bfd) != VAR_36)
    return VAR_0;

  *VAR_32 += FUNC_20 (VAR_25->output_bfd);



  FUNC_0 (*VAR_32 <= FUNC_21 (VAR_25->output_bfd)
       && (VAR_32 != &VAR_25->treloff
    || (*VAR_32
        <= FUNC_19 (VAR_25->output_bfd)->rel_filepos)));

  return VAR_21;
}
