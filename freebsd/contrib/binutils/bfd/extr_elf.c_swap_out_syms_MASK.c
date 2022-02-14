
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct elf_backend_data {int (* elf_backend_get_symbol_type ) (TYPE_8__*,int) ;TYPE_1__* s; scalar_t__ (* elf_backend_name_local_section_symbols ) (int *) ;} ;
struct bfd_strtab_hash {int dummy; } ;
typedef int flagword ;
struct TYPE_26__ {int st_value; int st_size; int st_shndx; scalar_t__ st_other; } ;
struct TYPE_21__ {TYPE_8__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_22__ {int value; int flags; char* name; TYPE_4__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_23__ {int flags; int name; scalar_t__ vma; struct TYPE_23__* output_section; scalar_t__ output_offset; } ;
typedef TYPE_4__ asection ;
struct TYPE_25__ {int sh_entsize; int sh_size; int sh_addralign; scalar_t__ sh_name; scalar_t__ sh_info; scalar_t__ sh_link; scalar_t__ sh_addr; scalar_t__ sh_flags; void* sh_type; int * contents; } ;
struct TYPE_24__ {unsigned long st_name; int st_value; int st_size; int st_shndx; scalar_t__ st_other; void* st_info; } ;
struct TYPE_20__ {int sizeof_sym; int log_file_align; int (* swap_symbol_out ) (int *,TYPE_5__*,int *,int *) ;} ;
struct TYPE_19__ {int strtab_section; int shstrtab_section; int symtab_shndx_section; TYPE_6__ symtab_shndx_hdr; TYPE_6__ strtab_hdr; TYPE_6__ symtab_hdr; } ;
typedef TYPE_5__ Elf_Internal_Sym ;
typedef TYPE_6__ Elf_Internal_Shdr ;
typedef int Elf_External_Sym_Shndx ;


 int FUNC_0 (int) ;
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
 void* FUNC_1 (int,int) ;
 int VAR_10 ;





 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int *,TYPE_4__*) ;
 struct bfd_strtab_hash* FUNC_4 () ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (struct bfd_strtab_hash*,char*,int,int) ;
 int FUNC_7 (struct bfd_strtab_hash*) ;
 int FUNC_8 (struct bfd_strtab_hash*) ;
 int * FUNC_9 (int *,int,int) ;
 int VAR_28 ;
 TYPE_3__** FUNC_10 (int *) ;
 TYPE_4__* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int * FUNC_18 (int *,int,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 TYPE_2__* FUNC_23 (int *,TYPE_3__*) ;
 TYPE_10__* FUNC_24 (int *) ;
 struct elf_backend_data* FUNC_25 (int *) ;
 int FUNC_26 (int *,TYPE_5__*,int *,int *) ;
 scalar_t__ FUNC_27 (int *) ;
 int FUNC_28 (TYPE_8__*,int) ;
 int FUNC_29 (int *,TYPE_5__*,int *,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_30 (bfd *VAR_29,
        struct bfd_strtab_hash **VAR_30,
        int VAR_31)
{
  const struct elf_backend_data *VAR_32;
  int VAR_33;
  asymbol **VAR_34;
  struct bfd_strtab_hash *VAR_35;
  Elf_Internal_Shdr *VAR_36;
  Elf_Internal_Shdr *VAR_37;
  Elf_Internal_Shdr *VAR_38;
  bfd_byte *VAR_39;
  bfd_byte *VAR_40;
  int VAR_41;
  bfd_size_type VAR_42;
  bfd_boolean VAR_43;

  if (!FUNC_20 (VAR_29))
    return VAR_10;


  VAR_35 = FUNC_4 ();
  if (VAR_35 == ((void*)0))
    return VAR_10;

  VAR_32 = FUNC_25 (VAR_29);
  VAR_33 = FUNC_12 (VAR_29);
  VAR_36 = &FUNC_24 (VAR_29)->symtab_hdr;
  VAR_36->sh_type = VAR_14;
  VAR_36->sh_entsize = VAR_32->s->sizeof_sym;
  VAR_36->sh_size = VAR_36->sh_entsize * (VAR_33 + 1);
  VAR_36->sh_info = FUNC_21 (VAR_29) + 1;
  VAR_36->sh_addralign = 1 << VAR_32->s->log_file_align;

  VAR_38 = &FUNC_24 (VAR_29)->strtab_hdr;
  VAR_38->sh_type = VAR_13;

  VAR_39 = FUNC_9 (VAR_29, 1 + VAR_33, VAR_32->s->sizeof_sym);
  if (VAR_39 == ((void*)0))
    {
      FUNC_7 (VAR_35);
      return VAR_10;
    }
  VAR_36->contents = VAR_39;

  VAR_40 = ((void*)0);
  VAR_37 = &FUNC_24 (VAR_29)->symtab_shndx_hdr;
  if (VAR_37->sh_name != 0)
    {
      VAR_42 = (bfd_size_type) (1 + VAR_33) * sizeof (Elf_External_Sym_Shndx);
      VAR_40 = FUNC_18 (VAR_29, 1 + VAR_33,
        sizeof (Elf_External_Sym_Shndx));
      if (VAR_40 == ((void*)0))
 {
   FUNC_7 (VAR_35);
   return VAR_10;
 }

      VAR_37->contents = VAR_40;
      VAR_37->sh_type = VAR_15;
      VAR_37->sh_size = VAR_42;
      VAR_37->sh_addralign = sizeof (Elf_External_Sym_Shndx);
      VAR_37->sh_entsize = sizeof (Elf_External_Sym_Shndx);
    }


  {

    Elf_Internal_Sym VAR_44;
    VAR_44.st_name = 0;
    VAR_44.st_value = 0;
    VAR_44.st_size = 0;
    VAR_44.st_info = 0;
    VAR_44.st_other = 0;
    VAR_44.st_shndx = VAR_12;
    VAR_32->s->swap_symbol_out (VAR_29, &VAR_44, VAR_39, VAR_40);
    VAR_39 += VAR_32->s->sizeof_sym;
    if (VAR_40 != ((void*)0))
      VAR_40 += sizeof (Elf_External_Sym_Shndx);
  }

  VAR_43
    = (VAR_32->elf_backend_name_local_section_symbols
       && VAR_32->elf_backend_name_local_section_symbols (VAR_29));

  VAR_34 = FUNC_10 (VAR_29);
  for (VAR_41 = 0; VAR_41 < VAR_33; VAR_41++)
    {
      Elf_Internal_Sym VAR_45;
      bfd_vma VAR_46 = VAR_34[VAR_41]->value;
      elf_symbol_type *VAR_47;
      flagword VAR_48 = VAR_34[VAR_41]->flags;
      int VAR_49;

      if (!VAR_43
   && (VAR_48 & (VAR_6 | VAR_2)) == VAR_6)
 {

   VAR_45.st_name = 0;
 }
      else
 {
   VAR_45.st_name = (unsigned long) FUNC_6 (VAR_35,
           VAR_34[VAR_41]->name,
           VAR_27, VAR_10);
   if (VAR_45.st_name == (unsigned long) -1)
     {
       FUNC_7 (VAR_35);
       return VAR_10;
     }
 }

      VAR_47 = FUNC_23 (VAR_29, VAR_34[VAR_41]);

      if ((VAR_48 & VAR_6) == 0
   && FUNC_14 (VAR_34[VAR_41]->section))
 {



   VAR_45.st_size = VAR_46;
   if (VAR_47 == ((void*)0)
       || VAR_47->internal_elf_sym.st_value == 0)
     VAR_45.st_value = VAR_46 >= 16 ? 16 : (1 << FUNC_16 (VAR_46));
   else
     VAR_45.st_value = VAR_47->internal_elf_sym.st_value;
   VAR_45.st_shndx = FUNC_3
     (VAR_29, VAR_34[VAR_41]->section);
 }
      else
 {
   asection *VAR_50 = VAR_34[VAR_41]->section;
   int VAR_51;

   if (VAR_50->output_section)
     {
       VAR_46 += VAR_50->output_offset;
       VAR_50 = VAR_50->output_section;
     }


   if (! VAR_31)
     VAR_46 += VAR_50->vma;
   VAR_45.st_value = VAR_46;
   VAR_45.st_size = VAR_47 ? VAR_47->internal_elf_sym.st_size : 0;

   if (FUNC_13 (VAR_50)
       && VAR_47 != ((void*)0)
       && VAR_47->internal_elf_sym.st_shndx != 0)
     {



       VAR_51 = VAR_47->internal_elf_sym.st_shndx;
       switch (VAR_51)
  {
  case 131:
    VAR_51 = FUNC_22 (VAR_29);
    break;
  case 132:
    VAR_51 = FUNC_19 (VAR_29);
    break;
  case 129:
    VAR_51 = FUNC_24 (VAR_29)->strtab_section;
    break;
  case 130:
    VAR_51 = FUNC_24 (VAR_29)->shstrtab_section;
    break;
  case 128:
    VAR_51 = FUNC_24 (VAR_29)->symtab_shndx_section;
    break;
  default:
    break;
  }
     }
   else
     {
       VAR_51 = FUNC_3 (VAR_29, VAR_50);

       if (VAR_51 == -1)
  {
    asection *VAR_52;
    VAR_52 = FUNC_11 (VAR_29, VAR_50->name);
    if (VAR_52 == ((void*)0))
      {
        FUNC_5 (FUNC_2("Unable to find equivalent output section for symbol '%s' from section '%s'"),

       VAR_34[VAR_41]->name ? VAR_34[VAR_41]->name : "<Local sym>",
       VAR_50->name);
        FUNC_17 (VAR_28);
        FUNC_7 (VAR_35);
        return VAR_10;
      }

    VAR_51 = FUNC_3 (VAR_29, VAR_52);
    FUNC_0 (VAR_51 != -1);
  }
     }

   VAR_45.st_shndx = VAR_51;
 }

      if ((VAR_48 & VAR_8) != 0)
 VAR_49 = VAR_26;
      else if ((VAR_48 & VAR_1) != 0)
 VAR_49 = VAR_20;
      else if ((VAR_48 & VAR_4) != 0)
 VAR_49 = VAR_22;
      else if ((VAR_48 & VAR_5) != 0)
 VAR_49 = VAR_23;
      else if ((VAR_48 & VAR_7) != 0)
 VAR_49 = VAR_25;
      else
 VAR_49 = VAR_21;

      if (VAR_34[VAR_41]->section->flags & VAR_11)
 VAR_49 = VAR_26;


      if (VAR_47 != ((void*)0)
   && VAR_32->elf_backend_get_symbol_type)
 VAR_49 = ((*VAR_32->elf_backend_get_symbol_type)
  (&VAR_47->internal_elf_sym, VAR_49));

      if (VAR_48 & VAR_6)
 {
   if (VAR_48 & VAR_2)
     VAR_45.st_info = FUNC_1 (VAR_16, VAR_24);
   else
     VAR_45.st_info = FUNC_1 (VAR_17, VAR_24);
 }
      else if (FUNC_14 (VAR_34[VAR_41]->section))
 VAR_45.st_info = FUNC_1 (VAR_16, VAR_49);
      else if (FUNC_15 (VAR_34[VAR_41]->section))
 VAR_45.st_info = FUNC_1 (((VAR_48 & VAR_9)
        ? VAR_18
        : VAR_16),
       VAR_49);
      else if (VAR_48 & VAR_0)
 VAR_45.st_info = FUNC_1 (VAR_17, VAR_19);
      else
 {
   int VAR_53 = VAR_17;

   if (VAR_48 & VAR_3)
     VAR_53 = VAR_17;
   else if (VAR_48 & VAR_9)
     VAR_53 = VAR_18;
   else if (VAR_48 & VAR_2)
     VAR_53 = VAR_16;

   VAR_45.st_info = FUNC_1 (VAR_53, VAR_49);
 }

      if (VAR_47 != ((void*)0))
 VAR_45.st_other = VAR_47->internal_elf_sym.st_other;
      else
 VAR_45.st_other = 0;

      VAR_32->s->swap_symbol_out (VAR_29, &VAR_45, VAR_39, VAR_40);
      VAR_39 += VAR_32->s->sizeof_sym;
      if (VAR_40 != ((void*)0))
 VAR_40 += sizeof (Elf_External_Sym_Shndx);
    }

  *VAR_30 = VAR_35;
  VAR_38->sh_size = FUNC_8 (VAR_35);
  VAR_38->sh_type = VAR_13;

  VAR_38->sh_flags = 0;
  VAR_38->sh_addr = 0;
  VAR_38->sh_entsize = 0;
  VAR_38->sh_link = 0;
  VAR_38->sh_info = 0;
  VAR_38->sh_addralign = 1;

  return VAR_27;
}
