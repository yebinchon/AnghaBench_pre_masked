
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_section_info {struct stab_section_info* next; } ;
struct objfile {int md; struct dbx_symfile_info* sym_stab_info; } ;
struct dbx_symfile_info {struct stab_section_info* stab_section_info; } ;


 int FUNC_0 (int ,struct stab_section_info*) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_0)
{
  struct objfile *VAR_1 = (struct objfile *) VAR_0;
  struct dbx_symfile_info *VAR_2 = VAR_1->sym_stab_info;
  struct stab_section_info *VAR_3, *VAR_4;

  VAR_3 = VAR_2->stab_section_info;
  while (VAR_3)
    {
      VAR_4 = VAR_3->next;
      FUNC_0 (VAR_1->md, VAR_3);
      VAR_3 = VAR_4;
    }

  VAR_2->stab_section_info = 0;
}
