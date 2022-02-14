
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;


 char* FUNC_0 (struct minimal_symbol const*) ;
 scalar_t__ FUNC_1 (struct minimal_symbol const*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3 (const void *VAR_0, const void *VAR_1)
{
  const struct minimal_symbol *VAR_2;
  const struct minimal_symbol *VAR_3;

  VAR_2 = (const struct minimal_symbol *) VAR_0;
  VAR_3 = (const struct minimal_symbol *) VAR_1;

  if (FUNC_1 (VAR_2) < FUNC_1 (VAR_3))
    {
      return (-1);
    }
  else if (FUNC_1 (VAR_2) > FUNC_1 (VAR_3))
    {
      return (1);
    }
  else

    {
      char *VAR_4 = FUNC_0 (VAR_2);
      char *VAR_5 = FUNC_0 (VAR_3);

      if (VAR_4 && VAR_5)
 return FUNC_2 (VAR_4, VAR_5);
      else if (VAR_5)
 return 1;
      else if (VAR_4)
 return -1;
      else
 return (0);
    }
}
