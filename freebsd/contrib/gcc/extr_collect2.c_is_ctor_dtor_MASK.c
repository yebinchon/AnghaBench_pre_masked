
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,int*,int const) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0)
{
  struct names { const char *const name; const int len; const int ret;
    const int two_underscores; };

  const struct names *VAR_1;
  int VAR_2;
  const char *VAR_3 = VAR_0;

  static const struct names VAR_4[] = {

    { "GLOBAL__I$", sizeof ("GLOBAL__I$")-1, 1, 0 },
    { "GLOBAL__D$", sizeof ("GLOBAL__D$")-1, 2, 0 },






    { "GLOBAL__I_", sizeof ("GLOBAL__I_")-1, 1, 0 },
    { "GLOBAL__D_", sizeof ("GLOBAL__D_")-1, 2, 0 },
    { "GLOBAL__F_", sizeof ("GLOBAL__F_")-1, 5, 0 },
    { "GLOBAL__FI_", sizeof ("GLOBAL__FI_")-1, 3, 0 },
    { "GLOBAL__FD_", sizeof ("GLOBAL__FD_")-1, 4, 0 },
    { ((void*)0), 0, 0, 0 }
  };

  while ((VAR_2 = *VAR_0) == '_')
    ++VAR_0;

  if (VAR_0 == VAR_3)
    return 0;

  for (VAR_1 = &VAR_4[0]; VAR_1->len > 0; VAR_1++)
    {
      if (VAR_2 == VAR_1->name[0]
   && (!VAR_1->two_underscores || ((VAR_0 - VAR_3) >= 2))
   && FUNC_0(VAR_0, VAR_1->name, VAR_1->len) == 0)
 {
   return VAR_1->ret;
 }
    }
  return 0;
}
