
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (struct ui_file*,char*,int) ;
 int FUNC_1 (char,struct ui_file*) ;
 int FUNC_2 (char*,struct ui_file*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_5 (struct ui_file *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
  if (VAR_7 != VAR_4)
    {
      FUNC_0 (VAR_6, "\n%c ", VAR_7);
      VAR_4 = VAR_7;
    }

  if (VAR_5 != VAR_1)
    FUNC_1 (' ', VAR_6);

  switch (VAR_8)
    {
    case 128:
      FUNC_0 (VAR_6, "<Timeout: %d seconds>", VAR_9);
      return;
    case 129:
      FUNC_0 (VAR_6, "<Error: %s>", FUNC_4 (VAR_0));
      return;
    case 130:
      FUNC_2 ("<Eof>", VAR_6);
      return;
    case 131:
      FUNC_2 ("<Break>", VAR_6);
      return;
    default:
      if (VAR_5 == VAR_2)
 FUNC_0 (VAR_6, "%02x", VAR_8 & 0xff);
      else if (VAR_5 == VAR_3)
 FUNC_0 (VAR_6, "%03o", VAR_8 & 0xff);
      else
 switch (VAR_8)
   {
   case '\\':
     FUNC_2 ("\\\\", VAR_6);
     break;
   case '\b':
     FUNC_2 ("\\b", VAR_6);
     break;
   case '\f':
     FUNC_2 ("\\f", VAR_6);
     break;
   case '\n':
     FUNC_2 ("\\n", VAR_6);
     break;
   case '\r':
     FUNC_2 ("\\r", VAR_6);
     break;
   case '\t':
     FUNC_2 ("\\t", VAR_6);
     break;
   case '\v':
     FUNC_2 ("\\v", VAR_6);
     break;
   default:
     FUNC_0 (VAR_6, FUNC_3 (VAR_8) ? "%c" : "\\x%02x", VAR_8 & 0xFF);
     break;
   }
    }
}
