
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* section; } ;
struct TYPE_14__ {TYPE_1__ indirect; } ;
struct bfd_link_order {int offset; scalar_t__ size; TYPE_2__ u; } ;
struct bfd_link_info {int relocatable; int hash; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {struct bfd_link_hash_entry* p; } ;
struct TYPE_16__ {int flags; TYPE_3__ udata; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_17__ {int flags; scalar_t__ size; int output_offset; scalar_t__ reloc_count; scalar_t__ rawsize; int * orelocation; struct TYPE_17__* output_section; int * owner; } ;
typedef TYPE_5__ asection ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_4__** FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_8 ;
 int * FUNC_6 (int *,struct bfd_link_info*,struct bfd_link_order*,int *,int ,TYPE_4__**) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct bfd_link_hash_entry* FUNC_12 (int ,int ,int ,int ,int ) ;
 int * FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,TYPE_5__*,int *,int,scalar_t__) ;
 struct bfd_link_hash_entry* FUNC_17 (int *,struct bfd_link_info*,int ,int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_4__*,struct bfd_link_hash_entry*) ;
 int FUNC_21 (int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_22 (bfd *VAR_9,
        struct bfd_link_info *VAR_10,
        asection *VAR_11,
        struct bfd_link_order *VAR_12,
        bfd_boolean VAR_13)
{
  asection *VAR_14;
  bfd *VAR_15;
  bfd_byte *VAR_16 = ((void*)0);
  bfd_byte *VAR_17;
  bfd_size_type VAR_18;
  file_ptr VAR_19;

  FUNC_0 ((VAR_11->flags & VAR_6) != 0);

  VAR_14 = VAR_12->u.indirect.section;
  VAR_15 = VAR_14->owner;
  if (VAR_14->size == 0)
    return VAR_7;

  FUNC_0 (VAR_14->output_section == VAR_11);
  FUNC_0 (VAR_14->output_offset == VAR_12->offset);
  FUNC_0 (VAR_14->size == VAR_12->size);

  if (VAR_10->relocatable
      && VAR_14->reloc_count > 0
      && VAR_11->orelocation == ((void*)0))
    {





      FUNC_2)
 (FUNC_1("Attempt to do relocatable link with %s input and %s output"),
  FUNC_8 (VAR_15), FUNC_8 (VAR_9));
      FUNC_15 (VAR_8);
      return VAR_5;
    }

  if (! VAR_13)
    {
      asymbol **VAR_20;
      asymbol **VAR_21;





      if (! FUNC_19 (VAR_15))
 return VAR_5;






      VAR_20 = FUNC_3 (VAR_15);
      VAR_21 = VAR_20 + FUNC_4 (VAR_15);
      for (; VAR_20 < VAR_21; VAR_20++)
 {
   asymbol *VAR_22;
   struct bfd_link_hash_entry *VAR_23;

   VAR_22 = *VAR_20;

   if ((VAR_22->flags & (VAR_2
        | VAR_3
        | VAR_1
        | VAR_0
        | VAR_4)) != 0
       || FUNC_11 (FUNC_7 (VAR_22))
       || FUNC_9 (FUNC_7 (VAR_22))
       || FUNC_10 (FUNC_7 (VAR_22)))
     {


       if (VAR_22->udata.p != ((void*)0))
  VAR_23 = VAR_22->udata.p;
       else if (FUNC_11 (FUNC_7 (VAR_22)))
  VAR_23 = FUNC_17 (VAR_9, VAR_10,
        FUNC_5 (VAR_22),
        VAR_5, VAR_5, VAR_7);
       else
  VAR_23 = FUNC_12 (VAR_10->hash,
       FUNC_5 (VAR_22),
       VAR_5, VAR_5, VAR_7);
       if (VAR_23 != ((void*)0))
  FUNC_20 (VAR_22, VAR_23);
     }
 }
    }


  VAR_18 = (VAR_14->rawsize > VAR_14->size
       ? VAR_14->rawsize
       : VAR_14->size);
  VAR_16 = FUNC_13 (VAR_18);
  if (VAR_16 == ((void*)0) && VAR_18 != 0)
    goto error_return;
  VAR_17 = (FUNC_6
    (VAR_9, VAR_10, VAR_12, VAR_16, VAR_10->relocatable,
     FUNC_3 (VAR_15)));
  if (!VAR_17)
    goto error_return;


  VAR_19 = VAR_14->output_offset * FUNC_14 (VAR_9);
  if (! FUNC_16 (VAR_9, VAR_11,
      VAR_17, VAR_19, VAR_14->size))
    goto error_return;

  if (VAR_16 != ((void*)0))
    FUNC_18 (VAR_16);
  return VAR_7;

 error_return:
  if (VAR_16 != ((void*)0))
    FUNC_18 (VAR_16);
  return VAR_5;
}
