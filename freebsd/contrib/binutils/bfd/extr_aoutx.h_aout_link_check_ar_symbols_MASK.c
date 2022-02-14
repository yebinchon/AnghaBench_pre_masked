
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct external_nlist {int e_value; int e_strx; int e_type; } ;
struct bfd_link_info {int common_skip_ar_aymbols; TYPE_4__* callbacks; TYPE_5__* hash; } ;
struct TYPE_9__ {scalar_t__ size; TYPE_6__* p; } ;
struct TYPE_8__ {int * abfd; } ;
struct TYPE_10__ {TYPE_2__ c; TYPE_1__ undef; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_3__ u; } ;
struct bfd_link_hash_common_entry {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_14__ {unsigned int section_align_power; } ;
struct TYPE_13__ {unsigned int alignment_power; int section; } ;
struct TYPE_12__ {int table; } ;
struct TYPE_11__ {int (* add_archive_element ) (struct bfd_link_info*,int *,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
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
 TYPE_7__* FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (int *,int) ;



 scalar_t__ VAR_16 ;
 struct bfd_link_hash_entry* FUNC_4 (TYPE_5__*,char const*,int ,int ,int ) ;
 scalar_t__ VAR_17 ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct external_nlist* FUNC_9 (int *) ;
 int FUNC_10 (struct bfd_link_info*,int *,char const*) ;
 int FUNC_11 (struct bfd_link_info*,int *,char const*) ;
 int FUNC_12 (struct bfd_link_info*,int *,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_13 (bfd *VAR_18,
       struct bfd_link_info *VAR_19,
       bfd_boolean *VAR_20)
{
  struct external_nlist *VAR_21;
  struct external_nlist *VAR_22;
  char *VAR_23;

  *VAR_20 = VAR_0;


  VAR_21 = FUNC_9 (VAR_18);
  VAR_22 = VAR_21 + FUNC_8 (VAR_18);
  VAR_23 = FUNC_7 (VAR_18);
  for (; VAR_21 < VAR_22; VAR_21++)
    {
      int VAR_24 = FUNC_1 (VAR_18, VAR_21->e_type);
      const char *VAR_25;
      struct bfd_link_hash_entry *VAR_26;




      if (((VAR_24 & VAR_4) == 0
    || (VAR_24 & VAR_7) != 0
    || VAR_24 == VAR_5)
   && VAR_24 != VAR_11
   && VAR_24 != VAR_14
   && VAR_24 != VAR_13
   && VAR_24 != VAR_12)
 {
   if (VAR_24 == VAR_10
       || VAR_24 == VAR_6)
     ++VAR_21;
   continue;
 }

      VAR_25 = VAR_23 + FUNC_0 (VAR_18, VAR_21->e_strx);
      VAR_26 = FUNC_4 (VAR_19->hash, VAR_25, VAR_0, VAR_0, VAR_15);



      if (VAR_26 == ((void*)0)
   || (VAR_26->type != VAR_17
       && VAR_26->type != VAR_16))
 {
   if (VAR_24 == (VAR_6 | VAR_4))
     ++VAR_21;
   continue;
 }

      if (VAR_24 == (VAR_8 | VAR_4)
   || VAR_24 == (VAR_3 | VAR_4)
   || VAR_24 == (VAR_2 | VAR_4)
   || VAR_24 == (VAR_1 | VAR_4)
   || VAR_24 == (VAR_6 | VAR_4))
 {
   if (VAR_26->type == VAR_16)
     {
       int VAR_27 = 0;

       switch (VAR_19->common_skip_ar_aymbols)
  {
  case 128:
    VAR_27 = (VAR_24 == (VAR_8 | VAR_4));
    break;
  case 129:
    VAR_27 = (VAR_24 == (VAR_3 | VAR_4));
    break;
  default:
  case 130:
    VAR_27 = 1;
    break;
  }

       if (VAR_27)
  continue;
     }

   if (! (*VAR_19->callbacks->add_archive_element) (VAR_19, VAR_18, VAR_25))
     return VAR_0;
   *VAR_20 = VAR_15;
   return VAR_15;
 }

      if (VAR_24 == (VAR_9 | VAR_4))
 {
   bfd_vma VAR_28;

   VAR_28 = FUNC_0 (VAR_18, VAR_21->e_value);
   if (VAR_28 != 0)
     {


       if (VAR_26->type == VAR_17)
  {
    bfd *VAR_29;
    unsigned int VAR_30;

    VAR_29 = VAR_26->u.undef.abfd;
    if (VAR_29 == ((void*)0))
      {




        if (! (*VAR_19->callbacks->add_archive_element) (VAR_19,
             VAR_18,
             VAR_25))
   return VAR_0;
        *VAR_20 = VAR_15;
        return VAR_15;
      }


    VAR_26->type = VAR_16;
    VAR_26->u.c.p = FUNC_3 (&VAR_19->hash->table,
      sizeof (struct bfd_link_hash_common_entry));
    if (VAR_26->u.c.p == ((void*)0))
      return VAR_0;

    VAR_26->u.c.size = VAR_28;





    VAR_30 = FUNC_5 (VAR_28);
    if (VAR_30 > FUNC_2 (VAR_18)->section_align_power)
      VAR_30 = FUNC_2 (VAR_18)->section_align_power;
    VAR_26->u.c.p->alignment_power = VAR_30;

    VAR_26->u.c.p->section = FUNC_6 (VAR_29,
        "COMMON");
  }
       else
  {


    if (VAR_28 > VAR_26->u.c.size)
      VAR_26->u.c.size = VAR_28;
  }
     }
 }

      if (VAR_24 == VAR_11
   || VAR_24 == VAR_14
   || VAR_24 == VAR_13
   || VAR_24 == VAR_12)
 {



   if (VAR_26->type == VAR_17)
     {
       if (! (*VAR_19->callbacks->add_archive_element) (VAR_19, VAR_18, VAR_25))
  return VAR_0;
       *VAR_20 = VAR_15;
       return VAR_15;
     }
 }
    }


  return VAR_15;
}
