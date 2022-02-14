
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;


 scalar_t__ FUNC_0 (struct value*) ;
 int FUNC_1 (struct ui_file*,char*) ;

__attribute__((used)) static int
FUNC_2 (struct value *VAR_0, struct ui_file *VAR_1)
{
  if (VAR_0 == 0)
    {
      FUNC_1 (VAR_1, "<address of value unknown>");
      return 0;
    }

  if (FUNC_0 (VAR_0))
    {
      FUNC_1 (VAR_1, "<value optimized out>");
      return 0;
    }

  return 1;
}
