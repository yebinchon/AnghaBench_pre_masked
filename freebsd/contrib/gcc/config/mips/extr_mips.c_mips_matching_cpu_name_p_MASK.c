
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 char FUNC_1 (char const) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static bool
FUNC_3 (const char *VAR_0, const char *VAR_1)
{


  if (FUNC_2 (VAR_0, VAR_1))
    return 1;



  if (FUNC_1 (*VAR_1) == 'r')
    VAR_1++;
  if (!FUNC_0 (*VAR_1))
    return 0;



  if (FUNC_1 (VAR_0[0]) == 'v' && FUNC_1 (VAR_0[1]) == 'r')
    VAR_0 += 2;
  else if (FUNC_1 (VAR_0[0]) == 'r' && FUNC_1 (VAR_0[1]) == 'm')
    VAR_0 += 2;
  else if (FUNC_1 (VAR_0[0]) == 'r')
    VAR_0 += 1;

  return FUNC_2 (VAR_0, VAR_1);
}
