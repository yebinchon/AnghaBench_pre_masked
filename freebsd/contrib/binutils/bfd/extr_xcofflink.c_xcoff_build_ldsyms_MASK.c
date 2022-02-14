
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_21__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct xcoff_loader_info {int output_bfd; scalar_t__ ldsym_count; void* failed; TYPE_15__* info; scalar_t__ export_defineds; } ;
struct TYPE_23__ {char* string; } ;
struct TYPE_38__ {scalar_t__ size; TYPE_7__* p; } ;
struct TYPE_36__ {int value; TYPE_13__* section; } ;
struct TYPE_30__ {scalar_t__ link; } ;
struct TYPE_39__ {TYPE_8__ c; TYPE_6__ def; TYPE_1__ i; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_10__ root; TYPE_9__ u; } ;
struct TYPE_34__ {int toc_offset; } ;
struct xcoff_link_hash_entry {int flags; int indx; TYPE_11__ root; TYPE_16__* ldsym; scalar_t__ ldindx; int smclas; struct xcoff_link_hash_entry* descriptor; TYPE_5__* toc_section; TYPE_4__ u; } ;
struct internal_ldsym {int dummy; } ;
typedef int bfd_size_type ;
typedef void* bfd_boolean ;
struct TYPE_25__ {int flags; } ;
typedef TYPE_12__ bfd ;
struct TYPE_26__ {int reloc_count; int size; TYPE_2__* owner; } ;
typedef TYPE_13__ asection ;
struct TYPE_37__ {TYPE_21__* section; } ;
struct TYPE_35__ {int size; int reloc_count; } ;
struct TYPE_33__ {scalar_t__ creator; } ;
struct TYPE_32__ {int flags; scalar_t__ xvec; TYPE_12__* my_archive; } ;
struct TYPE_31__ {scalar_t__ size; } ;
struct TYPE_29__ {scalar_t__ l_ifile; } ;
struct TYPE_28__ {TYPE_3__* hash; } ;
struct TYPE_27__ {scalar_t__ gc; scalar_t__ ldrel_count; TYPE_13__* descriptor_section; TYPE_5__* toc_section; TYPE_13__* linkage_section; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_13__*) ;
 int FUNC_4 (TYPE_21__*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_12__* FUNC_5 (TYPE_12__*,TYPE_12__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,struct xcoff_loader_info*,TYPE_16__*,char*) ;
 TYPE_16__* FUNC_11 (int ,int) ;
 int FUNC_12 (int ,char*) ;
 TYPE_14__* FUNC_13 (TYPE_15__*) ;

__attribute__((used)) static bfd_boolean
FUNC_14 (struct xcoff_link_hash_entry *VAR_24, void * VAR_25)
{
  struct xcoff_loader_info *VAR_26 = (struct xcoff_loader_info *) VAR_25;
  bfd_size_type VAR_27;

  if (VAR_24->root.type == VAR_23)
    VAR_24 = (struct xcoff_link_hash_entry *) VAR_24->root.u.i.link;


  if (VAR_24->flags & VAR_14)
      return VAR_2;






  if (VAR_24->root.type == VAR_19
      && (VAR_24->flags & VAR_6) == 0
      && (VAR_24->flags & VAR_13) != 0
      && (VAR_24->flags & VAR_5) == 0
      && (FUNC_3 (VAR_24->root.u.def.section)
   || (VAR_24->root.u.def.section->owner->flags & VAR_0) == 0))
    VAR_24->flags |= VAR_6;




  if (VAR_26->export_defineds
      && (VAR_24->flags & VAR_6) != 0
      && VAR_24->root.root.string[0] != '.')
    {
      bfd_boolean VAR_28;
      VAR_28 = VAR_2;
      if ((VAR_24->root.type == VAR_19
    || VAR_24->root.type == VAR_20)
   && VAR_24->root.u.def.section->owner != ((void*)0)
   && VAR_24->root.u.def.section->owner->my_archive != ((void*)0))
 {
   bfd *VAR_29, *VAR_30;

   VAR_29 = VAR_24->root.u.def.section->owner->my_archive;
   VAR_30 = FUNC_5 (VAR_29, ((void*)0));
   while (VAR_30 != ((void*)0))
     {
       if ((VAR_30->flags & VAR_0) != 0)
  {
    VAR_28 = VAR_1;
    break;
  }
       VAR_30 = FUNC_5 (VAR_29, VAR_30);
     }
 }

      if (VAR_28)
 VAR_24->flags |= VAR_9;
    }



  if (FUNC_13 (VAR_26->info)->gc
      && (VAR_24->flags & VAR_12) == 0
      && (VAR_24->root.type == VAR_19
   || VAR_24->root.type == VAR_20)
      && (VAR_24->root.u.def.section->owner == ((void*)0)
   || (VAR_24->root.u.def.section->owner->xvec
       != VAR_26->info->hash->creator)))
    VAR_24->flags |= VAR_12;





  if ((VAR_24->flags & VAR_4) != 0
      && (VAR_24->root.type == VAR_21
   || VAR_24->root.type == VAR_22)
      && VAR_24->root.root.string[0] == '.'
      && VAR_24->descriptor != ((void*)0)
      && ((VAR_24->descriptor->flags & VAR_5) != 0
   || ((VAR_24->descriptor->flags & VAR_10) != 0
       && (VAR_24->descriptor->flags & VAR_6) == 0))
      && (! FUNC_13 (VAR_26->info)->gc
   || (VAR_24->flags & VAR_12) != 0))
    {
      asection *VAR_31;
      struct xcoff_link_hash_entry *VAR_32;

      VAR_31 = FUNC_13 (VAR_26->info)->linkage_section;
      VAR_24->root.type = VAR_19;
      VAR_24->root.u.def.section = VAR_31;
      VAR_24->root.u.def.value = VAR_31->size;
      VAR_24->smclas = VAR_17;
      VAR_24->flags |= VAR_6;
      VAR_31->size += FUNC_7(VAR_26->output_bfd);



      VAR_32 = VAR_24->descriptor;
      FUNC_0 ((VAR_32->root.type == VAR_21
     || VAR_32->root.type == VAR_22)
    && (VAR_32->flags & VAR_6) == 0);
      VAR_32->flags |= VAR_12;
      if (VAR_32->toc_section == ((void*)0))
 {
   int VAR_33;




   if (FUNC_9 (VAR_26->output_bfd))
     VAR_33 = 8;
   else if (FUNC_8 (VAR_26->output_bfd))
     VAR_33 = 4;
   else
     return VAR_1;

   VAR_32->toc_section = FUNC_13 (VAR_26->info)->toc_section;
   VAR_32->u.toc_offset = VAR_32->toc_section->size;
   VAR_32->toc_section->size += VAR_33;
   ++FUNC_13 (VAR_26->info)->ldrel_count;
   ++VAR_32->toc_section->reloc_count;
   VAR_32->indx = -2;
   VAR_32->flags |= VAR_15 | VAR_11;



   FUNC_14 (VAR_32, VAR_25);
 }
    }



  if ((VAR_24->flags & VAR_9) != 0
      && (VAR_24->flags & VAR_10) == 0
      && (VAR_24->flags & VAR_6) == 0
      && (VAR_24->flags & VAR_5) == 0
      && (VAR_24->root.type == VAR_21
   || VAR_24->root.type == VAR_22))
    {
      if ((VAR_24->flags & VAR_7) != 0
   && (VAR_24->descriptor->root.type == VAR_19
       || VAR_24->descriptor->root.type == VAR_20))
 {
   asection *VAR_34;






   VAR_34 = FUNC_13 (VAR_26->info)->descriptor_section;
   VAR_24->root.type = VAR_19;
   VAR_24->root.u.def.section = VAR_34;
   VAR_24->root.u.def.value = VAR_34->size;
   VAR_24->smclas = VAR_16;
   VAR_24->flags |= VAR_6;



   VAR_34->size +=
     FUNC_6(VAR_26->output_bfd);



   FUNC_13 (VAR_26->info)->ldrel_count += 2;
   VAR_34->reloc_count += 2;



 }
      else
 {
   FUNC_2)
     (FUNC_1("warning: attempt to export undefined symbol `%s'"),
      VAR_24->root.root.string);
   VAR_24->ldsym = ((void*)0);
   return VAR_2;
 }
    }




  if (VAR_24->root.type == VAR_18
      && (! FUNC_13 (VAR_26->info)->gc
   || (VAR_24->flags & VAR_12) != 0)
      && VAR_24->root.u.c.p->section->size == 0)
    {
      FUNC_0 (FUNC_4 (VAR_24->root.u.c.p->section));
      VAR_24->root.u.c.p->section->size = VAR_24->root.u.c.size;
    }






  if (((VAR_24->flags & VAR_11) == 0
       || VAR_24->root.type == VAR_19
       || VAR_24->root.type == VAR_20
       || VAR_24->root.type == VAR_18)
      && (VAR_24->flags & VAR_8) == 0
      && (VAR_24->flags & VAR_9) == 0)
    {
      VAR_24->ldsym = ((void*)0);
      return VAR_2;
    }



  if (FUNC_13 (VAR_26->info)->gc
      && (VAR_24->flags & VAR_12) == 0)
    {
      VAR_24->ldsym = ((void*)0);
      return VAR_2;
    }



  if ((VAR_24->flags & VAR_3) != 0)
    return VAR_2;



  FUNC_0 (VAR_24->ldsym == ((void*)0));
  VAR_27 = sizeof (struct internal_ldsym);
  VAR_24->ldsym = FUNC_11 (VAR_26->output_bfd, VAR_27);
  if (VAR_24->ldsym == ((void*)0))
    {
      VAR_26->failed = VAR_2;
      return VAR_1;
    }

  if ((VAR_24->flags & VAR_10) != 0)
    VAR_24->ldsym->l_ifile = VAR_24->ldindx;



  VAR_24->ldindx = VAR_26->ldsym_count + 3;

  ++VAR_26->ldsym_count;

  if (! FUNC_10 (VAR_26->output_bfd, VAR_26,
         VAR_24->ldsym, VAR_24->root.root.string))
    return VAR_1;

  VAR_24->flags |= VAR_3;

  return VAR_2;
}
