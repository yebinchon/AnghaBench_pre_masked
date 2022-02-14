
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dwarf_section {char* name; int * start; int size; int address; } ;
typedef enum dwarf_section_display_enum { ____Placeholder_dwarf_section_display_enum } dwarf_section_display_enum ;
typedef int buf ;
struct TYPE_6__ {scalar_t__ relocate; struct dwarf_section section; } ;
struct TYPE_5__ {int sh_size; int sh_offset; int sh_addr; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (void*,TYPE_1__*,int *) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* FUNC_2 (char*) ;
 int * FUNC_3 (int *,void*,int ,int,int ,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;

int
FUNC_5 (enum dwarf_section_display_enum VAR_1, void *VAR_2)
{
  struct dwarf_section *VAR_3 = &VAR_0 [VAR_1].section;
  Elf_Internal_Shdr *VAR_4;
  char VAR_5 [64];


  if (VAR_3->start != ((void*)0))
    return 1;


  VAR_4 = FUNC_2 (VAR_3->name);
  if (VAR_4 == ((void*)0))
    return 0;

  FUNC_4 (VAR_5, sizeof (VAR_5), FUNC_0("%s section data"), VAR_3->name);
  VAR_3->address = VAR_4->sh_addr;
  VAR_3->size = VAR_4->sh_size;
  VAR_3->start = FUNC_3 (((void*)0), VAR_2, VAR_4->sh_offset, 1,
        VAR_4->sh_size, VAR_5);

  if (VAR_0 [VAR_1].relocate)
    FUNC_1 (VAR_2, VAR_4, VAR_3->start);

  return VAR_3->start != ((void*)0);
}
