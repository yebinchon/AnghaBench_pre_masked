
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct attr_value {int num_insns; struct attr_value* next; int value; TYPE_2__* first_insn; } ;
struct attr_desc {char* name; scalar_t__ is_const; struct attr_value* first_value; int is_numeric; } ;
struct TYPE_4__ {TYPE_1__* def; } ;
struct TYPE_3__ {int insn_code; int insn_index; } ;


 struct attr_value* FUNC_0 (struct attr_desc*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct attr_desc*,struct attr_value*,int,char*,char*,int,int ) ;
 int FUNC_3 (struct attr_desc*,int,int ,char*,char*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_4 (struct attr_desc *VAR_1)
{
  struct attr_value *VAR_2, *VAR_3;



  VAR_3 = FUNC_0 (VAR_1);



  if (!VAR_1->is_numeric)
    FUNC_1 ("enum attr_%s\n", VAR_1->name);
  else
    FUNC_1 ("int\n");



  if (VAR_1->name[0] == '*')
    FUNC_1 ("%s (rtx insn ATTRIBUTE_UNUSED)\n", &VAR_1->name[1]);
  else if (VAR_1->is_const == 0)
    FUNC_1 ("get_attr_%s (rtx insn ATTRIBUTE_UNUSED)\n", VAR_1->name);
  else
    {
      FUNC_1 ("get_attr_%s (void)\n", VAR_1->name);
      FUNC_1 ("{\n");

      for (VAR_2 = VAR_1->first_value; VAR_2; VAR_2 = VAR_2->next)
 if (VAR_2->num_insns == 1)
   FUNC_3 (VAR_1, 2, VAR_2->value, "return", ";",
     VAR_0, VAR_2->first_insn->def->insn_code,
     VAR_2->first_insn->def->insn_index);
 else if (VAR_2->num_insns != 0)
   FUNC_3 (VAR_1, 2, VAR_2->value, "return", ";",
     VAR_0, -2, 0);

      FUNC_1 ("}\n\n");
      return;
    }

  FUNC_1 ("{\n");
  FUNC_1 ("  switch (recog_memoized (insn))\n");
  FUNC_1 ("    {\n");

  for (VAR_2 = VAR_1->first_value; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2 != VAR_3)
      FUNC_2 (VAR_1, VAR_2, 1, "return", ";", 4, VAR_0);

  FUNC_2 (VAR_1, VAR_3, 0, "return", ";", 4, VAR_0);
  FUNC_1 ("    }\n}\n\n");
}
