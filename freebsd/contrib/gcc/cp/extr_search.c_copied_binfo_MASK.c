
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;

tree
FUNC_7 (tree VAR_1, tree VAR_2)
{
  tree VAR_3 = VAR_0;

  if (FUNC_3 (VAR_1))
    {
      tree VAR_4;

      for (VAR_4 = VAR_2; FUNC_1 (VAR_4);
    VAR_4 = FUNC_1 (VAR_4))
 continue;

      VAR_3 = FUNC_5 (FUNC_2 (VAR_1), FUNC_2 (VAR_4));
    }
  else if (FUNC_1 (VAR_1))
    {
      tree VAR_5;
      tree VAR_6;
      int VAR_7;

      VAR_5 = FUNC_7 (FUNC_1 (VAR_1), VAR_2);
      for (VAR_7 = 0; FUNC_0 (VAR_5, VAR_7, VAR_6); VAR_7++)
 if (FUNC_4 (FUNC_2 (VAR_6), FUNC_2 (VAR_1)))
   {
     VAR_3 = VAR_6;
     break;
   }
    }
  else
    {
      FUNC_6 (FUNC_4 (FUNC_2 (VAR_2), FUNC_2 (VAR_1)));
      VAR_3 = VAR_2;
    }

  FUNC_6 (VAR_3);
  return VAR_3;
}
