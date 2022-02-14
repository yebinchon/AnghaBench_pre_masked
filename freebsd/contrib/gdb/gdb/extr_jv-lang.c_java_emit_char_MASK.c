
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,unsigned int) ;
 int FUNC_1 (int,struct ui_file*) ;
 int FUNC_2 (char*,struct ui_file*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_0, struct ui_file *VAR_1, int VAR_2)
{
  switch (VAR_0)
    {
    case '\\':
    case '\'':
      FUNC_0 (VAR_1, "\\%c", VAR_0);
      break;
    case '\b':
      FUNC_2 ("\\b", VAR_1);
      break;
    case '\t':
      FUNC_2 ("\\t", VAR_1);
      break;
    case '\n':
      FUNC_2 ("\\n", VAR_1);
      break;
    case '\f':
      FUNC_2 ("\\f", VAR_1);
      break;
    case '\r':
      FUNC_2 ("\\r", VAR_1);
      break;
    default:
      if (FUNC_3 (VAR_0))
 FUNC_1 (VAR_0, VAR_1);
      else
 FUNC_0 (VAR_1, "\\u%.4x", (unsigned int) VAR_0);
      break;
    }
}
