
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_reg {struct user_reg* next; } ;
struct gdbarch {int dummy; } ;
struct gdb_user_regs {struct user_reg* first; } ;


 struct gdb_user_regs* FUNC_0 (struct gdbarch*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct user_reg *
FUNC_1 (struct gdbarch *VAR_1, int VAR_2)
{
  struct gdb_user_regs *VAR_3 = FUNC_0 (VAR_1, VAR_0);
  struct user_reg *VAR_4;
  for (VAR_4 = VAR_3->first; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_2 == 0)
 return VAR_4;
      VAR_2--;
    }
  return ((void*)0);
}
