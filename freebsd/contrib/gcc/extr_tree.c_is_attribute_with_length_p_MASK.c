
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_1, int VAR_2, tree VAR_3)
{
  int VAR_4;
  const char *VAR_5;

  if (FUNC_2 (VAR_3) != VAR_0)
    return 0;

  VAR_5 = FUNC_1 (VAR_3);
  VAR_4 = FUNC_0 (VAR_3);

  if (VAR_4 == VAR_2
      && FUNC_4 (VAR_1, VAR_5) == 0)
    return 1;


  if (VAR_1[0] == '_')
    {
      FUNC_3 (VAR_1[1] == '_');
      FUNC_3 (VAR_1[VAR_2 - 2] == '_');
      FUNC_3 (VAR_1[VAR_2 - 1] == '_');
      if (VAR_4 == VAR_2 - 4
   && FUNC_5 (VAR_1 + 2, VAR_5, VAR_2 - 4) == 0)
 return 1;
    }
  else
    {
      if (VAR_4 == VAR_2 + 4
   && VAR_5[0] == '_' && VAR_5[1] == '_'
   && VAR_5[VAR_4 - 2] == '_' && VAR_5[VAR_4 - 1] == '_'
   && FUNC_5 (VAR_1, VAR_5 + 2, VAR_2) == 0)
 return 1;
    }

  return 0;
}
