
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int ) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_4 ;

tree
FUNC_13 (tree VAR_5)
{
  int VAR_6 = 0;
  tree VAR_7 = FUNC_4 (VAR_5);

  FUNC_9 (FUNC_1 (VAR_5) == VAR_0);

  if (!FUNC_11 (FUNC_2 (VAR_5), VAR_2))
    {
      VAR_6 = 1;
      FUNC_8 ("%<operator new%> must return type %qT", VAR_2);
    }

  if (!VAR_7 || VAR_7 == VAR_4
      || !FUNC_11 (FUNC_3 (VAR_7), VAR_3))
    {
      VAR_6 = 2;
      if (VAR_7 && VAR_7 != VAR_4)
 VAR_7 = FUNC_0 (VAR_7);
      FUNC_10 ("%<operator new%> takes type %<size_t%> (%qT) "
        "as first parameter", VAR_3);
    }
  switch (VAR_6)
  {
    case 2:
      VAR_7 = FUNC_12 (VAR_1, VAR_3, VAR_7);

    case 1:
      VAR_5 = FUNC_6
       (FUNC_7 (VAR_2, VAR_7),
        FUNC_5 (VAR_5));

    default:;
  }
  return VAR_5;
}
