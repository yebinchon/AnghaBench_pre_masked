
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 scalar_t__ FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct ui_file*,char*,char*,...) ;
 int FUNC_6 (char*,struct ui_file*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (struct ui_file *VAR_0, struct type *VAR_1)
{
  char *VAR_2;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_4 (VAR_1); VAR_3++)
    {
      FUNC_6 (VAR_3 == 0 ? ": " : ", ", VAR_0);
      FUNC_5 (VAR_0, "%s%s ",
   FUNC_0 (VAR_1, VAR_3) ? "public"
        : (FUNC_3 (VAR_1, VAR_3) ? "protected" : "private"),
   FUNC_1 (VAR_1, VAR_3) ? " virtual" : "");
      VAR_2 = FUNC_7 (FUNC_2 (VAR_1, VAR_3));
      FUNC_5 (VAR_0, "%s", VAR_2 ? VAR_2 : "(null)");
    }
  if (VAR_3 > 0)
    {
      FUNC_6 (" ", VAR_0);
    }
}
