
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_11__ ;
typedef struct TYPE_35__ TYPE_10__ ;


struct TYPE_37__ {TYPE_10__* section; } ;
struct TYPE_38__ {TYPE_1__ indirect; } ;
struct bfd_link_order {TYPE_2__ u; } ;
struct bfd_link_info {TYPE_7__* callbacks; TYPE_3__* hash; } ;
struct TYPE_41__ {struct bfd_link_hash_entry* link; } ;
struct TYPE_40__ {int value; } ;
struct TYPE_42__ {TYPE_5__ i; TYPE_4__ def; } ;
struct bfd_link_hash_entry {int type; TYPE_6__ u; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_reloc_status_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_45__ {scalar_t__ xvec; } ;
typedef TYPE_9__ bfd ;
typedef int asymbol ;
struct TYPE_35__ {size_t reloc_count; TYPE_11__** orelocation; struct TYPE_35__* output_section; scalar_t__ size; scalar_t__ rawsize; TYPE_9__* owner; } ;
typedef TYPE_10__ asection ;
struct TYPE_36__ {int address; int addend; TYPE_8__* howto; int ** sym_ptr_ptr; } ;
typedef TYPE_11__ arelent ;
struct TYPE_44__ {scalar_t__ special_function; int name; } ;
struct TYPE_43__ {int (* reloc_overflow ) (struct bfd_link_info*,int *,int ,int ,int ,TYPE_9__*,TYPE_10__*,int ) ;int (* reloc_dangerous ) (struct bfd_link_info*,char*,TYPE_9__*,TYPE_10__*,int ) ;int (* undefined_symbol ) (struct bfd_link_info*,int ,TYPE_9__*,TYPE_10__*,int ,int ) ;} ;
struct TYPE_39__ {int table; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_9__*,int *,TYPE_11__*,TYPE_10__*,int ,int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 long FUNC_4 (TYPE_9__*,TYPE_10__*,TYPE_11__**,int **) ;
 long FUNC_5 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_6 (TYPE_9__*,TYPE_10__*,int *,int ,scalar_t__) ;
 struct bfd_hash_entry* FUNC_7 (int *,char*,int ,int ) ;
 TYPE_11__** FUNC_8 (long) ;
 int FUNC_9 (TYPE_9__*,TYPE_11__*,int *,TYPE_10__*,TYPE_9__*,char**) ;

 int VAR_3 ;



 int FUNC_10 (TYPE_11__**) ;
 int FUNC_11 (struct bfd_link_info*,int ,TYPE_9__*,TYPE_10__*,int ,int ) ;
 int FUNC_12 (struct bfd_link_info*,char*,TYPE_9__*,TYPE_10__*,int ) ;
 int FUNC_13 (struct bfd_link_info*,int *,int ,int ,int ,TYPE_9__*,TYPE_10__*,int ) ;

bfd_byte *
FUNC_14
  (bfd *VAR_4,
   struct bfd_link_info *VAR_5,
   struct bfd_link_order *VAR_6,
   bfd_byte *VAR_7,
   bfd_boolean VAR_8,
   asymbol **VAR_9)
{

  bfd *VAR_10 = VAR_6->u.indirect.section->owner;
  asection *VAR_11 = VAR_6->u.indirect.section;
  bfd_size_type VAR_12;

  long VAR_13 = FUNC_5 (VAR_10, VAR_11);
  arelent **VAR_14 = ((void*)0);
  long VAR_15;

  if (VAR_13 < 0)
    goto error_return;

  VAR_14 = FUNC_8 (VAR_13);
  if (VAR_14 == ((void*)0) && VAR_13 != 0)
    goto error_return;


  VAR_12 = VAR_11->rawsize ? VAR_11->rawsize : VAR_11->size;
  if (!FUNC_6 (VAR_10, VAR_11, VAR_7, 0, VAR_12))
    goto error_return;

  VAR_15 = FUNC_4 (VAR_10,
     VAR_11,
     VAR_14,
     VAR_9);
  if (VAR_15 < 0)
    goto error_return;

  if (VAR_15 > 0)
    {
      arelent **VAR_16;

      int VAR_17;
      bfd_vma VAR_18 = 0x12345678;

      {
 struct bfd_hash_entry *VAR_19;
 struct bfd_link_hash_entry *VAR_20;

 if (VAR_4 && VAR_10
     && VAR_4->xvec == VAR_10->xvec)
   VAR_20 = 0;
 else
   {
     VAR_19 = FUNC_7 (&VAR_5->hash->table, "_gp", VAR_0, VAR_0);
     VAR_20 = (struct bfd_link_hash_entry *) VAR_19;
   }
      lookup:
 if (VAR_20)
   {
     switch (VAR_20->type)
       {
       case 134:
       case 133:
       case 139:
  VAR_17 = 0;
  break;
       case 138:
       case 137:
  VAR_17 = 1;
  VAR_18 = VAR_20->u.def.value;
  break;
       case 136:
       case 132:
  VAR_20 = VAR_20->u.i.link;

  goto lookup;
       case 135:
       default:
  FUNC_2 ();
       }
   }
 else
   VAR_17 = 0;
      }

      for (VAR_16 = VAR_14; *VAR_16 != ((void*)0); VAR_16++)
 {
   char *VAR_21 = ((void*)0);
   bfd_reloc_status_type VAR_22;



   asymbol *VAR_23 = *(*VAR_16)->sym_ptr_ptr;




   if (VAR_17
       && (*VAR_16)->howto->special_function
       == VAR_2)
     VAR_22 = FUNC_1 (VAR_10, VAR_23, *VAR_16,
            VAR_11, VAR_8,
            VAR_7, VAR_18);
   else
     VAR_22 = FUNC_9 (VAR_10, *VAR_16, VAR_7,
     VAR_11,
     VAR_8 ? VAR_4 : ((void*)0),
     &VAR_21);

   if (VAR_8)
     {
       asection *VAR_24 = VAR_11->output_section;


       VAR_24->orelocation[VAR_24->reloc_count] = *VAR_16;
       VAR_24->reloc_count++;
     }

   if (VAR_22 != VAR_3)
     {
       switch (VAR_22)
  {
  case 128:
    if (!((*VAR_5->callbacks->undefined_symbol)
   (VAR_5, FUNC_3 (*(*VAR_16)->sym_ptr_ptr),
    VAR_10, VAR_11, (*VAR_16)->address, VAR_1)))
      goto error_return;
    break;
  case 131:
    FUNC_0 (VAR_21 != ((void*)0));
    if (!((*VAR_5->callbacks->reloc_dangerous)
   (VAR_5, VAR_21, VAR_10, VAR_11,
    (*VAR_16)->address)))
      goto error_return;
    break;
  case 129:
    if (!((*VAR_5->callbacks->reloc_overflow)
   (VAR_5, ((void*)0),
    FUNC_3 (*(*VAR_16)->sym_ptr_ptr),
    (*VAR_16)->howto->name, (*VAR_16)->addend,
    VAR_10, VAR_11, (*VAR_16)->address)))
      goto error_return;
    break;
  case 130:
  default:
    FUNC_2 ();
    break;
  }

     }
 }
    }
  if (VAR_14 != ((void*)0))
    FUNC_10 (VAR_14);
  return VAR_7;

error_return:
  if (VAR_14 != ((void*)0))
    FUNC_10 (VAR_14);
  return ((void*)0);
}
