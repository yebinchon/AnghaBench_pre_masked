
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_0, tree VAR_1)
{
  tree VAR_2, VAR_3;
  tree VAR_4, VAR_5;
  tree VAR_6, VAR_7;


  VAR_3 = FUNC_1 (VAR_1);
  VAR_2 = FUNC_1 (VAR_0);

  if (FUNC_5 (VAR_3) != FUNC_5 (VAR_2))
    return 0;

  VAR_5 = FUNC_3 (VAR_1);
  VAR_4 = FUNC_3 (VAR_0);
  VAR_7 = VAR_4;

  while (VAR_5 || VAR_4)
    {
      if (!VAR_5
   || !VAR_4
   || !FUNC_2 (VAR_5)
   || !FUNC_2 (VAR_4)
   || FUNC_5 (FUNC_2 (VAR_5))
      != FUNC_5 (FUNC_2 (VAR_4)))
 return 0;

      VAR_5 = FUNC_0 (VAR_5);
      VAR_4 = FUNC_0 (VAR_4);
    }

  VAR_6 = FUNC_6 (VAR_2, VAR_7);
  return FUNC_7 (VAR_6, FUNC_4 (VAR_1));
}
