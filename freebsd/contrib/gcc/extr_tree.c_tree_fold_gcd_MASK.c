
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

tree
FUNC_9 (tree VAR_3, tree VAR_4)
{
  tree VAR_5;
  tree VAR_6 = FUNC_3 (VAR_3);

  FUNC_6 (FUNC_0 (VAR_3) == VAR_1);
  FUNC_6 (FUNC_0 (VAR_4) == VAR_1);

  if (FUNC_7 (VAR_3))
    return VAR_4;

  if (FUNC_7 (VAR_4))
    return VAR_3;

  if (FUNC_8 (VAR_3) == -1)
    VAR_3 = FUNC_5 (VAR_2, VAR_6, VAR_3,
       FUNC_4 (VAR_6, -1));

  if (FUNC_8 (VAR_4) == -1)
    VAR_4 = FUNC_5 (VAR_2, VAR_6, VAR_4,
       FUNC_4 (VAR_6, -1));

  while (1)
    {
      VAR_5 = FUNC_5 (VAR_0, VAR_6, VAR_3, VAR_4);

      if (!FUNC_2 (VAR_5)
   && !FUNC_1 (VAR_5))
 return VAR_4;

      VAR_3 = VAR_4;
      VAR_4 = VAR_5;
    }
}
