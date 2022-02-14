
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_20__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_14__ ;
typedef struct TYPE_38__ TYPE_10__ ;


struct elf_backend_data {int (* elf_backend_symbol_table_processing ) (TYPE_2__*,TYPE_1__*,unsigned long) ;int (* elf_backend_symbol_processing ) (TYPE_2__*,TYPE_10__*) ;} ;
struct TYPE_38__ {int flags; TYPE_20__* section; int value; int name; TYPE_2__* the_bfd; } ;
struct TYPE_40__ {TYPE_10__ symbol; int version; int internal_elf_sym; } ;
typedef TYPE_1__ elf_symbol_type ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_42__ {int flags; int filename; } ;
typedef TYPE_2__ bfd ;
typedef int asymbol ;
struct TYPE_45__ {int sh_size; unsigned char* contents; int sh_offset; } ;
struct TYPE_44__ {scalar_t__ st_shndx; int st_info; int st_size; int st_value; } ;
struct TYPE_43__ {int vs_vers; } ;
struct TYPE_41__ {scalar_t__ vma; } ;
struct TYPE_39__ {scalar_t__ dynverdef_section; scalar_t__ dynverref_section; int * verref; int * verdef; TYPE_5__ dynversym_hdr; TYPE_5__ dynsymtab_hdr; TYPE_5__ symtab_hdr; } ;
typedef TYPE_3__ Elf_Internal_Versym ;
typedef TYPE_4__ Elf_Internal_Sym ;
typedef TYPE_5__ Elf_Internal_Shdr ;
typedef TYPE_4__ Elf_External_Versym ;
typedef int Elf_External_Sym ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (int ,int ,long,unsigned long) ;
 void* VAR_21 ;
 int FUNC_6 (TYPE_4__*,int,TYPE_2__*) ;
 TYPE_20__* VAR_22 ;
 TYPE_4__* FUNC_7 (TYPE_2__*,TYPE_5__*,unsigned long,int ,int *,int *,int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_5__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_9 (int) ;
 TYPE_20__* FUNC_10 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ) ;
 TYPE_20__* VAR_23 ;
 TYPE_1__* FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 TYPE_14__* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_4__*) ;
 struct elf_backend_data* FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int *,TYPE_4__*,int) ;
 int FUNC_18 (int ,int ,long,unsigned long) ;
 int FUNC_19 (TYPE_2__*,TYPE_10__*) ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*,unsigned long) ;

long
FUNC_21 (bfd *VAR_24, asymbol **VAR_25, bfd_boolean VAR_26)
{
  Elf_Internal_Shdr *VAR_27;
  Elf_Internal_Shdr *VAR_28;
  unsigned long VAR_29;
  elf_symbol_type *VAR_30;
  elf_symbol_type *VAR_31;
  Elf_Internal_Sym *VAR_32;
  Elf_Internal_Sym *VAR_33;
  Elf_Internal_Sym *VAR_34 = ((void*)0);
  Elf_External_Versym *VAR_35;
  Elf_External_Versym *VAR_36 = ((void*)0);
  const struct elf_backend_data *VAR_37;
  bfd_size_type VAR_38;
  if (! VAR_26)
    {
      VAR_27 = &FUNC_14 (VAR_24)->symtab_hdr;
      VAR_28 = ((void*)0);
    }
  else
    {
      VAR_27 = &FUNC_14 (VAR_24)->dynsymtab_hdr;
      if (FUNC_13 (VAR_24) == 0)
 VAR_28 = ((void*)0);
      else
 VAR_28 = &FUNC_14 (VAR_24)->dynversym_hdr;
      if ((FUNC_14 (VAR_24)->dynverdef_section != 0
    && FUNC_14 (VAR_24)->verdef == ((void*)0))
   || (FUNC_14 (VAR_24)->dynverref_section != 0
       && FUNC_14 (VAR_24)->verref == ((void*)0)))
 {
   if (!FUNC_3 (VAR_24, VAR_14))
     return -1;
 }
    }

  VAR_37 = FUNC_16 (VAR_24);
  VAR_29 = VAR_27->sh_size / sizeof (Elf_External_Sym);
  if (VAR_29 == 0)
    VAR_30 = VAR_31 = ((void*)0);
  else
    {
      VAR_34 = FUNC_7 (VAR_24, VAR_27, VAR_29, 0,
          ((void*)0), ((void*)0), ((void*)0));
      if (VAR_34 == ((void*)0))
 return -1;

      VAR_38 = VAR_29;
      VAR_38 *= sizeof (elf_symbol_type);
      VAR_31 = FUNC_12 (VAR_24, VAR_38);
      if (VAR_31 == (elf_symbol_type *) ((void*)0))
 goto error_return;


      if (VAR_28 != ((void*)0)
   && VAR_28->sh_size / sizeof (Elf_External_Versym) != VAR_29)
 {
   FUNC_5)
     (FUNC_2("%s: version count (%ld) does not match symbol count (%ld)"),
      VAR_24->filename,
      (long) (VAR_28->sh_size / sizeof (Elf_External_Versym)),
      VAR_29);



   VAR_28 = ((void*)0);
 }

      if (VAR_28 != ((void*)0))
 {
   if (FUNC_11 (VAR_24, VAR_28->sh_offset, VAR_15) != 0)
     goto error_return;

   VAR_36 = FUNC_9 (VAR_28->sh_size);
   if (VAR_36 == ((void*)0) && VAR_28->sh_size != 0)
     goto error_return;

   if (FUNC_6 (VAR_36, VAR_28->sh_size, VAR_24) != VAR_28->sh_size)
     goto error_return;
 }


      VAR_35 = VAR_36;
      if (VAR_35 != ((void*)0))
 ++VAR_35;
      VAR_33 = VAR_34 + VAR_29;
      for (VAR_32 = VAR_34 + 1, VAR_30 = VAR_31; VAR_32 < VAR_33; VAR_32++, VAR_30++)
 {
   FUNC_17 (&VAR_30->internal_elf_sym, VAR_32, sizeof (Elf_Internal_Sym));
   VAR_30->symbol.the_bfd = VAR_24;

   VAR_30->symbol.name = FUNC_8 (VAR_24, VAR_27, VAR_32, ((void*)0));

   VAR_30->symbol.value = VAR_32->st_value;

   if (VAR_32->st_shndx == VAR_20)
     {
       VAR_30->symbol.section = VAR_23;
     }
   else if (VAR_32->st_shndx < VAR_19
     || VAR_32->st_shndx > VAR_18)
     {
       VAR_30->symbol.section = FUNC_10 (VAR_24,
        VAR_32->st_shndx);
       if (VAR_30->symbol.section == ((void*)0))
  {



    VAR_30->symbol.section = VAR_21;
  }
     }
   else if (VAR_32->st_shndx == VAR_16)
     {
       VAR_30->symbol.section = VAR_21;
     }
   else if (VAR_32->st_shndx == VAR_17)
     {
       VAR_30->symbol.section = VAR_22;




       VAR_30->symbol.value = VAR_32->st_size;
     }
   else
     VAR_30->symbol.section = VAR_21;



   if ((VAR_24->flags & (VAR_13 | VAR_12)) != 0)
     VAR_30->symbol.value -= VAR_30->symbol.section->vma;

   switch (FUNC_0 (VAR_32->st_info))
     {
     case 136:
       VAR_30->symbol.flags |= VAR_5;
       break;
     case 137:
       if (VAR_32->st_shndx != VAR_20 && VAR_32->st_shndx != VAR_17)
  VAR_30->symbol.flags |= VAR_4;
       break;
     case 135:
       VAR_30->symbol.flags |= VAR_11;
       break;
     }

   switch (FUNC_1 (VAR_32->st_info))
     {
     case 130:
       VAR_30->symbol.flags |= VAR_8 | VAR_0;
       break;
     case 134:
       VAR_30->symbol.flags |= VAR_2 | VAR_0;
       break;
     case 133:
       VAR_30->symbol.flags |= VAR_3;
       break;
     case 132:
       VAR_30->symbol.flags |= VAR_6;
       break;
     case 128:
       VAR_30->symbol.flags |= VAR_10;
       break;
     case 131:
       VAR_30->symbol.flags |= VAR_7;
       break;
     case 129:
       VAR_30->symbol.flags |= VAR_9;
       break;
     }

   if (VAR_26)
     VAR_30->symbol.flags |= VAR_1;

   if (VAR_35 != ((void*)0))
     {
       Elf_Internal_Versym VAR_39;

       FUNC_4 (VAR_24, VAR_35, &VAR_39);
       VAR_30->version = VAR_39.vs_vers;
       VAR_35++;
     }


   if (VAR_37->elf_backend_symbol_processing)
     (*VAR_37->elf_backend_symbol_processing) (VAR_24, &VAR_30->symbol);
 }
    }


  if (VAR_37->elf_backend_symbol_table_processing)
    (*VAR_37->elf_backend_symbol_table_processing) (VAR_24, VAR_31, VAR_29);



  VAR_29 = VAR_30 - VAR_31;


  if (VAR_25)
    {
      long VAR_40 = VAR_29;

      VAR_30 = VAR_31;
      while (VAR_40-- > 0)
 {
   *VAR_25++ = &VAR_30->symbol;
   VAR_30++;
 }
      *VAR_25 = 0;
    }

  if (VAR_36 != ((void*)0))
    FUNC_15 (VAR_36);
  if (VAR_34 != ((void*)0) && VAR_27->contents != (unsigned char *) VAR_34)
    FUNC_15 (VAR_34);
  return VAR_29;

error_return:
  if (VAR_36 != ((void*)0))
    FUNC_15 (VAR_36);
  if (VAR_34 != ((void*)0) && VAR_27->contents != (unsigned char *) VAR_34)
    FUNC_15 (VAR_34);
  return -1;
}
