
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct dummy_frame {int call_hi; int call_lo; int id; int top; int sp; int fp; int pc; struct dummy_frame* next; } ;


 struct dummy_frame* VAR_0 ;
 int FUNC_0 (struct ui_file*,int ) ;
 int FUNC_1 (struct ui_file*,char*,...) ;
 int FUNC_2 (struct dummy_frame*,struct ui_file*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct ui_file *VAR_1)
{
  struct dummy_frame *VAR_2;
  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {
      FUNC_2 (VAR_2, VAR_1);
      FUNC_1 (VAR_1, ":");
      FUNC_1 (VAR_1, " pc=0x%s", FUNC_3 (VAR_2->pc));
      FUNC_1 (VAR_1, " fp=0x%s", FUNC_3 (VAR_2->fp));
      FUNC_1 (VAR_1, " sp=0x%s", FUNC_3 (VAR_2->sp));
      FUNC_1 (VAR_1, " top=0x%s", FUNC_3 (VAR_2->top));
      FUNC_1 (VAR_1, " id=");
      FUNC_0 (VAR_1, VAR_2->id);
      FUNC_1 (VAR_1, " call_lo=0x%s", FUNC_3 (VAR_2->call_lo));
      FUNC_1 (VAR_1, " call_hi=0x%s", FUNC_3 (VAR_2->call_hi));
      FUNC_1 (VAR_1, "\n");
    }
}
