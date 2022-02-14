
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_ent {struct insn_def* def; } ;
struct insn_def {int insn_code; int vec_idx; int def; struct insn_def* next; } ;
struct attr_value {int dummy; } ;
struct attr_desc {struct attr_value* default_val; int name; scalar_t__ is_const; } ;
typedef int * rtx ;


 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 struct insn_def* VAR_0 ;
 struct attr_value* FUNC_5 (int *,struct attr_desc*,int ) ;
 int FUNC_6 (struct attr_value*,struct insn_ent*) ;
 struct insn_ent* FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9 (struct attr_desc *VAR_1)
{
  struct attr_value *VAR_2;
  struct insn_ent *VAR_3;
  struct insn_def *VAR_4;
  int VAR_5;
  rtx VAR_6;



  if (VAR_1->is_const)
    return;

  for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
    {


      VAR_6 = ((void*)0);
      if (FUNC_2 (VAR_4->def, VAR_4->vec_idx))
 for (VAR_5 = 0; VAR_5 < FUNC_4 (VAR_4->def, VAR_4->vec_idx); VAR_5++)
   if (! FUNC_8 (FUNC_1 (FUNC_0 (FUNC_3 (VAR_4->def, VAR_4->vec_idx, VAR_5), 0), 0),
         VAR_1->name))
     VAR_6 = FUNC_0 (FUNC_3 (VAR_4->def, VAR_4->vec_idx, VAR_5), 1);

      if (VAR_6 == ((void*)0))
 VAR_2 = VAR_1->default_val;
      else
 VAR_2 = FUNC_5 (VAR_6, VAR_1, VAR_4->insn_code);

      VAR_3 = FUNC_7 (sizeof (struct insn_ent));
      VAR_3->def = VAR_4;
      FUNC_6 (VAR_2, VAR_3);
    }
}
