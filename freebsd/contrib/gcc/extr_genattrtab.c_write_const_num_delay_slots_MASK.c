
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_value {int first_insn; int value; struct attr_value* next; } ;
struct attr_desc {struct attr_value* first_value; } ;


 struct attr_desc* FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct attr_desc *VAR_2 = FUNC_0 (&VAR_1, 0);
  struct attr_value *VAR_3;

  if (VAR_2)
    {
      FUNC_1 ("int\nconst_num_delay_slots (rtx insn)\n");
      FUNC_1 ("{\n");
      FUNC_1 ("  switch (recog_memoized (insn))\n");
      FUNC_1 ("    {\n");

      for (VAR_3 = VAR_2->first_value; VAR_3; VAR_3 = VAR_3->next)
 {
   VAR_0 = 0;
   FUNC_2 (VAR_3->value);
   if (VAR_0)
     FUNC_3 (VAR_3->first_insn, 4);
 }

      FUNC_1 ("    default:\n");
      FUNC_1 ("      return 1;\n");
      FUNC_1 ("    }\n}\n\n");
    }
}
