
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

tree
FUNC_9 (tree VAR_2, tree* VAR_3)
{
  tree VAR_4;

  if (!FUNC_1 (VAR_2))
    VAR_4 = VAR_1;
  else if (!FUNC_8 (VAR_2)
    || !FUNC_3 (FUNC_2 (VAR_2)))
    {
      VAR_4 = FUNC_7 (VAR_2);
      VAR_2 = FUNC_0 (VAR_4);
    }
  else
    {
      VAR_2 = FUNC_5 (VAR_0, VAR_2, 1);
      VAR_4 = FUNC_7 (VAR_2);
      VAR_2 = FUNC_0 (VAR_4);
      VAR_2 = FUNC_4 (VAR_2, 0);
    }
  *VAR_3 = VAR_4;

  FUNC_6 (!FUNC_1 (VAR_2));
  return VAR_2;
}
