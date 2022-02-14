
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dwarf_section {int name; } ;
typedef enum dwarf_section_display_enum { ____Placeholder_dwarf_section_display_enum } dwarf_section_display_enum ;
typedef scalar_t__ bfd_size_type ;
struct TYPE_6__ {int (* display ) (struct dwarf_section*,int *) ;struct dwarf_section section; } ;
struct TYPE_5__ {scalar_t__ sh_size; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 char* FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int,int *) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (struct dwarf_section*,int *) ;

__attribute__((used)) static int
FUNC_8 (Elf_Internal_Shdr *VAR_4, FILE *VAR_5)
{
  char *VAR_6 = FUNC_0 (VAR_4);
  bfd_size_type VAR_7;
  int VAR_8 = 1;
  enum dwarf_section_display_enum VAR_9;

  VAR_7 = VAR_4->sh_size;
  if (VAR_7 == 0)
    {
      FUNC_5 (FUNC_1("\nSection '%s' has no debugging data.\n"), VAR_6);
      return 0;
    }

  if (FUNC_2 (VAR_6, ".gnu.linkonce.wi."))
    VAR_6 = ".debug_info";


  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    if (FUNC_6 (VAR_1[VAR_9].section.name, VAR_6))
      {
 struct dwarf_section *VAR_10 = &VAR_1 [VAR_9].section;

 if (FUNC_4 (VAR_9, VAR_5))
   {
     VAR_8 &= VAR_1[VAR_9].display (VAR_10, VAR_5);

     if (VAR_9 != VAR_2 && VAR_9 != VAR_0)
       FUNC_3 (VAR_9);
   }

 break;
      }

  if (VAR_9 == VAR_3)
    {
      FUNC_5 (FUNC_1("Unrecognized debug section: %s\n"), VAR_6);
      VAR_8 = 0;
    }

  return VAR_8;
}
