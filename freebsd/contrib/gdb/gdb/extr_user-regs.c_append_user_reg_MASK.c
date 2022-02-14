
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_reg_read_ftype ;
struct user_reg {char const* name; struct user_reg* next; int * read; } ;
struct gdb_user_regs {struct user_reg** last; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (struct gdb_user_regs *VAR_0, const char *VAR_1,
   user_reg_read_ftype *VAR_2, struct user_reg *VAR_3)
{



  FUNC_0 (VAR_3 != ((void*)0));
  VAR_3->name = VAR_1;
  VAR_3->read = VAR_2;
  VAR_3->next = ((void*)0);
  (*VAR_0->last) = VAR_3;
  VAR_0->last = &(*VAR_0->last)->next;
}
