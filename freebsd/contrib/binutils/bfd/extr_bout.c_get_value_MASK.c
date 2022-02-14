
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct bfd_link_info {TYPE_4__* callbacks; } ;
struct TYPE_13__ {scalar_t__ size; } ;
struct TYPE_12__ {int section; scalar_t__ value; } ;
struct TYPE_14__ {TYPE_2__ c; TYPE_1__ def; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_3__ u; } ;
typedef scalar_t__ bfd_vma ;
struct TYPE_16__ {int section; scalar_t__ value; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_17__ {int owner; } ;
typedef TYPE_6__ asection ;
struct TYPE_18__ {scalar_t__ addend; int address; TYPE_5__** sym_ptr_ptr; } ;
typedef TYPE_7__ arelent ;
struct TYPE_15__ {int (* undefined_symbol ) (struct bfd_link_info*,int ,int ,TYPE_6__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bfd_link_hash_entry* FUNC_3 (int ,struct bfd_link_info*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct bfd_link_info*,int ,int ,TYPE_6__*,int ,int ) ;

__attribute__((used)) static bfd_vma
FUNC_6 (arelent *VAR_5,
    struct bfd_link_info *VAR_6,
    asection *VAR_7)
{
  bfd_vma VAR_8;
  asymbol *VAR_9 = *(VAR_5->sym_ptr_ptr);




  if (FUNC_2 (VAR_9->section))
    {
      struct bfd_link_hash_entry *VAR_10;






      VAR_10 = FUNC_3 (VAR_7->owner, VAR_6,
     FUNC_1 (VAR_9),
     VAR_0, VAR_0, VAR_1);
      if (VAR_10 != (struct bfd_link_hash_entry *) ((void*)0)
   && (VAR_10->type == VAR_3
       || VAR_10->type == VAR_4))
 VAR_8 = VAR_10->u.def.value + FUNC_4 (VAR_10->u.def.section);
      else if (VAR_10 != (struct bfd_link_hash_entry *) ((void*)0)
        && VAR_10->type == VAR_2)
 VAR_8 = VAR_10->u.c.size;
      else
 {
   if (! ((*VAR_6->callbacks->undefined_symbol)
   (VAR_6, FUNC_1 (VAR_9),
    VAR_7->owner, VAR_7, VAR_5->address,
    VAR_1)))
     FUNC_0 ();
   VAR_8 = 0;
 }
    }
  else
    VAR_8 = VAR_9->value + FUNC_4 (VAR_9->section);


  VAR_8 += VAR_5->addend;

  return VAR_8;
}
