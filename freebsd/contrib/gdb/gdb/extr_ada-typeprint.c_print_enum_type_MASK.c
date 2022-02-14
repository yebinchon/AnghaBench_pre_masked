
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ui_file*,char*,...) ;
 int FUNC_5 (int ,struct ui_file*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (struct type *VAR_1, struct ui_file *VAR_2)
{
  int VAR_3 = FUNC_2 (VAR_1);
  int VAR_4, VAR_5;

  FUNC_4 (VAR_2, "(");
  FUNC_6 (" ");

  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      VAR_0;
      if (VAR_4)
 FUNC_4 (VAR_2, ", ");
      FUNC_6 ("    ");
      FUNC_5 (FUNC_3 (FUNC_1 (VAR_1, VAR_4)), VAR_2);
      if (VAR_5 != FUNC_0 (VAR_1, VAR_4))
 {
   FUNC_4 (VAR_2, " => %d", FUNC_0 (VAR_1, VAR_4));
   VAR_5 = FUNC_0 (VAR_1, VAR_4);
 }
      VAR_5 += 1;
    }
  FUNC_4 (VAR_2, ")");
}
