
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stab_section_info {int num_sections; char* filename; scalar_t__* sections; struct stab_section_info* next; } ;
struct objfile {int md; int objfile_obstack; int section_offsets; int obfd; struct dbx_symfile_info* sym_stab_info; } ;
struct minimal_symbol {char* filename; } ;
struct dbx_symfile_info {struct stab_section_info* stab_section_info; } ;
typedef enum minimal_symbol_type { ____Placeholder_minimal_symbol_type } minimal_symbol_type ;
struct TYPE_9__ {unsigned short st_shndx; unsigned long st_size; } ;
struct TYPE_10__ {TYPE_1__ internal_elf_sym; } ;
typedef TYPE_2__ elf_symbol_type ;
struct TYPE_11__ {char* name; int flags; scalar_t__ value; TYPE_4__* section; } ;
typedef TYPE_3__ asymbol ;
struct TYPE_12__ {scalar_t__ vma; int flags; int index; } ;
typedef unsigned long MSYMBOL_SIZE ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,struct minimal_symbol*) ;
 int FUNC_2 (struct objfile*) ;
 int FUNC_3 (struct objfile*) ;
 int FUNC_4 (struct objfile*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 TYPE_4__ VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_4__ VAR_9 ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct stab_section_info*,int ,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_9 (char*,int ,int *) ;
 struct minimal_symbol* FUNC_10 (char*,scalar_t__,int,TYPE_4__*,struct objfile*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int VAR_19 ;
 scalar_t__ FUNC_13 (int ,size_t) ;

__attribute__((used)) static void
FUNC_14 (struct objfile *VAR_20, int VAR_21,
   long VAR_22, asymbol **VAR_23)
{
  long VAR_24;
  asymbol *VAR_25;
  long VAR_26;
  CORE_ADDR VAR_27;
  CORE_ADDR VAR_28;
  enum minimal_symbol_type VAR_29;


  struct stab_section_info *VAR_30 = ((void*)0);


  asymbol *VAR_31 = 0;




  struct dbx_symfile_info *VAR_32 = VAR_20->sym_stab_info;
  int VAR_33 = (FUNC_5 (VAR_20->obfd) == 0);

  if (1)
    {
      for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
 {
   VAR_25 = VAR_23[VAR_26];
   if (VAR_25->name == ((void*)0) || *VAR_25->name == '\0')
     {


       continue;
     }

          VAR_28 = FUNC_0 (VAR_20->section_offsets, VAR_25->section->index);
   if (VAR_21
       && VAR_25->section == &VAR_9
       && (VAR_25->flags & VAR_1))
     {
       struct minimal_symbol *VAR_34;
       VAR_27 = VAR_25->value;
       if (VAR_27 == 0)
  continue;
       VAR_27 += VAR_28;
       VAR_34 = FUNC_10
  ((char *) VAR_25->name, VAR_27,
   VAR_16, VAR_25->section, VAR_20);




       continue;
     }




   if (VAR_21 && !VAR_33)
     continue;
   if (VAR_25->flags & VAR_0)
     {


       if (VAR_30 != ((void*)0))
  {
    VAR_30->next = VAR_32->stab_section_info;
    VAR_32->stab_section_info = VAR_30;
    VAR_30 = ((void*)0);
  }
       VAR_31 = VAR_25;





     }
   else if (VAR_25->flags & (VAR_2 | VAR_3 | VAR_4))
     {
       struct minimal_symbol *VAR_35;





       VAR_27 = VAR_25->value + VAR_25->section->vma;

       if (VAR_25->section != &VAR_8)
  {
    VAR_27 += VAR_28;
  }



       if (VAR_25->section == &VAR_8)
  {



    unsigned short VAR_36 =
    ((elf_symbol_type *) VAR_25)->internal_elf_sym.st_shndx;

    switch (VAR_36)
      {
      case 128:
        VAR_29 = VAR_17;
        break;
      case 129:
        VAR_29 = VAR_12;
        break;
      case 130:
        VAR_29 = VAR_11;
        break;
      default:
        VAR_29 = VAR_10;
      }



    if (VAR_29 != VAR_10)
      {
        if (VAR_25->name[0] == '.')
   continue;
        VAR_27 += VAR_28;
      }
  }
       else if (VAR_25->section->flags & VAR_6)
  {
    if (VAR_25->flags & VAR_2)
      {
        VAR_29 = VAR_17;
      }
    else if ((VAR_25->name[0] == '.' && VAR_25->name[1] == 'L')
      || ((VAR_25->flags & VAR_3)
          && VAR_25->name[0] == '$'
          && VAR_25->name[1] == 'L'))







      continue;
    else
      {
        VAR_29 = VAR_15;
      }
  }
       else if (VAR_25->section->flags & VAR_5)
  {
    if (VAR_25->flags & (VAR_2 | VAR_4))
      {
        if (VAR_25->section->flags & VAR_7)
   {
     VAR_29 = VAR_12;
   }
        else
   {
     VAR_29 = VAR_11;
   }
      }
    else if (VAR_25->flags & VAR_3)
      {


        int VAR_37;
        if (FUNC_11 ("Bbss.bss", VAR_25->name) == 0)
   VAR_37 = FUNC_2 (VAR_20);
        else if (FUNC_11 ("Ddata.data", VAR_25->name) == 0)
   VAR_37 = FUNC_3 (VAR_20);
        else if (FUNC_11 ("Drodata.rodata", VAR_25->name) == 0)
   VAR_37 = FUNC_4 (VAR_20);
        else
   VAR_37 = -1;
        if (VAR_37 >= 0)
   {


     if (VAR_30 == ((void*)0))
       {
         int VAR_38;
         size_t VAR_39;

         VAR_38
    = FUNC_7 (FUNC_2 (VAR_20),
           FUNC_7 (FUNC_3 (VAR_20),
         FUNC_4 (VAR_20)));
         VAR_39 = (sizeof (struct stab_section_info)
          + (sizeof (CORE_ADDR)
      * VAR_38));
         VAR_30 = (struct stab_section_info *)
    FUNC_13 (VAR_20->md, VAR_39);
         FUNC_8 (VAR_30, 0, VAR_39);
         VAR_30->num_sections = VAR_38;
         if (VAR_31 == ((void*)0))
    {
      FUNC_6 (&VAR_19,
          "elf/stab section information %s without a preceding file symbol",
          VAR_25->name);
    }
         else
    {
      VAR_30->filename =
        (char *) VAR_31->name;
    }
       }
     if (VAR_30->sections[VAR_37] != 0)
       FUNC_6 (&VAR_19,
           "duplicated elf/stab section information for %s",
           VAR_30->filename);

     VAR_27 = VAR_25->value + VAR_25->section->vma;


     if (VAR_25->section != &VAR_8)
       VAR_27 += VAR_28;
     VAR_30->sections[VAR_37] = VAR_27;


     continue;
   }


        if (VAR_25->section->flags & VAR_7)
   {
     VAR_29 = VAR_14;
   }
        else
   {
     VAR_29 = VAR_13;
   }
      }
    else
      {
        VAR_29 = VAR_18;
      }
  }
       else
  {





    continue;
  }
       VAR_35 = FUNC_10
  ((char *) VAR_25->name, VAR_27,
   VAR_29, VAR_25->section, VAR_20);
       if (VAR_35)
       {

  unsigned long VAR_40 = ((elf_symbol_type *) VAR_25)->internal_elf_sym.st_size;
  MSYMBOL_SIZE(VAR_41) = VAR_40;
       }




       FUNC_1 (VAR_25, VAR_35);
     }
 }
    }
}
