
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct extsym_info {scalar_t__ failed; int swap; int debug; int abfd; TYPE_3__* info; } ;
struct TYPE_23__ {scalar_t__ sc; scalar_t__ value; int index; scalar_t__ reserved; int st; } ;
struct TYPE_14__ {int ifd; TYPE_9__ asym; scalar_t__ reserved; scalar_t__ weakext; scalar_t__ cobol_main; scalar_t__ jmptbl; } ;
struct TYPE_18__ {int string; } ;
struct TYPE_19__ {scalar_t__ value; TYPE_10__* section; } ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_16__ {scalar_t__ link; } ;
struct TYPE_20__ {TYPE_5__ def; TYPE_1__ c; TYPE_2__ i; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_4__ root; TYPE_6__ u; } ;
struct TYPE_22__ {int indx; TYPE_7__ root; int ref_regular; int def_regular; scalar_t__ ref_dynamic; scalar_t__ def_dynamic; } ;
struct alpha_elf_link_hash_entry {TYPE_12__ esym; TYPE_8__ root; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_13__ {scalar_t__ vma; scalar_t__ output_offset; struct TYPE_13__* output_section; int owner; } ;
typedef TYPE_10__ asection ;
struct TYPE_17__ {scalar_t__ strip; int keep_hash; } ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_12__*) ;
 int * FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_2 (int ,TYPE_10__*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct alpha_elf_link_hash_entry *VAR_24, PTR VAR_25)
{
  struct extsym_info *VAR_26 = (struct extsym_info *) VAR_25;
  bfd_boolean VAR_27;
  asection *VAR_28, *VAR_29;

  if (VAR_24->root.root.type == VAR_6)
    VAR_24 = (struct alpha_elf_link_hash_entry *) VAR_24->root.root.u.i.link;

  if (VAR_24->root.indx == -2)
    VAR_27 = VAR_0;
  else if ((VAR_24->root.def_dynamic
     || VAR_24->root.ref_dynamic
     || VAR_24->root.root.type == VAR_5)
    && !VAR_24->root.def_regular
    && !VAR_24->root.ref_regular)
    VAR_27 = VAR_1;
  else if (VAR_26->info->strip == VAR_22
    || (VAR_26->info->strip == VAR_23
        && FUNC_1 (VAR_26->info->keep_hash,
       VAR_24->root.root.root.string,
       VAR_0, VAR_0) == ((void*)0)))
    VAR_27 = VAR_1;
  else
    VAR_27 = VAR_0;

  if (VAR_27)
    return VAR_1;

  if (VAR_24->esym.ifd == -2)
    {
      VAR_24->esym.jmptbl = 0;
      VAR_24->esym.cobol_main = 0;
      VAR_24->esym.weakext = 0;
      VAR_24->esym.reserved = 0;
      VAR_24->esym.ifd = VAR_7;
      VAR_24->esym.asym.value = 0;
      VAR_24->esym.asym.st = VAR_21;

      if (VAR_24->root.root.type != VAR_3
   && VAR_24->root.root.type != VAR_4)
 VAR_24->esym.asym.sc = VAR_9;
      else
 {
   const char *VAR_30;

   VAR_28 = VAR_24->root.root.u.def.section;
   VAR_29 = VAR_28->output_section;



   if (VAR_29 == ((void*)0))
     VAR_24->esym.asym.sc = VAR_20;
   else
     {
       VAR_30 = FUNC_2 (VAR_29->owner, VAR_29);

       if (FUNC_3 (VAR_30, ".text") == 0)
  VAR_24->esym.asym.sc = VAR_19;
       else if (FUNC_3 (VAR_30, ".data") == 0)
  VAR_24->esym.asym.sc = VAR_12;
       else if (FUNC_3 (VAR_30, ".sdata") == 0)
  VAR_24->esym.asym.sc = VAR_18;
       else if (FUNC_3 (VAR_30, ".rodata") == 0
         || FUNC_3 (VAR_30, ".rdata") == 0)
  VAR_24->esym.asym.sc = VAR_15;
       else if (FUNC_3 (VAR_30, ".bss") == 0)
  VAR_24->esym.asym.sc = VAR_10;
       else if (FUNC_3 (VAR_30, ".sbss") == 0)
  VAR_24->esym.asym.sc = VAR_16;
       else if (FUNC_3 (VAR_30, ".init") == 0)
  VAR_24->esym.asym.sc = VAR_14;
       else if (FUNC_3 (VAR_30, ".fini") == 0)
  VAR_24->esym.asym.sc = VAR_13;
       else
  VAR_24->esym.asym.sc = VAR_9;
     }
 }

      VAR_24->esym.asym.reserved = 0;
      VAR_24->esym.asym.index = VAR_8;
    }

  if (VAR_24->root.root.type == VAR_2)
    VAR_24->esym.asym.value = VAR_24->root.root.u.c.size;
  else if (VAR_24->root.root.type == VAR_3
    || VAR_24->root.root.type == VAR_4)
    {
      if (VAR_24->esym.asym.sc == VAR_11)
 VAR_24->esym.asym.sc = VAR_10;
      else if (VAR_24->esym.asym.sc == VAR_17)
 VAR_24->esym.asym.sc = VAR_16;

      VAR_28 = VAR_24->root.root.u.def.section;
      VAR_29 = VAR_28->output_section;
      if (VAR_29 != ((void*)0))
 VAR_24->esym.asym.value = (VAR_24->root.root.u.def.value
         + VAR_28->output_offset
         + VAR_29->vma);
      else
 VAR_24->esym.asym.value = 0;
    }

  if (! FUNC_0 (VAR_26->abfd, VAR_26->debug, VAR_26->swap,
          VAR_24->root.root.root.string,
          &VAR_24->esym))
    {
      VAR_26->failed = VAR_1;
      return VAR_0;
    }

  return VAR_1;
}
