
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decision_head {struct decision* first; } ;
struct decision {scalar_t__ subroutine_number; char const* position; struct decision_head success; struct decision* next; TYPE_1__* afterward; int number; scalar_t__ need_label; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;
struct TYPE_2__ {char const* position; int number; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,char const*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct decision_head*,int,int) ;

__attribute__((used)) static void
FUNC_7 (struct decision_head *VAR_0, const char *VAR_1,
     enum routine_type VAR_2, int VAR_3)
{
  struct decision *VAR_4 = VAR_0->first;

  FUNC_4 ('\n');
  if (VAR_4->need_label)
    FUNC_1 (" ", VAR_4->number);

  if (! VAR_3 && VAR_4->subroutine_number > 0)
    {
      static const char * const VAR_5[] = {
   "recog", "split", "peephole2"
      };

      static const char * const VAR_6[] = {
   ", pnum_clobbers", "", ", _pmatch_len"
      };




      if (VAR_4->afterward)
 {
   FUNC_3 ("  tem = %s_%d (x0, insn%s);\n",
    VAR_5[VAR_2], VAR_4->subroutine_number, VAR_6[VAR_2]);
   if (FUNC_0 (VAR_2))
     FUNC_3 ("  if (tem != 0)\n    return tem;\n");
   else
     FUNC_3 ("  if (tem >= 0)\n    return tem;\n");

   FUNC_2 (VAR_4->position, VAR_4->afterward->position, "  ");
   FUNC_3 ("  goto L%d;\n", VAR_4->afterward->number);
 }
      else
 {
   FUNC_3 ("  return %s_%d (x0, insn%s);\n",
    VAR_5[VAR_2], VAR_4->subroutine_number, VAR_6[VAR_2]);
 }
    }
  else
    {
      int VAR_7 = FUNC_5 (VAR_4->position);

      FUNC_2 (VAR_1, VAR_4->position, "  ");
      FUNC_6 (VAR_0, VAR_7, VAR_2);

      for (VAR_4 = VAR_0->first; VAR_4; VAR_4 = VAR_4->next)
        if (VAR_4->success.first)
          FUNC_7 (&VAR_4->success, VAR_4->position, VAR_2, 0);
    }
}
