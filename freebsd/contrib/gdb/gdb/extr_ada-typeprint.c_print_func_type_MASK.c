
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (int ,char*,struct ui_file*,int,int ) ;
 int FUNC_5 (struct ui_file*,char*,...) ;
 int FUNC_6 (char*,struct ui_file*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (struct type *VAR_1, struct ui_file *VAR_2, char *VAR_3)
{
  int VAR_4, VAR_5 = FUNC_2 (VAR_1);

  if (FUNC_0 (FUNC_3 (VAR_1)) == VAR_0)
    FUNC_5 (VAR_2, "procedure");
  else
    FUNC_5 (VAR_2, "function");

  if (VAR_3 != ((void*)0) && VAR_3[0] != '\0')
    FUNC_5 (VAR_2, " %s", VAR_3);

  if (VAR_5 > 0)
    {
      FUNC_5 (VAR_2, " (");
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += 1)
 {
   if (VAR_4 > 0)
     {
       FUNC_6 ("; ", VAR_2);
       FUNC_7 ("    ");
     }
   FUNC_5 (VAR_2, "a%d: ", VAR_4 + 1);
   FUNC_4 (FUNC_1 (VAR_1, VAR_4), "", VAR_2, -1, 0);
 }
      FUNC_5 (VAR_2, ")");
    }

  if (FUNC_0 (FUNC_3 (VAR_1)) != VAR_0)
    {
      FUNC_5 (VAR_2, " return ");
      FUNC_4 (FUNC_3 (VAR_1), "", VAR_2, 0, 0);
    }
}
