
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_symbol {struct coff_symbol* next; } ;
struct coff_sfile {int dummy; } ;
struct coff_section {int dummy; } ;
struct coff_scope {struct coff_scope* next; struct coff_scope* list_head; struct coff_symbol* vars_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct coff_sfile*,struct coff_section*,struct coff_symbol*,int) ;
 int FUNC_1 (struct coff_section*,struct coff_scope*,int) ;
 int FUNC_2 (struct coff_sfile*,struct coff_section*,struct coff_scope*,int,int) ;
 int FUNC_3 (int ,struct coff_sfile*,int) ;

__attribute__((used)) static void
FUNC_4 (struct coff_section *VAR_2, struct coff_sfile *VAR_3, struct coff_scope *VAR_4, int VAR_5, int VAR_6)
{
  struct coff_symbol *VAR_7;
  struct coff_scope *VAR_8;

  if (VAR_4->vars_head
      || (VAR_4->list_head && VAR_4->list_head->vars_head))
    {
      FUNC_2 (VAR_3, VAR_2, VAR_4, VAR_6, VAR_5);

      if (VAR_5 == 0)
 FUNC_3 (VAR_1, VAR_3, VAR_5 + 1);

      for (VAR_7 = VAR_4->vars_head; VAR_7; VAR_7 = VAR_7->next)
 FUNC_0 (VAR_3, VAR_2, VAR_7, VAR_5);

      for (VAR_8 = VAR_4->list_head; VAR_8; VAR_8 = VAR_8->next)
 FUNC_4 (VAR_2, VAR_3, VAR_8, VAR_5 + 1, VAR_0);

      FUNC_1 (VAR_2, VAR_4, VAR_6);
    }
}
