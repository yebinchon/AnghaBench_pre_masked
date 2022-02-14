
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct generic_link_hash_entry {int sym; int written; } ;
struct TYPE_19__ {TYPE_3__* p; } ;
struct TYPE_20__ {TYPE_4__ reloc; } ;
struct bfd_link_order {int offset; scalar_t__ type; TYPE_5__ u; } ;
struct bfd_link_info {TYPE_1__* callbacks; int relocatable; } ;
typedef int file_ptr ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_21__ {size_t reloc_count; TYPE_7__** orelocation; } ;
typedef TYPE_6__ asection ;
struct TYPE_22__ {int address; scalar_t__ addend; TYPE_10__* howto; int * sym_ptr_ptr; } ;
typedef TYPE_7__ arelent ;
struct TYPE_23__ {int * symbol_ptr_ptr; } ;
struct TYPE_17__ {int name; TYPE_9__* section; } ;
struct TYPE_18__ {scalar_t__ addend; TYPE_2__ u; int reloc; } ;
struct TYPE_16__ {int (* reloc_overflow ) (struct bfd_link_info*,int *,int ,int ,scalar_t__,int *,int *,int ) ;int (* unattached_reloc ) (struct bfd_link_info*,int ,int *,int *,int ) ;} ;
struct TYPE_15__ {int name; int partial_inplace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_10__*,int *,int ,int *) ;
 int FUNC_1 () ;
 TYPE_7__* FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (int *) ;



 TYPE_10__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_9__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_6__*,int *,int,int ) ;
 scalar_t__ FUNC_9 (int *,struct bfd_link_info*,int ,int ,int ,int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct bfd_link_info*,int ,int *,int *,int ) ;
 int FUNC_13 (struct bfd_link_info*,int *,int ,int ,scalar_t__,int *,int *,int ) ;

bfd_boolean
FUNC_14 (bfd *VAR_4,
          struct bfd_link_info *VAR_5,
          asection *VAR_6,
          struct bfd_link_order *VAR_7)
{
  arelent *VAR_8;

  if (! VAR_5->relocatable)
    FUNC_1 ();
  if (VAR_6->orelocation == ((void*)0))
    FUNC_1 ();

  VAR_8 = FUNC_2 (VAR_4, sizeof (arelent));
  if (VAR_8 == ((void*)0))
    return VAR_0;

  VAR_8->address = VAR_7->offset;
  VAR_8->howto = FUNC_5 (VAR_4, VAR_7->u.reloc.p->reloc);
  if (VAR_8->howto == 0)
    {
      FUNC_7 (VAR_2);
      return VAR_0;
    }


  if (VAR_7->type == VAR_3)
    VAR_8->sym_ptr_ptr = VAR_7->u.reloc.p->u.section->symbol_ptr_ptr;
  else
    {
      struct generic_link_hash_entry *VAR_9;

      VAR_9 = ((struct generic_link_hash_entry *)
    FUNC_9 (VAR_4, VAR_5,
      VAR_7->u.reloc.p->u.name,
      VAR_0, VAR_0, VAR_1));
      if (VAR_9 == ((void*)0)
   || ! VAR_9->written)
 {
   if (! ((*VAR_5->callbacks->unattached_reloc)
   (VAR_5, VAR_7->u.reloc.p->u.name, ((void*)0), ((void*)0), 0)))
     return VAR_0;
   FUNC_7 (VAR_2);
   return VAR_0;
 }
      VAR_8->sym_ptr_ptr = &VAR_9->sym;
    }



  if (! VAR_8->howto->partial_inplace)
    VAR_8->addend = VAR_7->u.reloc.p->addend;
  else
    {
      bfd_size_type VAR_10;
      bfd_reloc_status_type VAR_11;
      bfd_byte *VAR_12;
      bfd_boolean VAR_13;
      file_ptr VAR_14;

      VAR_10 = FUNC_3 (VAR_8->howto);
      VAR_12 = FUNC_10 (VAR_10);
      if (VAR_12 == ((void*)0))
 return VAR_0;
      VAR_11 = FUNC_0 (VAR_8->howto, VAR_4,
          (bfd_vma) VAR_7->u.reloc.p->addend,
          VAR_12);
      switch (VAR_11)
 {
 case 130:
   break;
 default:
 case 129:
   FUNC_1 ();
 case 128:
   if (! ((*VAR_5->callbacks->reloc_overflow)
   (VAR_5, ((void*)0),
    (VAR_7->type == VAR_3
     ? FUNC_6 (VAR_4, VAR_7->u.reloc.p->u.section)
     : VAR_7->u.reloc.p->u.name),
    VAR_8->howto->name, VAR_7->u.reloc.p->addend,
    ((void*)0), ((void*)0), 0)))
     {
       FUNC_11 (VAR_12);
       return VAR_0;
     }
   break;
 }
      VAR_14 = VAR_7->offset * FUNC_4 (VAR_4);
      VAR_13 = FUNC_8 (VAR_4, VAR_6, VAR_12, VAR_14, VAR_10);
      FUNC_11 (VAR_12);
      if (! VAR_13)
 return VAR_0;

      VAR_8->addend = 0;
    }

  VAR_6->orelocation[VAR_6->reloc_count] = VAR_8;
  ++VAR_6->reloc_count;

  return VAR_1;
}
