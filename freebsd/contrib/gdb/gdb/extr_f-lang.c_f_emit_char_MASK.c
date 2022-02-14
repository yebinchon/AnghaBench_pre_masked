
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ui_file*,char*,unsigned int) ;
 int FUNC_2 (char*,struct ui_file*) ;

__attribute__((used)) static void
FUNC_3 (int VAR_0, struct ui_file *VAR_1, int VAR_2)
{
  VAR_0 &= 0xFF;

  if (FUNC_0 (VAR_0))
    {
      if (VAR_0 == '\\' || VAR_0 == VAR_2)
 FUNC_2 ("\\", VAR_1);
      FUNC_1 (VAR_1, "%c", VAR_0);
    }
  else
    {
      switch (VAR_0)
 {
 case '\n':
   FUNC_2 ("\\n", VAR_1);
   break;
 case '\b':
   FUNC_2 ("\\b", VAR_1);
   break;
 case '\t':
   FUNC_2 ("\\t", VAR_1);
   break;
 case '\f':
   FUNC_2 ("\\f", VAR_1);
   break;
 case '\r':
   FUNC_2 ("\\r", VAR_1);
   break;
 case '\033':
   FUNC_2 ("\\e", VAR_1);
   break;
 case '\007':
   FUNC_2 ("\\a", VAR_1);
   break;
 default:
   FUNC_1 (VAR_1, "\\%.3o", (unsigned int) VAR_0);
   break;
 }
    }
}
