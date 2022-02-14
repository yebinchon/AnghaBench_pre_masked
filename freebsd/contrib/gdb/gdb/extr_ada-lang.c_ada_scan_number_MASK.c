
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;
typedef int LONGEST ;


 scalar_t__ FUNC_0 (char const) ;

int
FUNC_1 (const char VAR_0[], int VAR_1, LONGEST * VAR_2, int *VAR_3)
{
  ULONGEST VAR_4;

  if (!FUNC_0 (VAR_0[VAR_1]))
    return 0;




  VAR_4 = 0;
  while (FUNC_0 (VAR_0[VAR_1]))
    {
      VAR_4 = VAR_4 * 10 + (VAR_0[VAR_1] - '0');
      VAR_1 += 1;
    }

  if (VAR_0[VAR_1] == 'm')
    {
      if (VAR_2 != ((void*)0))
 *VAR_2 = (-(LONGEST) (VAR_4 - 1)) - 1;
      VAR_1 += 1;
    }
  else if (VAR_2 != ((void*)0))
    *VAR_2 = (LONGEST) VAR_4;







  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_1;
  return 1;
}
