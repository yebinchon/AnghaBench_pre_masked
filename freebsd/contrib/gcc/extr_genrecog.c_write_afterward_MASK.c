
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision {scalar_t__ subroutine_number; int number; int position; } ;


 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2 (struct decision *VAR_0, struct decision *VAR_1,
   const char *VAR_2)
{
  if (!VAR_1 || VAR_0->subroutine_number > 0)
    FUNC_1("%sgoto ret0;\n", VAR_2);
  else
    {
      FUNC_0 (VAR_0->position, VAR_1->position, VAR_2);
      FUNC_1 ("%sgoto L%d;\n", VAR_2, VAR_1->number);
    }
}
