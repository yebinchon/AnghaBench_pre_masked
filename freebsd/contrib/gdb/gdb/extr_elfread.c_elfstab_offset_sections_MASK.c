
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_section_info {char* filename; scalar_t__ found; int num_sections; int * sections; struct stab_section_info* next; } ;
struct section_offsets {int * offsets; } ;
struct partial_symtab {char* filename; struct section_offsets* section_offsets; } ;
struct objfile {int num_sections; int objfile_obstack; struct dbx_symfile_info* sym_stab_info; } ;
struct dbx_symfile_info {struct stab_section_info* stab_section_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_0 ;

void
FUNC_5 (struct objfile *VAR_1, struct partial_symtab *VAR_2)
{
  char *VAR_3 = VAR_2->filename;
  struct dbx_symfile_info *VAR_4 = VAR_1->sym_stab_info;
  struct stab_section_info *VAR_5 = VAR_4->stab_section_info;
  struct stab_section_info *VAR_6 = 0;
  int VAR_7;
  char *VAR_8;



  while (0 != (VAR_8 = FUNC_3 (VAR_3, '/')))
    VAR_3 = VAR_8 + 1;




  for (; VAR_5; VAR_5 = VAR_5->next)
    {
      if (VAR_3[0] == VAR_5->filename[0]
   && FUNC_4 (VAR_3, VAR_5->filename) == 0)
 {


   if (0 == VAR_5->found)
     break;
   VAR_6 = VAR_5;
 }
    }

  if (VAR_5 == 0 && VAR_6 != 0)
    {
      FUNC_1 (&VAR_0,
   "elf/stab section information questionable for %s", VAR_3);
      VAR_5 = VAR_6;
    }

  if (VAR_5)
    {

      VAR_5->found++;
      VAR_2->section_offsets = (struct section_offsets *)
 FUNC_2 (&VAR_1->objfile_obstack,
         FUNC_0 (VAR_1->num_sections));
      for (VAR_7 = 0; VAR_7 < VAR_5->num_sections; VAR_7++)
 (VAR_2->section_offsets)->offsets[VAR_7] = VAR_5->sections[VAR_7];
      return;
    }


  if (VAR_4->stab_section_info)
    FUNC_1 (&VAR_0,
        "elf/stab section information missing for %s", VAR_3);
}
