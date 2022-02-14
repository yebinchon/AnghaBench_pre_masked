
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;

tree
FUNC_6 (tree VAR_5, int VAR_6)
{
  tree VAR_7 = VAR_4;

  FUNC_3 (VAR_6 > 0);
  if (VAR_6 == 1)
    return VAR_5;





  if (FUNC_0 (VAR_5) != VAR_2)
    {
      VAR_7 = FUNC_2 (FUNC_1 (VAR_5), VAR_6);

      if (FUNC_4 (FUNC_1 (VAR_5), VAR_5, VAR_7))
 return VAR_5;
    }


  if (VAR_6 == (VAR_6 & -VAR_6))
    {
      tree VAR_8;

      VAR_8 = FUNC_2 (FUNC_1 (VAR_5), -VAR_6);
      VAR_5 = FUNC_5 (VAR_0, VAR_5, VAR_8);
    }
  else
    {
      if (!VAR_7)
 VAR_7 = FUNC_2 (FUNC_1 (VAR_5), VAR_6);
      VAR_5 = FUNC_5 (VAR_1, VAR_5, VAR_7);
      VAR_5 = FUNC_5 (VAR_3, VAR_5, VAR_7);
    }

  return VAR_5;
}
