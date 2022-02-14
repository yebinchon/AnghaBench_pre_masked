
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ) ;

tree
FUNC_9 (tree VAR_6, tree VAR_7)
{
  tree VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  if (!FUNC_8 (VAR_6, VAR_3, VAR_3, VAR_1,
    VAR_1, VAR_4))
    return 0;

  VAR_8 = FUNC_1 (VAR_6);
  VAR_9 = FUNC_1 (FUNC_0 (VAR_6));
  VAR_11 = FUNC_1 (FUNC_0 (FUNC_0 (VAR_6)));
  VAR_10 = FUNC_1 (FUNC_0 (FUNC_0 (FUNC_0 (VAR_6))));

  if (! FUNC_4 (VAR_10, 1))
    return 0;

  if (! FUNC_5 (VAR_10))
    {
      if (! FUNC_4 (VAR_11, 1))
 {



   if (VAR_7 == VAR_2 || ! FUNC_4 (VAR_7, 1))
     return 0;
 }
      else
 VAR_7 = VAR_11;

      if (FUNC_7 (VAR_10, VAR_7))
 return 0;
    }

  VAR_6 = FUNC_3 (VAR_2, VAR_11);
  VAR_6 = FUNC_6 (VAR_2, VAR_9, VAR_6);
  VAR_6 = FUNC_6 (VAR_2, VAR_8, VAR_6);


  VAR_12 = VAR_5[VAR_0];
  if (!VAR_12)
    return 0;

  return FUNC_2 (VAR_12, VAR_6);
}
