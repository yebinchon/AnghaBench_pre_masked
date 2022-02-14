
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1 (struct gdbarch *VAR_1, const char *VAR_2,
           int *VAR_3)
{
  if (FUNC_0 (VAR_2, "mode32") == 0)
    {
      *VAR_3 = VAR_0;
      return 1;
    }
  else
    return 0;
}
