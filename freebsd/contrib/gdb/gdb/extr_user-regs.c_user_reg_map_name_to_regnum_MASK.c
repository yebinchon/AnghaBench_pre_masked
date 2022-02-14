
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_reg {char const* name; struct user_reg* next; } ;
struct gdbarch {int dummy; } ;
struct gdb_user_regs {struct user_reg* first; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gdb_user_regs* FUNC_0 (struct gdbarch*,int ) ;
 int FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch*) ;
 char* FUNC_3 (struct gdbarch*,int) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;
 int VAR_2 ;

int
FUNC_7 (struct gdbarch *VAR_3, const char *VAR_4,
        int VAR_5)
{

  if (VAR_5 < 0)
    VAR_5 = FUNC_5 (VAR_4);



  {
    int VAR_6;
    int VAR_7 = (FUNC_2 (VAR_3)
     + FUNC_1 (VAR_3));
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
      {
 const char *VAR_8 = FUNC_3 (VAR_3, VAR_6);
 if (VAR_8 != ((void*)0) && VAR_5 == FUNC_5 (VAR_8)
     && FUNC_6 (VAR_8, VAR_4, VAR_5) == 0)
   {
     return VAR_6;
   }
      }
  }


  {
    struct gdb_user_regs *VAR_9 = FUNC_0 (VAR_3, VAR_2);
    struct user_reg *VAR_10;
    int VAR_11;
    for (VAR_11 = 0, VAR_10 = VAR_9->first; VAR_10 != ((void*)0); VAR_10 = VAR_10->next, VAR_11++)
      {
 if ((VAR_5 < 0 && FUNC_4 (VAR_10->name, VAR_4))
     || (VAR_5 == FUNC_5 (VAR_10->name)
  && FUNC_6 (VAR_10->name, VAR_4, VAR_5) == 0))
   return VAR_1 + VAR_0 + VAR_11;
      }
  }

  return -1;
}
