
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int VAR_1 ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*,char*) ;
 struct type* FUNC_6 (struct type*,struct type*) ;
 int FUNC_7 (struct ui_file*,char*,...) ;
 int FUNC_8 (struct type*,int,struct ui_file*,struct type*) ;
 scalar_t__ FUNC_9 (struct type*,struct type*,struct ui_file*,int,int) ;

__attribute__((used)) static void
FUNC_10 (struct type *VAR_2, int VAR_3,
         struct type *VAR_4, struct ui_file *VAR_5,
         int VAR_6, int VAR_7)
{
  int VAR_8;
  struct type *VAR_9;
  struct type *VAR_10;

  VAR_9 = FUNC_1 (VAR_2, VAR_3);
  VAR_10 = FUNC_6 (VAR_9, VAR_4);

  if (FUNC_0 (VAR_9) == VAR_0)
    {
      VAR_9 = FUNC_4 (VAR_9);
      if (FUNC_2 (VAR_9) & VAR_1)
 {
   VAR_9 = FUNC_5 (VAR_9, "___XVU");
   if (VAR_9 == ((void*)0))
     return;
 }
    }

  for (VAR_8 = 0; VAR_8 < FUNC_3 (VAR_9); VAR_8 += 1)
    {
      FUNC_7 (VAR_5, "\n%*swhen ", VAR_7 + 4, "");
      FUNC_8 (VAR_9, VAR_8, VAR_5, VAR_10);
      FUNC_7 (VAR_5, " =>");
      if (FUNC_9 (FUNC_1 (VAR_9, VAR_8),
        VAR_4, VAR_5, VAR_6, VAR_7 + 4) <= 0)
 FUNC_7 (VAR_5, " null;");
    }
}
