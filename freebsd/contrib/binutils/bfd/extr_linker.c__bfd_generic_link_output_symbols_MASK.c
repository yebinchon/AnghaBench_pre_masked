
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_10__ ;


struct TYPE_40__ {scalar_t__ size; } ;
struct TYPE_39__ {TYPE_10__* section; scalar_t__ value; } ;
struct TYPE_38__ {scalar_t__ link; } ;
struct TYPE_41__ {TYPE_5__ c; TYPE_4__ def; TYPE_3__ i; } ;
struct TYPE_42__ {int type; TYPE_6__ u; } ;
struct generic_link_hash_entry {scalar_t__ written; TYPE_7__ root; TYPE_9__* sym; } ;
struct bfd_link_info {scalar_t__ strip; int discard; int relocatable; int keep_hash; TYPE_2__* hash; int * create_object_symbols_section; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_43__ {scalar_t__ xvec; int filename; TYPE_10__* sections; } ;
typedef TYPE_8__ bfd ;
struct TYPE_36__ {struct generic_link_hash_entry* p; } ;
struct TYPE_44__ {int flags; TYPE_10__* section; scalar_t__ value; TYPE_1__ udata; int name; } ;
typedef TYPE_9__ asymbol ;
struct TYPE_35__ {int flags; int * output_section; struct TYPE_35__* next; } ;
typedef TYPE_10__ asection ;
struct TYPE_37__ {scalar_t__ creator; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct bfd_link_info*) ;
 TYPE_9__** FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 struct generic_link_hash_entry* FUNC_4 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 TYPE_8__* FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*) ;
 TYPE_10__* VAR_12 ;
 TYPE_10__* FUNC_8 (TYPE_9__*) ;
 int * FUNC_9 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_10__*) ;
 scalar_t__ FUNC_11 (TYPE_10__*) ;
 scalar_t__ FUNC_12 (TYPE_10__*) ;
 int FUNC_13 (TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_14 (TYPE_10__*) ;







 TYPE_9__* FUNC_15 (TYPE_8__*) ;
 scalar_t__ FUNC_16 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_17 (TYPE_8__*,struct bfd_link_info*,int ,scalar_t__,scalar_t__,scalar_t__) ;




 int FUNC_18 (TYPE_8__*,size_t*,TYPE_9__*) ;
 int FUNC_19 (TYPE_8__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

bfd_boolean
FUNC_20 (bfd *VAR_16,
      bfd *VAR_17,
      struct bfd_link_info *VAR_18,
      size_t *VAR_19)
{
  asymbol **VAR_20;
  asymbol **VAR_21;

  if (! FUNC_19 (VAR_17))
    return VAR_9;


  if (VAR_18->create_object_symbols_section != ((void*)0))
    {
      asection *VAR_22;

      for (VAR_22 = VAR_17->sections; VAR_22 != ((void*)0); VAR_22 = VAR_22->next)
 {
   if (VAR_22->output_section == VAR_18->create_object_symbols_section)
     {
       asymbol *VAR_23;

       VAR_23 = FUNC_15 (VAR_17);
       if (!VAR_23)
  return VAR_9;
       VAR_23->name = VAR_17->filename;
       VAR_23->value = 0;
       VAR_23->flags = VAR_5 | VAR_2;
       VAR_23->section = VAR_22;

       if (! FUNC_18 (VAR_16, VAR_19,
            VAR_23))
  return VAR_9;

       break;
     }
 }
    }



  VAR_20 = FUNC_2 (VAR_17);
  VAR_21 = VAR_20 + FUNC_3 (VAR_17);
  for (; VAR_20 < VAR_21; VAR_20++)
    {
      asymbol *VAR_24;
      struct generic_link_hash_entry *VAR_25;
      bfd_boolean VAR_26;

      VAR_25 = ((void*)0);
      VAR_24 = *VAR_20;
      if ((VAR_24->flags & (VAR_4
    | VAR_7
    | VAR_3
    | VAR_0
    | VAR_8)) != 0
   || FUNC_14 (FUNC_8 (VAR_24))
   || FUNC_11 (FUNC_8 (VAR_24))
   || FUNC_12 (FUNC_8 (VAR_24)))
 {
   if (VAR_24->udata.p != ((void*)0))
     VAR_25 = VAR_24->udata.p;
   else if ((VAR_24->flags & VAR_0) != 0)
     {
       VAR_25 = ((void*)0);
     }
   else if (FUNC_14 (FUNC_8 (VAR_24)))
     VAR_25 = ((struct generic_link_hash_entry *)
   FUNC_17 (VAR_16, VAR_18,
            FUNC_7 (VAR_24),
            VAR_9, VAR_9, VAR_11));
   else
     VAR_25 = FUNC_4 (FUNC_1 (VAR_18),
            FUNC_7 (VAR_24),
            VAR_9, VAR_9, VAR_11);

   if (VAR_25 != ((void*)0))
     {





       if (VAR_18->hash->creator == VAR_17->xvec)
  {
    if (VAR_25->sym != ((void*)0))
      *VAR_20 = VAR_24 = VAR_25->sym;
  }

       switch (VAR_25->root.type)
  {
  default:
  case 134:
    FUNC_5 ();
  case 133:
    break;
  case 132:
    VAR_24->flags |= VAR_8;
    break;
  case 135:
    VAR_25 = (struct generic_link_hash_entry *) VAR_25->root.u.i.link;

  case 137:
    VAR_24->flags |= VAR_3;
    VAR_24->flags &=~ VAR_0;
    VAR_24->value = VAR_25->root.u.def.value;
    VAR_24->section = VAR_25->root.u.def.section;
    break;
  case 136:
    VAR_24->flags |= VAR_8;
    VAR_24->flags &=~ VAR_0;
    VAR_24->value = VAR_25->root.u.def.value;
    VAR_24->section = VAR_25->root.u.def.section;
    break;
  case 138:
    VAR_24->value = VAR_25->root.u.c.size;
    VAR_24->flags |= VAR_3;
    if (! FUNC_11 (VAR_24->section))
      {
        FUNC_0 (FUNC_14 (VAR_24->section));
        VAR_24->section = VAR_12;
      }






    break;
  }
     }
 }



      if (VAR_18->strip == VAR_13
   || (VAR_18->strip == VAR_15
       && FUNC_9 (VAR_18->keep_hash, FUNC_7 (VAR_24),
      VAR_9, VAR_9) == ((void*)0)))
 VAR_26 = VAR_9;
      else if ((VAR_24->flags & (VAR_3 | VAR_8)) != 0)
 {




   if (FUNC_6 (VAR_24) == VAR_17
       && (VAR_24->flags & VAR_6) != 0)
     VAR_26 = VAR_11;
   else
     VAR_26 = VAR_9;
 }
      else if (FUNC_12 (VAR_24->section))
 VAR_26 = VAR_9;
      else if ((VAR_24->flags & VAR_1) != 0)
 {
   if (VAR_18->strip == VAR_14)
     VAR_26 = VAR_11;
   else
     VAR_26 = VAR_9;
 }
      else if (FUNC_14 (VAR_24->section)
        || FUNC_11 (VAR_24->section))
 VAR_26 = VAR_9;
      else if ((VAR_24->flags & VAR_5) != 0)
 {
   if ((VAR_24->flags & VAR_7) != 0)
     VAR_26 = VAR_9;
   else
     {
       switch (VAR_18->discard)
  {
  default:
  case 131:
    VAR_26 = VAR_9;
    break;
  case 128:
    VAR_26 = VAR_11;
    if (VAR_18->relocatable
        || ! (VAR_24->section->flags & VAR_10))
      break;

  case 130:
    if (FUNC_13 (VAR_17, VAR_24))
      VAR_26 = VAR_9;
    else
      VAR_26 = VAR_11;
    break;
  case 129:
    VAR_26 = VAR_11;
    break;
  }
     }
 }
      else if ((VAR_24->flags & VAR_0))
 {
   if (VAR_18->strip != VAR_13)
     VAR_26 = VAR_11;
   else
     VAR_26 = VAR_9;
 }
      else
 FUNC_5 ();




      if (!FUNC_10 (VAR_24->section)
   && FUNC_16 (VAR_16,
         VAR_24->section->output_section))
 VAR_26 = VAR_9;

      if (VAR_26)
 {
   if (! FUNC_18 (VAR_16, VAR_19, VAR_24))
     return VAR_9;
   if (VAR_25 != ((void*)0))
     VAR_25->written = VAR_11;
 }
    }

  return VAR_11;
}
