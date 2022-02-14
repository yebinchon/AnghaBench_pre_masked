
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,...) ;
 int FUNC_1 (int,struct ui_file*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_0, struct ui_file *VAR_1)
{
  if (VAR_0 == '\n')
    FUNC_1 ('\n', VAR_1);
  else if (VAR_0 == '\r')
    FUNC_0 (VAR_1, "\\r");
  else if (VAR_0 < 0x20)
    FUNC_0 (VAR_1, "^%c", VAR_0 + '@');
  else if (VAR_0 >= 0x7f)
    FUNC_0 (VAR_1, "[%02x]", VAR_0 & 0xff);
  else
    FUNC_1 (VAR_0, VAR_1);
}
