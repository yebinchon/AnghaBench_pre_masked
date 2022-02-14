
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct elf_backend_data {char* (* elf_backend_print_symbol_all ) (int *,void*,TYPE_4__*) ;} ;
struct TYPE_14__ {unsigned char st_other; int st_size; int st_value; } ;
struct TYPE_15__ {unsigned int version; TYPE_2__ internal_elf_sym; } ;
typedef TYPE_3__ elf_symbol_type ;
typedef int bfd_vma ;
typedef int bfd_print_symbol_type ;
typedef int bfd ;
struct TYPE_16__ {char const* name; TYPE_10__* section; scalar_t__ flags; int value; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_19__ {unsigned int cverdefs; TYPE_5__* verref; TYPE_1__* verdef; int dynverref_section; int dynverdef_section; int dynversym_section; } ;
struct TYPE_18__ {unsigned int vna_other; char* vna_nodename; struct TYPE_18__* vna_nextptr; } ;
struct TYPE_17__ {TYPE_6__* vn_auxptr; struct TYPE_17__* vn_nextref; } ;
struct TYPE_13__ {char* vd_nodename; } ;
struct TYPE_12__ {char* name; } ;
typedef int FILE ;
typedef TYPE_5__ Elf_Internal_Verneed ;
typedef TYPE_6__ Elf_Internal_Vernaux ;





 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_10__*) ;



 int FUNC_2 (int *,int *,TYPE_4__*) ;
 TYPE_8__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 struct elf_backend_data* FUNC_5 (int *) ;
 int FUNC_6 (char,int *) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int *,void*,TYPE_4__*) ;

void
FUNC_9 (bfd *VAR_2,
        void *VAR_3,
        asymbol *VAR_4,
        bfd_print_symbol_type VAR_5)
{
  FILE *VAR_6 = VAR_3;
  switch (VAR_5)
    {
    case 128:
      FUNC_4 (VAR_6, "%s", VAR_4->name);
      break;
    case 129:
      FUNC_4 (VAR_6, "elf ");
      FUNC_0 (VAR_2, VAR_6, VAR_4->value);
      FUNC_4 (VAR_6, " %lx", (long) VAR_4->flags);
      break;
    case 130:
      {
 const char *VAR_7;
 const char *VAR_8 = ((void*)0);
 const struct elf_backend_data *VAR_9;
 unsigned char VAR_10;
 bfd_vma VAR_11;

 VAR_7 = VAR_4->section ? VAR_4->section->name : "(*none*)";

 VAR_9 = FUNC_5 (VAR_2);
 if (VAR_9->elf_backend_print_symbol_all)
   VAR_8 = (*VAR_9->elf_backend_print_symbol_all) (VAR_2, VAR_3, VAR_4);

 if (VAR_8 == ((void*)0))
   {
     VAR_8 = VAR_4->name;
     FUNC_2 (VAR_2, VAR_6, VAR_4);
   }

 FUNC_4 (VAR_6, " %s\t", VAR_7);




 if (FUNC_1 (VAR_4->section))
   VAR_11 = ((elf_symbol_type *) VAR_4)->internal_elf_sym.st_value;
 else
   VAR_11 = ((elf_symbol_type *) VAR_4)->internal_elf_sym.st_size;
 FUNC_0 (VAR_2, VAR_6, VAR_11);


 if (FUNC_3 (VAR_2)->dynversym_section != 0
     && (FUNC_3 (VAR_2)->dynverdef_section != 0
  || FUNC_3 (VAR_2)->dynverref_section != 0))
   {
     unsigned int VAR_12;
     const char *VAR_13;

     VAR_12 = ((elf_symbol_type *) VAR_4)->version & VAR_1;

     if (VAR_12 == 0)
       VAR_13 = "";
     else if (VAR_12 == 1)
       VAR_13 = "Base";
     else if (VAR_12 <= FUNC_3 (VAR_2)->cverdefs)
       VAR_13 =
  FUNC_3 (VAR_2)->verdef[VAR_12 - 1].vd_nodename;
     else
       {
  Elf_Internal_Verneed *VAR_14;

  VAR_13 = "";
  for (VAR_14 = FUNC_3 (VAR_2)->verref;
       VAR_14 != ((void*)0);
       VAR_14 = VAR_14->vn_nextref)
    {
      Elf_Internal_Vernaux *VAR_15;

      for (VAR_15 = VAR_14->vn_auxptr; VAR_15 != ((void*)0); VAR_15 = VAR_15->vna_nextptr)
        {
   if (VAR_15->vna_other == VAR_12)
     {
       VAR_13 = VAR_15->vna_nodename;
       break;
     }
        }
    }
       }

     if ((((elf_symbol_type *) VAR_4)->version & VAR_0) == 0)
       FUNC_4 (VAR_6, "  %-11s", VAR_13);
     else
       {
  int VAR_16;

  FUNC_4 (VAR_6, " (%s)", VAR_13);
  for (VAR_16 = 10 - FUNC_7 (VAR_13); VAR_16 > 0; --VAR_16)
    FUNC_6 (' ', VAR_6);
       }
   }


 VAR_10 = ((elf_symbol_type *) VAR_4)->internal_elf_sym.st_other;

 switch (VAR_10)
   {
   case 0: break;
   case 132: FUNC_4 (VAR_6, " .internal"); break;
   case 133: FUNC_4 (VAR_6, " .hidden"); break;
   case 131: FUNC_4 (VAR_6, " .protected"); break;
   default:


     FUNC_4 (VAR_6, " 0x%02x", (unsigned int) VAR_10);
   }

 FUNC_4 (VAR_6, " %s", VAR_8);
      }
      break;
    }
}
