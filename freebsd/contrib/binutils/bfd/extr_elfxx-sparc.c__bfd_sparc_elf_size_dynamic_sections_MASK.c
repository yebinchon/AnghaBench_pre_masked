
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
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct elf_strtab_hash {int dummy; } ;
struct TYPE_38__ {int st_value; int st_shndx; int st_info; scalar_t__ st_other; scalar_t__ st_name; scalar_t__ st_size; } ;
struct elf_link_local_dynamic_entry {int input_indx; struct elf_link_local_dynamic_entry* next; TYPE_9__* input_bfd; TYPE_8__ isym; } ;
struct elf_link_hash_table {int dynsymcount; struct elf_link_local_dynamic_entry* dynlocal; struct elf_strtab_hash* dynstr; scalar_t__ dynamic_sections_created; TYPE_5__* hgot; } ;
struct bfd_link_info {int flags; TYPE_7__* hash; scalar_t__ executable; scalar_t__ shared; TYPE_9__* input_bfds; } ;
struct TYPE_30__ {TYPE_9__* dynobj; } ;
struct TYPE_31__ {scalar_t__ refcount; int offset; } ;
struct _bfd_sparc_elf_link_hash_table {int dynamic_interpreter_size; struct _bfd_sparc_elf_app_reg* app_regs; TYPE_17__ elf; TYPE_6__* srelplt; TYPE_10__* sgotplt; TYPE_10__* sdynbss; TYPE_10__* sgot; TYPE_10__* splt; int is_vxworks; TYPE_1__ tls_ldm_got; TYPE_10__* srelgot; scalar_t__ dynamic_interpreter; } ;
struct _bfd_sparc_elf_dyn_relocs {int count; TYPE_10__* sec; struct _bfd_sparc_elf_dyn_relocs* next; } ;
struct _bfd_sparc_elf_app_reg {char* name; int shndx; int bind; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_signed_vma ;
typedef unsigned char bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_39__ {TYPE_10__* sections; struct TYPE_39__* link_next; } ;
typedef TYPE_9__ bfd ;
struct TYPE_26__ {int size; unsigned char* contents; int flags; scalar_t__ reloc_count; int name; struct TYPE_26__* next; struct TYPE_26__* output_section; } ;
typedef TYPE_10__ asection ;
struct TYPE_37__ {int table; } ;
struct TYPE_36__ {scalar_t__ size; } ;
struct TYPE_32__ {int value; } ;
struct TYPE_33__ {TYPE_2__ def; } ;
struct TYPE_34__ {TYPE_3__ u; } ;
struct TYPE_35__ {TYPE_4__ root; } ;
struct TYPE_29__ {TYPE_10__* sreloc; struct _bfd_sparc_elf_dyn_relocs* local_dynrel; } ;
struct TYPE_27__ {int sh_info; } ;
struct TYPE_28__ {TYPE_11__ symtab_hdr; } ;
typedef int PTR ;
typedef TYPE_11__ Elf_Internal_Shdr ;


 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int VAR_0 ;
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
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct _bfd_sparc_elf_link_hash_table*) ;
 int FUNC_5 (struct _bfd_sparc_elf_link_hash_table*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_6 (struct elf_strtab_hash*,char*,int ) ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_7 (struct bfd_link_info*) ;
 char* FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (int,int) ;
 int VAR_21 ;
 scalar_t__ FUNC_10 (TYPE_9__*) ;
 TYPE_10__* FUNC_11 (TYPE_9__*,char*) ;
 scalar_t__ FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (TYPE_10__*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_14 (TYPE_9__*,scalar_t__) ;
 struct elf_link_hash_table* FUNC_15 (struct bfd_link_info*) ;
 int FUNC_16 (TYPE_17__*,int ,int ) ;
 scalar_t__* FUNC_17 (TYPE_9__*) ;
 TYPE_14__* FUNC_18 (TYPE_10__*) ;
 TYPE_12__* FUNC_19 (TYPE_9__*) ;
 int VAR_23 ;

bfd_boolean
FUNC_20 (bfd *VAR_24,
          struct bfd_link_info *VAR_25)
{
  struct _bfd_sparc_elf_link_hash_table *VAR_26;
  bfd *VAR_27;
  asection *VAR_28;
  bfd *VAR_29;

  VAR_26 = FUNC_7 (VAR_25);
  VAR_27 = VAR_26->elf.dynobj;
  FUNC_1 (VAR_27 != ((void*)0));

  if (FUNC_15 (VAR_25)->dynamic_sections_created)
    {

      if (VAR_25->executable)
 {
   VAR_28 = FUNC_11 (VAR_27, ".interp");
   FUNC_1 (VAR_28 != ((void*)0));
   VAR_28->size = VAR_26->dynamic_interpreter_size;
   VAR_28->contents = (unsigned char *) VAR_26->dynamic_interpreter;
 }
    }



  for (VAR_29 = VAR_25->input_bfds; VAR_29 != ((void*)0); VAR_29 = VAR_29->link_next)
    {
      bfd_signed_vma *VAR_30;
      bfd_signed_vma *VAR_31;
      char *VAR_32;
      bfd_size_type VAR_33;
      Elf_Internal_Shdr *VAR_34;
      asection *VAR_35;

      if (FUNC_10 (VAR_29) != VAR_22)
 continue;

      for (VAR_28 = VAR_29->sections; VAR_28 != ((void*)0); VAR_28 = VAR_28->next)
 {
   struct _bfd_sparc_elf_dyn_relocs *VAR_36;

   for (VAR_36 = FUNC_18 (VAR_28)->local_dynrel; VAR_36 != ((void*)0); VAR_36 = VAR_36->next)
     {
       if (!FUNC_13 (VAR_36->sec)
    && FUNC_13 (VAR_36->sec->output_section))
  {




  }
       else if (VAR_36->count != 0)
  {
    VAR_35 = FUNC_18 (VAR_36->sec)->sreloc;
    VAR_35->size += VAR_36->count * FUNC_4 (VAR_26);
    if ((VAR_36->sec->output_section->flags & VAR_17) != 0)
      VAR_25->flags |= VAR_0;
  }
     }
 }

      VAR_30 = FUNC_17 (VAR_29);
      if (!VAR_30)
 continue;

      VAR_34 = &FUNC_19 (VAR_29)->symtab_hdr;
      VAR_33 = VAR_34->sh_info;
      VAR_31 = VAR_30 + VAR_33;
      VAR_32 = FUNC_8 (VAR_29);
      VAR_28 = VAR_26->sgot;
      VAR_35 = VAR_26->srelgot;
      for (; VAR_30 < VAR_31; ++VAR_30, ++VAR_32)
 {
   if (*VAR_30 > 0)
     {
       *VAR_30 = VAR_28->size;
       VAR_28->size += FUNC_5 (VAR_26);
       if (*VAR_32 == VAR_12)
  VAR_28->size += FUNC_5 (VAR_26);
       if (VAR_25->shared
    || *VAR_32 == VAR_12
    || *VAR_32 == VAR_13)
  VAR_35->size += FUNC_4 (VAR_26);
     }
   else
     *VAR_30 = (bfd_vma) -1;
 }
    }

  if (VAR_26->tls_ldm_got.refcount > 0)
    {


      VAR_26->tls_ldm_got.offset = VAR_26->sgot->size;
      VAR_26->sgot->size += (2 * FUNC_5 (VAR_26));
      VAR_26->srelgot->size += FUNC_4 (VAR_26);
    }
  else
    VAR_26->tls_ldm_got.offset = -1;



  FUNC_16 (&VAR_26->elf, VAR_21, (PTR) VAR_25);

  if (! FUNC_0 (VAR_24)
      && !VAR_26->is_vxworks
      && FUNC_15 (VAR_25)->dynamic_sections_created)
    {

      if (VAR_26->splt->size > 0)
 VAR_26->splt->size += 1 * VAR_18;






      if (VAR_26->sgot->size >= 0x1000
   && FUNC_15 (VAR_25)->hgot->root.u.def.value == 0)
 FUNC_15 (VAR_25)->hgot->root.u.def.value = 0x1000;
    }




  for (VAR_28 = VAR_27->sections; VAR_28 != ((void*)0); VAR_28 = VAR_28->next)
    {
      if ((VAR_28->flags & VAR_16) == 0)
 continue;

      if (VAR_28 == VAR_26->splt
   || VAR_28 == VAR_26->sgot
   || VAR_28 == VAR_26->sdynbss
   || VAR_28 == VAR_26->sgotplt)
 {


 }
      else if (FUNC_2 (VAR_28->name, ".rela"))
 {
   if (VAR_28->size != 0)
     {


       VAR_28->reloc_count = 0;
     }
 }
      else
 {

   continue;
 }

      if (VAR_28->size == 0)
 {
   VAR_28->flags |= VAR_14;
   continue;
 }

      if ((VAR_28->flags & VAR_15) == 0)
 continue;




      VAR_28->contents = (bfd_byte *) FUNC_14 (VAR_27, VAR_28->size);
      if (VAR_28->contents == ((void*)0))
 return VAR_11;
    }

  if (FUNC_15 (VAR_25)->dynamic_sections_created)
    {
      if (VAR_25->executable)
 {
   if (!FUNC_0 (VAR_25, VAR_1, 0))
     return VAR_11;
 }

      if (VAR_26->srelplt->size != 0)
 {
   if (!FUNC_0 (VAR_25, VAR_3, 0)
       || !FUNC_0 (VAR_25, VAR_5, 0)
       || !FUNC_0 (VAR_25, VAR_4, VAR_6)
       || !FUNC_0 (VAR_25, VAR_2, 0))
     return VAR_11;
 }

      if (!FUNC_0 (VAR_25, VAR_6, 0)
   || !FUNC_0 (VAR_25, VAR_8, 0)
   || !FUNC_0 (VAR_25, VAR_7, FUNC_4 (VAR_26)))

 return VAR_11;



      if ((VAR_25->flags & VAR_0) == 0)
 FUNC_16 (&VAR_26->elf, VAR_23,
    (PTR) VAR_25);

      if (VAR_25->flags & VAR_0)
 {
   if (!FUNC_0 (VAR_25, VAR_10, 0))
     return VAR_11;
 }

      if (FUNC_0 (VAR_24))
 {
   int VAR_37;
   struct _bfd_sparc_elf_app_reg * VAR_38;
   struct elf_strtab_hash *VAR_39;
   struct elf_link_hash_table *VAR_40 = FUNC_15 (VAR_25);



   VAR_38 = FUNC_7 (VAR_25)->app_regs;
   VAR_39 = VAR_40->dynstr;

   for (VAR_37 = 0; VAR_37 < 4; VAR_37++)
     if (VAR_38 [VAR_37].name != ((void*)0))
       {
  struct elf_link_local_dynamic_entry *VAR_41, *VAR_42;

  if (!FUNC_0 (VAR_25, VAR_9, 0))
    return VAR_11;

  VAR_41 = (struct elf_link_local_dynamic_entry *)
    FUNC_12 (&VAR_25->hash->table, sizeof (*VAR_41));
  if (VAR_41 == ((void*)0))
    return VAR_11;




  VAR_41->isym.st_value = VAR_37 < 2 ? VAR_37 + 2 : VAR_37 + 4;
  VAR_41->isym.st_size = 0;
  if (*VAR_38 [VAR_37].name != '\0')
    VAR_41->isym.st_name
      = FUNC_6 (VAR_39, VAR_38[VAR_37].name, VAR_11);
  else
    VAR_41->isym.st_name = 0;
  VAR_41->isym.st_other = 0;
  VAR_41->isym.st_info = FUNC_3 (VAR_38 [VAR_37].bind,
         VAR_19);
  VAR_41->isym.st_shndx = VAR_38 [VAR_37].shndx;
  VAR_41->next = ((void*)0);
  VAR_41->input_bfd = VAR_24;
  VAR_41->input_indx = -1;

  if (VAR_40->dynlocal == ((void*)0))
    VAR_40->dynlocal = VAR_41;
  else
    {
      for (VAR_42 = VAR_40->dynlocal; VAR_42->next; VAR_42 = VAR_42->next)
        ;
      VAR_42->next = VAR_41;
    }
  VAR_40->dynsymcount++;
       }
 }
    }


  return VAR_20;
}
