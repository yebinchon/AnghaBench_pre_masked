
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct ui_file*,char*) ;
 int FUNC_3 (char*,struct ui_file*) ;
 int FUNC_4 (int ,char*,struct ui_file*,int,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (struct type *VAR_0, struct ui_file *VAR_1)
{
  int VAR_2, VAR_3 = FUNC_1 (VAR_0);
  if (VAR_3)
    {
      FUNC_2 (VAR_1, "(");
    }
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    {
      if (VAR_2 > 0)
 {
   FUNC_3 (", ", VAR_1);
   FUNC_5 ("    ");
 }





      FUNC_4 (FUNC_0 (VAR_0, VAR_2), ""
    ,VAR_1, -1, 0);
    }
  if (VAR_3)
    {
      FUNC_2 (VAR_1, ")");
    }
}
