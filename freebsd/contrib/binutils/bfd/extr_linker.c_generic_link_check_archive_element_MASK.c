
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct bfd_link_info {TYPE_8__* hash; TYPE_2__* callbacks; } ;
struct TYPE_19__ {scalar_t__ size; TYPE_10__* p; } ;
struct TYPE_16__ {int * abfd; } ;
struct TYPE_20__ {TYPE_4__ c; TYPE_1__ undef; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_5__ u; } ;
struct bfd_link_hash_common_entry {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_21__ {int flags; TYPE_9__* section; } ;
typedef TYPE_6__ asymbol ;
struct TYPE_23__ {char* name; } ;
struct TYPE_22__ {int table; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_17__ {int (* add_archive_element ) (struct bfd_link_info*,int *,int ) ;} ;
struct TYPE_15__ {unsigned int alignment_power; TYPE_3__* section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__** FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 TYPE_9__* VAR_6 ;
 TYPE_10__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_9__*) ;
 scalar_t__ VAR_7 ;
 struct bfd_link_hash_entry* FUNC_6 (TYPE_8__*,int ,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,struct bfd_link_info*,int,TYPE_6__**,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct bfd_link_info*,int *,int ) ;
 int FUNC_12 (struct bfd_link_info*,int *,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (bfd *VAR_9,
        struct bfd_link_info *VAR_10,
        bfd_boolean *VAR_11,
        bfd_boolean VAR_12)
{
  asymbol **VAR_13, **VAR_14;

  *VAR_11 = VAR_3;

  if (! FUNC_10 (VAR_9))
    return VAR_3;

  VAR_13 = FUNC_0 (VAR_9);
  VAR_14 = VAR_13 + FUNC_1 (VAR_9);
  for (; VAR_13 < VAR_14; VAR_13++)
    {
      asymbol *VAR_15;
      struct bfd_link_hash_entry *VAR_16;

      VAR_15 = *VAR_13;


      if (! FUNC_5 (VAR_15->section)
   && (VAR_15->flags & (VAR_0 | VAR_1 | VAR_2)) == 0)
 continue;






      VAR_16 = FUNC_6 (VAR_10->hash, FUNC_2 (VAR_15), VAR_3,
    VAR_3, VAR_5);
      if (VAR_16 == ((void*)0)
   || (VAR_16->type != VAR_8
       && VAR_16->type != VAR_7))
 continue;



      if (! FUNC_5 (VAR_15->section))
 {
   bfd_size_type VAR_17;
   asymbol **VAR_18;


   if (! (*VAR_10->callbacks->add_archive_element) (VAR_10, VAR_9,
        FUNC_2 (VAR_15)))
     return VAR_3;
   VAR_17 = FUNC_1 (VAR_9);
   VAR_18 = FUNC_0 (VAR_9);
   if (! FUNC_9 (VAR_9, VAR_10, VAR_17,
           VAR_18, VAR_12))
     return VAR_3;
   *VAR_11 = VAR_5;
   return VAR_5;
 }



      if (VAR_16->type == VAR_8)
 {
   bfd *VAR_19;
   bfd_vma VAR_20;
   unsigned int VAR_21;

   VAR_19 = VAR_16->u.undef.abfd;
   if (VAR_19 == ((void*)0))
     {



       if (! (*VAR_10->callbacks->add_archive_element)
    (VAR_10, VAR_9, FUNC_2 (VAR_15)))
  return VAR_3;
       *VAR_11 = VAR_5;
       return VAR_5;
     }
   VAR_16->type = VAR_7;
   VAR_16->u.c.p =
     FUNC_4 (&VAR_10->hash->table,
          sizeof (struct bfd_link_hash_common_entry));
   if (VAR_16->u.c.p == ((void*)0))
     return VAR_3;

   VAR_20 = FUNC_3 (VAR_15);
   VAR_16->u.c.size = VAR_20;

   VAR_21 = FUNC_7 (VAR_20);
   if (VAR_21 > 4)
     VAR_21 = 4;
   VAR_16->u.c.p->alignment_power = VAR_21;

   if (VAR_15->section == VAR_6)
     VAR_16->u.c.p->section = FUNC_8 (VAR_19, "COMMON");
   else
     VAR_16->u.c.p->section = FUNC_8 (VAR_19,
         VAR_15->section->name);
   VAR_16->u.c.p->section->flags = VAR_4;
 }
      else
 {




   if (FUNC_3 (VAR_15) > VAR_16->u.c.size)
     VAR_16->u.c.size = FUNC_3 (VAR_15);
 }
    }


  return VAR_5;
}
