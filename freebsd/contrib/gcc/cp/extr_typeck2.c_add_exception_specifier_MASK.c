
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,scalar_t__) ;

tree
FUNC_11 (tree VAR_6, tree VAR_7, int VAR_8)
{
  bool VAR_9;
  tree VAR_10 = VAR_7;
  bool VAR_11;
  int VAR_12 = -1;

  if (VAR_7 == VAR_4)
    return VAR_6;

  FUNC_8 (VAR_7 && (!VAR_6 || FUNC_4 (VAR_6)));




  VAR_11 = FUNC_2 (VAR_10) == VAR_1;
  if (VAR_11 || FUNC_2 (VAR_10) == VAR_2)
    VAR_10 = FUNC_3 (VAR_10);
  if (VAR_8 < 0)
    VAR_9 = 1;
  else if (FUNC_5 (VAR_10))
    VAR_9 = VAR_11;
  else if (FUNC_2 (VAR_10) == VAR_3)
    VAR_9 = 1;
  else if (VAR_5)
    VAR_9 = 1;
  else
    {
      VAR_9 = 1;




      if (!FUNC_0 (FUNC_6 (VAR_10)))
 VAR_12 = 2;
    }

  if (VAR_9)
    {
      tree VAR_13;

      for (VAR_13 = VAR_6; VAR_13; VAR_13 = FUNC_1 (VAR_13))
 if (FUNC_9 (FUNC_4 (VAR_13), VAR_7))
   break;
      if (!VAR_13)
 VAR_6 = FUNC_10 (VAR_0, VAR_7, VAR_6);
    }
  else
    VAR_12 = 0;

  if (VAR_12 >= 0 && VAR_8)
    FUNC_7 (VAR_0, VAR_10, VAR_12);

  return VAR_6;
}
