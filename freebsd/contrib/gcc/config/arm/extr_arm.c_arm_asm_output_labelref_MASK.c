
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (char const*,int *) ;

void
FUNC_3 (FILE *VAR_0, const char *VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;

  while ((VAR_2 = FUNC_0 (* VAR_1)))
    {
      VAR_3 |= (*VAR_1 == '*');
      VAR_1 += VAR_2;
    }

  if (VAR_3)
    FUNC_2 (VAR_1, VAR_0);
  else
    FUNC_1 (VAR_0, "%U%s", VAR_1);
}
