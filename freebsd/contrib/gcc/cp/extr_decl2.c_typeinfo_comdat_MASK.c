
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int ) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_0)
{
  tree VAR_1, VAR_2;
  int VAR_3;

  if (FUNC_4 ("weak", FUNC_2 (VAR_0)))
    return 1;

  for (VAR_1 = FUNC_3 (VAR_0), VAR_3 = 0;
 FUNC_0 (VAR_1, VAR_3, VAR_2); ++VAR_3)
    {
      if (FUNC_5 (FUNC_1 (VAR_2)))
 return 1;
    }

  return 0;
}
