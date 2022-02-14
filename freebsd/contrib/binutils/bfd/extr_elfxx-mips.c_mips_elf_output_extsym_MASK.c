
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
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_22__ {scalar_t__ sc; scalar_t__ value; void* st; int index; scalar_t__ reserved; } ;
struct TYPE_18__ {int ifd; TYPE_4__ asym; scalar_t__ reserved; scalar_t__ weakext; scalar_t__ cobol_main; scalar_t__ jmptbl; } ;
struct TYPE_23__ {char* string; } ;
struct TYPE_20__ {TYPE_10__* section; scalar_t__ value; } ;
struct TYPE_24__ {scalar_t__ link; } ;
struct TYPE_19__ {scalar_t__ size; } ;
struct TYPE_25__ {TYPE_2__ def; TYPE_6__ i; TYPE_1__ c; } ;
struct TYPE_26__ {scalar_t__ type; TYPE_5__ root; TYPE_7__ u; } ;
struct TYPE_21__ {scalar_t__ offset; } ;
struct TYPE_27__ {int indx; scalar_t__ type; TYPE_8__ root; TYPE_3__ plt; scalar_t__ needs_plt; int ref_regular; int def_regular; scalar_t__ ref_dynamic; scalar_t__ def_dynamic; } ;
struct mips_elf_link_hash_entry {int no_fn_stub; TYPE_14__ esym; TYPE_9__ root; } ;
struct extsym_info {int failed; int swap; int debug; int abfd; TYPE_12__* info; } ;
typedef int bfd_boolean ;
struct TYPE_15__ {scalar_t__ vma; scalar_t__ output_offset; struct TYPE_15__* output_section; int owner; } ;
typedef TYPE_10__ asection ;
struct TYPE_17__ {scalar_t__ strip; int keep_hash; } ;
struct TYPE_16__ {scalar_t__ procedure_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_14__*) ;
 int * FUNC_2 (int ,char*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_3 (int ,TYPE_10__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 char** VAR_12 ;
 TYPE_11__* FUNC_5 (TYPE_12__*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 void* VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct mips_elf_link_hash_entry *VAR_30, void *VAR_31)
{
  struct extsym_info *VAR_32 = VAR_31;
  bfd_boolean VAR_33;
  asection *VAR_34, *VAR_35;

  if (VAR_30->root.root.type == VAR_9)
    VAR_30 = (struct mips_elf_link_hash_entry *) VAR_30->root.root.u.i.link;

  if (VAR_30->root.indx == -2)
    VAR_33 = VAR_0;
  else if ((VAR_30->root.def_dynamic
     || VAR_30->root.ref_dynamic
     || VAR_30->root.type == VAR_6)
    && !VAR_30->root.def_regular
    && !VAR_30->root.ref_regular)
    VAR_33 = VAR_1;
  else if (VAR_32->info->strip == VAR_28
    || (VAR_32->info->strip == VAR_29
        && FUNC_2 (VAR_32->info->keep_hash,
       VAR_30->root.root.root.string,
       VAR_0, VAR_0) == ((void*)0)))
    VAR_33 = VAR_1;
  else
    VAR_33 = VAR_0;

  if (VAR_33)
    return VAR_1;

  if (VAR_30->esym.ifd == -2)
    {
      VAR_30->esym.jmptbl = 0;
      VAR_30->esym.cobol_main = 0;
      VAR_30->esym.weakext = 0;
      VAR_30->esym.reserved = 0;
      VAR_30->esym.ifd = VAR_10;
      VAR_30->esym.asym.value = 0;
      VAR_30->esym.asym.st = VAR_25;

      if (VAR_30->root.root.type == VAR_7
   || VAR_30->root.root.type == VAR_8)
 {
   const char *VAR_36;



   VAR_36 = VAR_30->root.root.root.string;
   if (FUNC_6 (VAR_36, VAR_12[0]) == 0
       || FUNC_6 (VAR_36, VAR_12[1]) == 0)
     {
       VAR_30->esym.asym.sc = VAR_16;
       VAR_30->esym.asym.st = VAR_26;
       VAR_30->esym.asym.value = 0;
     }
   else if (FUNC_6 (VAR_36, VAR_12[2]) == 0)
     {
       VAR_30->esym.asym.sc = VAR_13;
       VAR_30->esym.asym.st = VAR_26;
       VAR_30->esym.asym.value =
  FUNC_5 (VAR_32->info)->procedure_count;
     }
   else if (FUNC_6 (VAR_36, "_gp_disp") == 0 && ! FUNC_0 (VAR_32->abfd))
     {
       VAR_30->esym.asym.sc = VAR_13;
       VAR_30->esym.asym.st = VAR_26;
       VAR_30->esym.asym.value = FUNC_4 (VAR_32->abfd);
     }
   else
     VAR_30->esym.asym.sc = VAR_24;
 }
      else if (VAR_30->root.root.type != VAR_3
   && VAR_30->root.root.type != VAR_4)
 VAR_30->esym.asym.sc = VAR_13;
      else
 {
   const char *VAR_37;

   VAR_34 = VAR_30->root.root.u.def.section;
   VAR_35 = VAR_34->output_section;



   if (VAR_35 == ((void*)0))
     VAR_30->esym.asym.sc = VAR_24;
   else
     {
       VAR_37 = FUNC_3 (VAR_35->owner, VAR_35);

       if (FUNC_6 (VAR_37, ".text") == 0)
  VAR_30->esym.asym.sc = VAR_23;
       else if (FUNC_6 (VAR_37, ".data") == 0)
  VAR_30->esym.asym.sc = VAR_16;
       else if (FUNC_6 (VAR_37, ".sdata") == 0)
  VAR_30->esym.asym.sc = VAR_22;
       else if (FUNC_6 (VAR_37, ".rodata") == 0
         || FUNC_6 (VAR_37, ".rdata") == 0)
  VAR_30->esym.asym.sc = VAR_19;
       else if (FUNC_6 (VAR_37, ".bss") == 0)
  VAR_30->esym.asym.sc = VAR_14;
       else if (FUNC_6 (VAR_37, ".sbss") == 0)
  VAR_30->esym.asym.sc = VAR_20;
       else if (FUNC_6 (VAR_37, ".init") == 0)
  VAR_30->esym.asym.sc = VAR_18;
       else if (FUNC_6 (VAR_37, ".fini") == 0)
  VAR_30->esym.asym.sc = VAR_17;
       else
  VAR_30->esym.asym.sc = VAR_13;
     }
 }

      VAR_30->esym.asym.reserved = 0;
      VAR_30->esym.asym.index = VAR_11;
    }

  if (VAR_30->root.root.type == VAR_2)
    VAR_30->esym.asym.value = VAR_30->root.root.u.c.size;
  else if (VAR_30->root.root.type == VAR_3
    || VAR_30->root.root.type == VAR_4)
    {
      if (VAR_30->esym.asym.sc == VAR_15)
 VAR_30->esym.asym.sc = VAR_14;
      else if (VAR_30->esym.asym.sc == VAR_21)
 VAR_30->esym.asym.sc = VAR_20;

      VAR_34 = VAR_30->root.root.u.def.section;
      VAR_35 = VAR_34->output_section;
      if (VAR_35 != ((void*)0))
 VAR_30->esym.asym.value = (VAR_30->root.root.u.def.value
         + VAR_34->output_offset
         + VAR_35->vma);
      else
 VAR_30->esym.asym.value = 0;
    }
  else if (VAR_30->root.needs_plt)
    {
      struct mips_elf_link_hash_entry *VAR_38 = VAR_30;
      bfd_boolean VAR_39 = VAR_30->no_fn_stub;

      while (VAR_38->root.root.type == VAR_5)
 {
   VAR_38 = (struct mips_elf_link_hash_entry *)VAR_30->root.root.u.i.link;
   VAR_39 = VAR_39 || VAR_38->no_fn_stub;
 }

      if (!VAR_39)
 {

   VAR_30->esym.asym.st = VAR_27;
   VAR_34 = VAR_38->root.root.u.def.section;
   if (VAR_34 == ((void*)0))
     VAR_30->esym.asym.value = 0;
   else
     {
       VAR_35 = VAR_34->output_section;
       if (VAR_35 != ((void*)0))
  VAR_30->esym.asym.value = (VAR_38->root.plt.offset
          + VAR_34->output_offset
          + VAR_35->vma);
       else
  VAR_30->esym.asym.value = 0;
     }
 }
    }

  if (! FUNC_1 (VAR_32->abfd, VAR_32->debug, VAR_32->swap,
          VAR_30->root.root.root.string,
          &VAR_30->esym))
    {
      VAR_32->failed = VAR_1;
      return VAR_0;
    }

  return VAR_1;
}
