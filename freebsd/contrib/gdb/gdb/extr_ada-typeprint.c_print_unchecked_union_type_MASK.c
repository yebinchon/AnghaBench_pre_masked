
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (int ,int ,struct ui_file*,int,int) ;
 int FUNC_4 (struct ui_file*,char*,...) ;

__attribute__((used)) static void
FUNC_5 (struct type *VAR_0, struct ui_file *VAR_1,
       int VAR_2, int VAR_3)
{
  FUNC_4 (VAR_1, "record (?) is");

  if (VAR_2 < 0)
    FUNC_4 (VAR_1, " ... end record");
  else if (FUNC_2 (VAR_0) == 0)
    FUNC_4 (VAR_1, " null; end record");
  else
    {
      int VAR_4;

      FUNC_4 (VAR_1, "\n%*scase ? is", VAR_3 + 4, "");

      for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_0); VAR_4 += 1)
 {
   FUNC_4 (VAR_1, "\n%*swhen ? =>\n%*s", VAR_3 + 8, "",
       VAR_3 + 12, "");
   FUNC_3 (FUNC_1 (VAR_0, VAR_4),
     FUNC_0 (VAR_0, VAR_4),
     VAR_1, VAR_2 - 1, VAR_3 + 12);
   FUNC_4 (VAR_1, ";");
 }

      FUNC_4 (VAR_1, "\n%*send case;\n%*send record",
   VAR_3 + 4, "", VAR_3, "");
    }
}
